# Submarine Repository

This repository corresponds to a series of open source code developed in python and c++ for systems based on ROS2 and other platforms for the project Submarine belong to ROBOCOL Uniandes. Each package will have its execution requirements or possible libraries necessary for the construction and execution of these.

## Starting 🚀

_To run most scripts you need to have them in a ROS workspace,downloading the respective package._

### Pre-requirements 📋

Needed

```
Python 3.8
Ubuntu 22.04 
ROS2 Humble
VS code with PlatfomIO extension 1.8 higher
```
Download links
- [Python](https://www.python.org/downloads/) 
- [ROS2 -- Humble](https://docs.ros.org/en/humble/Installation.html)
- [VS Code](https://code.visualstudio.com/)

Recommend to use a Code Editor
- [Visual Studio](https://code.visualstudio.com/docs/setup/linux)
- [PyCharm](https://linuxconfig.org/how-to-install-pycharm-on-ubuntu-20-04-linux-desktop)


### Installation and pre-requisites 🔧

_Be sure that you have install those pkgs

```
sudo pip install ds4drv
```
```
sudo pip install opencv-python
```

_The first step is to clone the repository to a folder of your choice._

_Look for the folder that you want to beand in the terminal_

```
https://github.com/DuneV/Sub_codes_2023.git
```

_Second, enter to the folder_

```
cd /folderle_of_preference
```

_Third, copy this file  with the next command (case package)_

```
cp avr /source_folder(package)  /destination_folder(workspace_ws/src)
```

## Run Test⚙️

_Enter to your workspace_

```
colcon build
```

### Troubleshooting 🔩

_You may not have all the necessary libraries and packages, you can download a package manager like pip to the python libraries (pynput, pytteseract, rosserial, cv2, cvbridge, threading, etc.) or sudo apt-get install ros_distribution-package-ersion_

```
sudo pip install ds4drv
```

### STM32 execution ⌨️

1. Open STMCubeIDE editor
2. Open the file as a new project on workspace
3. Adjust the [STM32HardwareFile](https://github.com/DuneV/glowing-enigma/blob/main/CubeIDE_Project/Stm_ros_L4/Core/Inc/STM32Hardware.h) for your board.
4. Upload the project.
5. run the rosserial_python, and the subcribers/publisher are going to with STM.

## License 📄

This project is under the Public License - mira el archivo [LICENSE.md](LICENSE.md) for more details.
