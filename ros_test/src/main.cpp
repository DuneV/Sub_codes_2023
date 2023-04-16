#include <Arduino.h> // Framework

/*Headers*/

#include <micro_ros_arduino.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <micro_ros_utilities/string_utilities.h>
#include <std_msgs/msg/string.h>
#include <std_msgs/msg/int32.h>
#include <geometry_msgs/msg/twist.h>
#include <ESP32Servo.h>

// microros vairiables

rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

// publisher variables 

rcl_publisher_t publisher;
std_msgs__msg__String response;
// std_msgs__msg__String msg;
rclc_executor_t executor;
rcl_timer_t timer;

// suscriber variables

geometry_msgs__msg__Twist msg;
rclc_executor_t executor_sub;
rcl_subscription_t subscriber;

// ros_domaind_id check 

size_t domain_id = 1;

// twist_variables global

float velx = 0;
float velz = 0;
float vely = 0;

float angx = 0; 
float angy = 0;
float angz = 0;

// To adjust the velocity of the motors

int zero = 1500;
int velrigth = 1300;
int velleft = 1700;
int counter = 0;

#define LED_PIN 13

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}


/*
 * Pins definition on the esp32, look for more information
 * url: 
 */

int M0 = 15;
int M1 = 2;
int M2 = 4;
int M3 = 16;
int M4 = 5;
int M5 = 18;

/*
* Pins definition on the esp32, to the arms 
*/

int arm1_IN1 = 27; // ESP32 pin GIOP27 connected to the IN1 pin L298N
int arm1_IN2 = 26; // ESP32 pin GIOP26 connected to the IN2 pin L298N
// int arm1_ENA = 14; // ESP32 pin GIOP14 connected to the IN1 pin L298N

int arm2_IN1 = 22; // ESP32 pin GIOP27 connected to the IN1 pin L298N
int arm2_IN2 = 23; // ESP32 pin GIOP26 connected to the IN2 pin L298N
// int arm2_ENA = 20; // ESP32 pin GIOP14 connected to the IN1 pin L298N

Servo motor1; 
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;
Servo motor6; 

void error_loop(){
  while(1){
    digitalWrite(LED_PIN, !digitalRead(LED_PIN));
    delay(100);
  }
}

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{  
  RCLC_UNUSED(last_call_time);
  
  char buffer[50];

  if (timer != NULL) {

    if (velx > 0) {

      sprintf(buffer, "X");
      response.data = micro_ros_string_utilities_set(response.data, buffer);
      
    }
    else if (vely > 0) {

      sprintf(buffer, "Y");
      response.data = micro_ros_string_utilities_set(response.data, buffer);
    }
    else if (velz > 0) {
      
      sprintf(buffer, "Z");
      response.data = micro_ros_string_utilities_set(response.data, buffer);
    }
    else{

      sprintf(buffer, " ");
      response.data = micro_ros_string_utilities_set(response.data, buffer);
    }
    RCSOFTCHECK(rcl_publish(&publisher, &response, NULL));
    // response.data++;
  }
}

//twist message cb

void subscription_callback(const void *msgin) {
  
  const geometry_msgs__msg__Twist * msg = (const geometry_msgs__msg__Twist *)msgin;
  
  velx = msg->linear.x;
  vely = msg->linear.y;
  velz = msg->linear.z;

  angx = msg->angular.x;
  angy = msg->angular.y;
  angz = msg->angular.z; 

  // if velocity in x direction is 0 turn off LED, if 1 turn on LED
  // digitalWrite(LED_PIN, (msg->linear.x == 0) ? LOW : HIGH);
}

void motor_init() {
  
  // Allow allocation of all timers

	ESP32PWM::allocateTimer(0);
	ESP32PWM::allocateTimer(1);
	ESP32PWM::allocateTimer(2);
	ESP32PWM::allocateTimer(3);
  
  motor1.setPeriodHertz(50);
  motor2.setPeriodHertz(50);
  motor3.setPeriodHertz(50);
  motor4.setPeriodHertz(50);
  motor5.setPeriodHertz(50);
  motor6.setPeriodHertz(50);
  
  //

  motor1.attach(M0, velrigth, velleft);
  motor2.attach(M1, velrigth, velleft);
  motor3.attach(M2, velrigth, velleft);
  motor4.attach(M3, velrigth, velleft);
  motor5.attach(M4, velrigth, velleft);
  motor6.attach(M5, velrigth, velleft);

  //
  
  motor1.writeMicroseconds(zero);
  motor2.writeMicroseconds(zero);
  motor3.writeMicroseconds(zero);
  motor4.writeMicroseconds(zero);
  motor5.writeMicroseconds(zero);
  motor6.writeMicroseconds(zero);

  //
  delay(7000);
/*
  motor1.writeMicroseconds(velrigth);
  motor2.writeMicroseconds(velrigth);
  motor3.writeMicroseconds(velrigth);
  motor4.writeMicroseconds(velrigth);
  motor5.writeMicroseconds(velleft);
  motor6.writeMicroseconds(velrigth);
*/

}

void arm_init() {
  
  // arm 1
  
  pinMode(arm1_IN1, OUTPUT);
  pinMode(arm1_IN2, OUTPUT);
  // pinMode(arm1_ENA, OUTPUT);
  
  // arm 2

  pinMode(arm2_IN1, OUTPUT);
  pinMode(arm2_IN2, OUTPUT);
  // pinMode(arm2_ENA, OUTPUT);
}

/**************************** MOTOR CONTROL ****************************/

void y_movement(int t)  //motor rotate clockwise -->robot go ahead
{
  motor1.writeMicroseconds(velrigth);
  motor2.writeMicroseconds(velrigth);
  motor3.writeMicroseconds(velrigth);
  motor4.writeMicroseconds(velrigth);
  motor5.writeMicroseconds(velrigth);
  motor6.writeMicroseconds(velrigth);
  if(t!=0){ delay(t); }
}

void neg_y_movement(int t) //motor rotate counterclockwise -->robot go back
{
  motor1.writeMicroseconds(velrigth);
  motor2.writeMicroseconds(velrigth);
  motor3.writeMicroseconds(velrigth);
  motor4.writeMicroseconds(velrigth);
  motor5.writeMicroseconds(velrigth);
  motor6.writeMicroseconds(velrigth);
  if(t!=0){ delay(t); }
}

void go_stop() //motor brake -->robot stop
{
  motor1.writeMicroseconds(zero);
  motor2.writeMicroseconds(zero);
  motor3.writeMicroseconds(zero);
  motor4.writeMicroseconds(zero);
  motor5.writeMicroseconds(zero);
  motor6.writeMicroseconds(zero);
}

void x_movement(int t)  //left motor rotate clockwise and right motor rotate counterclockwise -->robot turn right
{
  motor1.writeMicroseconds(velleft);
  motor2.writeMicroseconds(velleft);
  motor3.writeMicroseconds(velleft);
  motor4.writeMicroseconds(velleft);
  motor5.writeMicroseconds(velleft);
  motor6.writeMicroseconds(velleft);
  if(t!=0){ delay(t); }
}

void neg_x_movement(int t) //left motor rotate counterclockwise and right motor rotate clockwise -->robot turn left
{
  motor1.writeMicroseconds(velrigth);
  motor2.writeMicroseconds(velrigth);
  motor3.writeMicroseconds(velrigth);
  motor4.writeMicroseconds(velrigth);
  motor5.writeMicroseconds(velrigth);
  motor6.writeMicroseconds(velrigth);
  if(t!=0){ delay(t); }
}

void z_movement(int t) //left motor rotate counterclockwise and right motor rotate clockwise -->robot turn left
{
  motor1.writeMicroseconds(velrigth);
  motor2.writeMicroseconds(velrigth);
  motor3.writeMicroseconds(velrigth);
  motor4.writeMicroseconds(velrigth);
  motor5.writeMicroseconds(velrigth);
  motor6.writeMicroseconds(velrigth);
  if(t!=0){ delay(t); }
}

void neg_z_movement(int t) //left motor rotate counterclockwise and right motor rotate clockwise -->robot turn left
{
  motor1.writeMicroseconds(velrigth);
  motor2.writeMicroseconds(velrigth);
  motor3.writeMicroseconds(velrigth);
  motor4.writeMicroseconds(velrigth);
  motor5.writeMicroseconds(velrigth);
  motor6.writeMicroseconds(velrigth);
  if(t!=0){ delay(t); }
}

void open_arm1() //move the first arm
{
  digitalWrite(arm1_IN1, HIGH); // control the motor's direction in clockwise
  digitalWrite(arm1_IN2, LOW);  // control the motor's direction in clockwise
}

void close_arm1()
{
  digitalWrite(arm1_IN1, LOW); // control the motor's direction in counterclockwise
  digitalWrite(arm1_IN2, HIGH);  // control the motor's direction in counterclockwise
}

void open_arm2()
{
  digitalWrite(arm2_IN1, HIGH); // control the motor's direction in clockwise
  digitalWrite(arm2_IN2, LOW);  // control the motor's direction in clockwise
}

void close_arm1()
{
  digitalWrite(arm2_IN1, LOW); // control the motor's direction in counterclockwise
  digitalWrite(arm2_IN2, HIGH);  // control the motor's direction in counterclockwise
}

void controler(int x, int y, int z, int a, int b, int c)
{
  if (x == 0 && y == 0 && z == 0)
  {
      go_stop();
  }
  else {

		if(x > 0 ){

      x_movement(2000);

		}
		else if(y < 0){
      neg_y_movement(2000);

		}
		else if(y > 0  ){
			y_movement(2000);

		}
		else if(x < 0){
      neg_x_movement(2000);
		}
		else if(z > 0 ){
      z_movement(2000);

		}
		else if(z < 0){

      neg_z_movement(2000);

    }
  }
}

void setup() {
  
  motor_init();

  set_microros_transports();
  
  /*
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);  
  delay(2000);
  */

  allocator = rcl_get_default_allocator();
  
  rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
  
  RCCHECK(rcl_init_options_init(&init_options, allocator));

  RCCHECK(rcl_init_options_set_domain_id(&init_options, domain_id));
  
  // create init_options
  
  RCCHECK(rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator));

  // create node

  RCCHECK(rclc_node_init_default(&node, "micro_ros_arduino_node", "", &support));

  // create subscriber
  RCCHECK(rclc_subscription_init_default(
    &subscriber,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
    "cmd_vel"));
  
  // create publisher
  RCCHECK(rclc_publisher_init_default(
    &publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
    "micro_ros_arduino_node_publisher"));
  
  // create timer
  // create timer, called every 1000 ms to publish heartbeat
  const unsigned int timer_timeout = 1000;
  RCCHECK(rclc_timer_init_default(
    &timer,
    &support,
    RCL_MS_TO_NS(timer_timeout),
    timer_callback));

  // create executor

  RCCHECK(rclc_executor_init(&executor_sub, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_subscription(&executor_sub, &subscriber, &msg, &subscription_callback, ON_NEW_DATA));
  
  RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
  RCCHECK(rclc_executor_add_timer(&executor, &timer));

  //response.data = 0;
}

void loop() {

  delay(100);
  RCSOFTCHECK(rclc_executor_spin_some(&executor_sub, RCL_MS_TO_NS(100)));
  RCSOFTCHECK(rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100)));
  controler(velx, vely, velz, angx, angy, angz);
  
}