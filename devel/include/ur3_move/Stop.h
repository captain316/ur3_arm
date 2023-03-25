// Generated by gencpp from file ur3_move/Stop.msg
// DO NOT EDIT!


#ifndef UR3_MOVE_MESSAGE_STOP_H
#define UR3_MOVE_MESSAGE_STOP_H

#include <ros/service_traits.h>


#include <ur3_move/StopRequest.h>
#include <ur3_move/StopResponse.h>


namespace ur3_move
{

struct Stop
{

typedef StopRequest Request;
typedef StopResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Stop
} // namespace ur3_move


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ur3_move::Stop > {
  static const char* value()
  {
    return "afc6579bcf2451c763cb3bef58337e2b";
  }

  static const char* value(const ::ur3_move::Stop&) { return value(); }
};

template<>
struct DataType< ::ur3_move::Stop > {
  static const char* value()
  {
    return "ur3_move/Stop";
  }

  static const char* value(const ::ur3_move::Stop&) { return value(); }
};


// service_traits::MD5Sum< ::ur3_move::StopRequest> should match
// service_traits::MD5Sum< ::ur3_move::Stop >
template<>
struct MD5Sum< ::ur3_move::StopRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ur3_move::Stop >::value();
  }
  static const char* value(const ::ur3_move::StopRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur3_move::StopRequest> should match
// service_traits::DataType< ::ur3_move::Stop >
template<>
struct DataType< ::ur3_move::StopRequest>
{
  static const char* value()
  {
    return DataType< ::ur3_move::Stop >::value();
  }
  static const char* value(const ::ur3_move::StopRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ur3_move::StopResponse> should match
// service_traits::MD5Sum< ::ur3_move::Stop >
template<>
struct MD5Sum< ::ur3_move::StopResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ur3_move::Stop >::value();
  }
  static const char* value(const ::ur3_move::StopResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ur3_move::StopResponse> should match
// service_traits::DataType< ::ur3_move::Stop >
template<>
struct DataType< ::ur3_move::StopResponse>
{
  static const char* value()
  {
    return DataType< ::ur3_move::Stop >::value();
  }
  static const char* value(const ::ur3_move::StopResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UR3_MOVE_MESSAGE_STOP_H
