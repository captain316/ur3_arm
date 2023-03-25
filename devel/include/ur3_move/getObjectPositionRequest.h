// Generated by gencpp from file ur3_move/getObjectPositionRequest.msg
// DO NOT EDIT!


#ifndef UR3_MOVE_MESSAGE_GETOBJECTPOSITIONREQUEST_H
#define UR3_MOVE_MESSAGE_GETOBJECTPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur3_move
{
template <class ContainerAllocator>
struct getObjectPositionRequest_
{
  typedef getObjectPositionRequest_<ContainerAllocator> Type;

  getObjectPositionRequest_()
    : flag(false)  {
    }
  getObjectPositionRequest_(const ContainerAllocator& _alloc)
    : flag(false)  {
  (void)_alloc;
    }



   typedef uint8_t _flag_type;
  _flag_type flag;





  typedef boost::shared_ptr< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct getObjectPositionRequest_

typedef ::ur3_move::getObjectPositionRequest_<std::allocator<void> > getObjectPositionRequest;

typedef boost::shared_ptr< ::ur3_move::getObjectPositionRequest > getObjectPositionRequestPtr;
typedef boost::shared_ptr< ::ur3_move::getObjectPositionRequest const> getObjectPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3_move::getObjectPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur3_move::getObjectPositionRequest_<ContainerAllocator1> & lhs, const ::ur3_move::getObjectPositionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.flag == rhs.flag;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur3_move::getObjectPositionRequest_<ContainerAllocator1> & lhs, const ::ur3_move::getObjectPositionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur3_move

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "24842bc754e0f5cc982338eca1269251";
  }

  static const char* value(const ::ur3_move::getObjectPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x24842bc754e0f5ccULL;
  static const uint64_t static_value2 = 0x982338eca1269251ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3_move/getObjectPositionRequest";
  }

  static const char* value(const ::ur3_move::getObjectPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool flag\n"
;
  }

  static const char* value(const ::ur3_move::getObjectPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct getObjectPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3_move::getObjectPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3_move::getObjectPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_MOVE_MESSAGE_GETOBJECTPOSITIONREQUEST_H
