#include <ros/ros.h>
#include <tf/tf.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Pose.h>
#include <nav_msgs/Odometry.h>
#include <nav_msgs/OccupancyGrid.h>
#include <nav_msgs/MapMetaData.h>

void chatterCallback (const nav_msgs::OccupancyGrid::ConstPtr& msg){

	ROS_INFO("merged map width: [%d]", msg->info.width);
	ROS_INFO("merged map height: [%d]", msg->info.height);
	ROS_INFO("merged map origin x: [%f]", msg->info.origin.position.x);
	ROS_INFO("merged map origin y: [%f]", msg->info.origin.position.y);
	ROS_INFO(" ");
	
}
void chatterCallback2 (const nav_msgs::OccupancyGrid::ConstPtr& msg){

	ROS_INFO("robot1 map width: [%d]", msg->info.width);
	ROS_INFO("robot1 map height: [%d]", msg->info.height);
	ROS_INFO("robot1 map origin x: [%f]", msg->info.origin.position.x);
	ROS_INFO("robot1 map origin y: [%f]", msg->info.origin.position.y);
	ROS_INFO(" ");


}
void chatterCallback3 (const nav_msgs::OccupancyGrid::ConstPtr& msg){

	ROS_INFO("robot2 map width: [%d]", msg->info.width);
	ROS_INFO("robot2 map height: [%d]", msg->info.height);
	ROS_INFO("robot2 map origin x: [%f]", msg->info.origin.position.x);
	ROS_INFO("robot2 map origin y: [%f]", msg->info.origin.position.y);
	ROS_INFO(" ");


}
void chatterCallback4 (const nav_msgs::OccupancyGrid::ConstPtr& msg){

	ROS_INFO("robot3 map width: [%d]", msg->info.width);
	ROS_INFO("robot3 map height: [%d]", msg->info.height);
	ROS_INFO("robot3 map origin x: [%f]", msg->info.origin.position.x);
	ROS_INFO("robot3 map origin y: [%f]", msg->info.origin.position.y);
	ROS_INFO(" ");


}

int main(int argc, char **argv){
	
	ros::init(argc, argv, "subP3AT");
	ros::NodeHandle n;

	ros::Subscriber sub = n.subscribe("/map_merge/map",1000, chatterCallback);
ros::Subscriber sub2 = n.subscribe("/robot_1/map",1000, chatterCallback2);
ros::Subscriber sub3 = n.subscribe("/robot_2/map",1000, chatterCallback3);
ros::Subscriber sub4 = n.subscribe("/robot_3/map",1000, chatterCallback4);

        ros::spin();
	return 0;
}
