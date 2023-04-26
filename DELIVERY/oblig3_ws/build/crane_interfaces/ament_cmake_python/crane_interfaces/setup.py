from setuptools import find_packages
from setuptools import setup

setup(
    name='crane_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('crane_interfaces', 'crane_interfaces.*')),
)
