//ROS头文件
#include <ros/ros.h>
//自定义msg产生的头文件
#include <sensor_msgs/Imu.h>

int main(int argc, char **argv)
{
  //用于解析ROS参数，第三个参数为本节点名
  ros::init(argc, argv, "talker");

  //实例化句柄，初始化node
  ros::NodeHandle nh;


  sensor_msgs::imu msg;
  msg.x = 1.0;
  msg.y = 1.0;
  msg.state = "working";

  //创建publisher//（即发送串口数据）
  ros::Publisher pub = nh.advertise<sensor_msgs::imu>("imu_info", 1);

  //定义发布的频率 
  ros::Rate loop_rate(1.0);
  //循环发布msg
  while (ros::ok())
  {
    //以指数增长，每隔1秒更新一次
    msg.x = 1.03 * msg.x;
    msg.y = 1.01 * msg.y;
    ROS_INFO("Talker: imu: x = %f, y = %f ",  msg.x ,msg.y);
    //以1Hz的频率发布msg
    pub.publish(msg);
    //根据前面定义的频率, sleep 1s
    loop_rate.sleep();//根据前面的定义的loop_rate,设置1s的暂停
  }

  return 0;
} 

