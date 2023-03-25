// Generated by gencpp from file ur3_move/mulObjectsPosition.msg
// DO NOT EDIT!


#ifndef UR3_MOVE_MESSAGE_MULOBJECTSPOSITION_H
#define UR3_MOVE_MESSAGE_MULOBJECTSPOSITION_H

#include <ros/service_traits.h>


#include <ur3_move/mulObjectsPositionRequest.h>
#include <ur3_move/mulObjectsPositionResponse.h>


namespace ur3_move
{

struct mulObjectsPosition
{

typedef mulObjectsPositionRequest Request;
typedef mulObjectsPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct mulObjectsPosition
} // namespace ur3_move


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur3_move::mulObjectsPosition > {
  static const char* value()
  {
    return "c1c1fd25f8a31070cac107754a1daacf";
  }

  static const char* value(const ::ur3_move::mulObjectsPosition&) { return value(); }
};

template<>
struct DataType< ::ur3_move::mulObjectsPosition > {
  static const char* value()
  {
    return "ur3_move/mulObjectsPosition";
  }

  static const char* value(const ::ur3_move::mulObjectsPosition&) { return value(); }
};


// service_traits::MD5Sum< ::ur3_move::mulObjectsPositionRequest> should match
// service_traits::MD5Sum< ::ur3_move::mulObjectsPosition >
template<>
struct MD5Sum< ::ur3_move::mulObjectsPositionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur3_move::mulObjectsPosition >::value();
  }
  static const char* value(const ::ur3_move::mulObjectsPositionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur3_move::mulObjectsPositionRequest> should match
// service_traits::DataType< ::ur3_move::mulObjectsPosition >
template<>
struct DataType< ::ur3_move::mulObjectsPositionRequest>
{
  static const char* value()
  {
    return DataType< ::ur3_move::mulObjectsPosition >::value();
  }
  static const char* value(const ::ur3_move::mulObjectsPositionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur3_move::mulObjectsPositionResponse> should match
// service_traits::MD5Sum< ::ur3_move::mulObjectsPosition >
template<>
struct MD5Sum< ::ur3_move::mulObjectsPositionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur3_move::mulObjectsPosition >::value();
  }
  static const char* value(const ::ur3_move::mulObjectsPositionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur3_move::mulObjectsPositionResponse> should match
// service_traits::DataType< ::ur3_move::mulObjectsPosition >
template<>
struct DataType< ::ur3_move::mulObjectsPositionResponse>
{
  static const char* value()
  {
    return DataType< ::ur3_move::mulObjectsPosition >::value();
  }
  static const char* value(const ::ur3_move::mulObjectsPositionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR3_MOVE_MESSAGE_MULOBJECTSPOSITION_H