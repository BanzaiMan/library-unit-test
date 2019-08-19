#include <math.h>
#include <ros/ros.h>
#include <gtest/gtest.h>

TEST(TestSuite, test1)
{
	EXPECT_EQ(sqrt(16.0),3.0);
}
int main(int argc,char **argv)
{
	testing::InitGoogleTest(&argc,argv);
	ros::init(argc,argv,"lib_test");
	ros::NodeHandle nh;
	return RUN_ALL_TESTS();
}
