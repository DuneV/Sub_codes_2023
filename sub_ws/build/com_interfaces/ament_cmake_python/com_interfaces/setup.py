from setuptools import find_packages
from setuptools import setup

setup(
    name='com_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('com_interfaces', 'com_interfaces.*')),
)
