#ifndef ROS_GZ_BRIDGE__CONVERT__GPS_UTILS_HPP_
#define ROS_GZ_BRIDGE__CONVERT__GPS_UTILS_HPP_

// Gazebo Msgs
#include <gz/msgs/navsat.pb.h>

// ROS 2 messages
#include <asv_interfaces/msg/gps_velocity.hpp>

#include <ros_gz_bridge/convert_decl.hpp>

namespace ros_gz_bridge
{
template<>
void
convert_ros_to_gz(
  const asv_interfaces::msg::GPSVelocity & ros_msg,
  gz::msgs::NavSat & gz_msg);
  
template<>
void
convert_gz_to_ros(
  const gz::msgs::NavSat & gz_msg,
  asv_interfaces::msg::GPSVelocity & ros_msg);
}  // namespace ros_gz_bridge

#endif  // ROS_GZ_BRIDGE__CONVERT__GPS_UTILS_HPP_
