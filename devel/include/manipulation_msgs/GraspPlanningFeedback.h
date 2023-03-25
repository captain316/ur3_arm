// Generated by gencpp from file manipulation_msgs/GraspPlanningFeedback.msg
// DO NOT EDIT!


#ifndef MANIPULATION_MSGS_MESSAGE_GRASPPLANNINGFEEDBACK_H
#define MANIPULATION_MSGS_MESSAGE_GRASPPLANNINGFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <manipulation_msgs/Grasp.h>

namespace manipulation_msgs
{
template <class ContainerAllocator>
struct GraspPlanningFeedback_
{
  typedef GraspPlanningFeedback_<ContainerAllocator> Type;

  GraspPlanningFeedback_()
    : grasps()  {
    }
  GraspPlanningFeedback_(const ContainerAllocator& _alloc)
    : grasps(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::manipulation_msgs::Grasp_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::manipulation_msgs::Grasp_<ContainerAllocator> >> _grasps_type;
  _grasps_type grasps;





  typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct GraspPlanningFeedback_

typedef ::manipulation_msgs::GraspPlanningFeedback_<std::allocator<void> > GraspPlanningFeedback;

typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningFeedback > GraspPlanningFeedbackPtr;
typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningFeedback const> GraspPlanningFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator1> & lhs, const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.grasps == rhs.grasps;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator1> & lhs, const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manipulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b493f83ef98679f05dc681205fbe54c";
  }

  static const char* value(const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b493f83ef98679fULL;
  static const uint64_t static_value2 = 0x05dc681205fbe54cULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/GraspPlanningFeedback";
  }

  static const char* value(const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# grasps planned so far\n"
"Grasp[] grasps\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: manipulation_msgs/Grasp\n"
"# A name for this grasp\n"
"string id\n"
"\n"
"# The internal posture of the hand for the pre-grasp\n"
"# only positions are used\n"
"sensor_msgs/JointState pre_grasp_posture\n"
"\n"
"# The internal posture of the hand for the grasp\n"
"# positions and efforts are used\n"
"sensor_msgs/JointState grasp_posture\n"
"\n"
"# The position of the end-effector for the grasp \n"
"geometry_msgs/PoseStamped grasp_pose\n"
"\n"
"# The estimated probability of success for this grasp, or some other\n"
"# measure of how \"good\" it is.\n"
"float64 grasp_quality\n"
"\n"
"# The approach motion\n"
"GripperTranslation approach\n"
"\n"
"# The retreat motion\n"
"GripperTranslation retreat\n"
"\n"
"# the maximum contact force to use while grasping (<=0 to disable)\n"
"float32 max_contact_force\n"
"\n"
"# an optional list of obstacles that we have semantic information about\n"
"# and that can be touched/pushed/moved in the course of grasping\n"
"string[] allowed_touch_objects\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: manipulation_msgs/GripperTranslation\n"
"# defines a translation for the gripper, used in pickup or place tasks\n"
"# for example for lifting an object off a table or approaching the table for placing\n"
"\n"
"# the direction of the translation\n"
"geometry_msgs/Vector3Stamped direction\n"
"\n"
"# the desired translation distance\n"
"float32 desired_distance\n"
"\n"
"# the min distance that must be considered feasible before the\n"
"# grasp is even attempted\n"
"float32 min_distance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3Stamped\n"
"# This represents a Vector3 with reference coordinate frame and timestamp\n"
"Header header\n"
"Vector3 vector\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grasps);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspPlanningFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator>& v)
  {
    s << indent << "grasps[]" << std::endl;
    for (size_t i = 0; i < v.grasps.size(); ++i)
    {
      s << indent << "  grasps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::manipulation_msgs::Grasp_<ContainerAllocator> >::stream(s, indent + "    ", v.grasps[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANIPULATION_MSGS_MESSAGE_GRASPPLANNINGFEEDBACK_H
