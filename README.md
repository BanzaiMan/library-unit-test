Library testing example in which the performance of a square root function is being tested using a test case where the square root of 16.0 is expected to give 4.0.

## Build from Source

1. [Install ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu) and the following build tools.

        sudo apt-get install python-wstool python-catkin-tools clang-format-3.9

1. Re-use or create a catkin workspace:

        export CATKIN_WS=~/ws_catkin
        mkdir -p $CATKIN_WS/src
        cd $CATKIN_WS/src

1. Download the required repositories and install any dependencies:

        git clone https://github.com/tomin11/library_unit_test.git

1. Configure and build the workspace:

        cd $CATKIN_WS
        catkin config --extend /opt/ros/$ROS_DISTRO --cmake-args -DCMAKE_BUILD_TYPE=Release
        catkin build

1. Source the workspace.

        source ./devel/setup.bash

## Run the test

1. Run the test

        catkin run_tests

It can be seen that the test was passed successfully. In test/testsqrt.cpp, **EXPECT_EQ(sqrt(16.0),4.0);** expects 4.0 as the square root of 16.0. To cause the test to fail, replace 4.0 by some other number.
