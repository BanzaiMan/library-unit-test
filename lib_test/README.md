Library testing example in which the performance of a square root function is being tested using a test case where the square root of 16 is expected to give 4.

Steps
1. Download test_1 into catkin_ws/src
2. Go to catkin_ws/ and run 'catkin_make'
3. Run 'source devel/setup.bash'
4. Run 'catkin_make run_tests'
5. It is observed that the test is passed.
6. If you want the test to fail, go to test_1/test/testsqrt.cpp a
7. Edit EXPECT_EQ(sqrt(16.0),4.0); by replacing 4.0 by some other number

Reference
https://www.youtube.com/watch?v=LwZgcofD6O0
