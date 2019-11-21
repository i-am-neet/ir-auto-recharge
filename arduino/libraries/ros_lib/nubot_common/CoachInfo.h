#ifndef _ROS_nubot_common_CoachInfo_h
#define _ROS_nubot_common_CoachInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/Point2d.h"

namespace nubot_common
{

  class CoachInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef uint8_t _MatchMode_type;
      _MatchMode_type MatchMode;
      typedef uint8_t _MatchType_type;
      _MatchType_type MatchType;
      typedef uint8_t _TestMode_type;
      _TestMode_type TestMode;
      typedef nubot_common::Point2d _pointA_type;
      _pointA_type pointA;
      typedef nubot_common::Point2d _pointB_type;
      _pointB_type pointB;
      typedef int16_t _angleA_type;
      _angleA_type angleA;
      typedef int16_t _angleB_type;
      _angleB_type angleB;
      typedef uint8_t _idA_type;
      _idA_type idA;
      typedef uint8_t _idB_type;
      _idB_type idB;
      typedef uint8_t _kickforce_type;
      _kickforce_type kickforce;

    CoachInfo():
      header(),
      MatchMode(0),
      MatchType(0),
      TestMode(0),
      pointA(),
      pointB(),
      angleA(0),
      angleB(0),
      idA(0),
      idB(0),
      kickforce(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->MatchMode >> (8 * 0)) & 0xFF;
      offset += sizeof(this->MatchMode);
      *(outbuffer + offset + 0) = (this->MatchType >> (8 * 0)) & 0xFF;
      offset += sizeof(this->MatchType);
      *(outbuffer + offset + 0) = (this->TestMode >> (8 * 0)) & 0xFF;
      offset += sizeof(this->TestMode);
      offset += this->pointA.serialize(outbuffer + offset);
      offset += this->pointB.serialize(outbuffer + offset);
      union {
        int16_t real;
        uint16_t base;
      } u_angleA;
      u_angleA.real = this->angleA;
      *(outbuffer + offset + 0) = (u_angleA.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angleA.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->angleA);
      union {
        int16_t real;
        uint16_t base;
      } u_angleB;
      u_angleB.real = this->angleB;
      *(outbuffer + offset + 0) = (u_angleB.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_angleB.base >> (8 * 1)) & 0xFF;
      offset += sizeof(this->angleB);
      *(outbuffer + offset + 0) = (this->idA >> (8 * 0)) & 0xFF;
      offset += sizeof(this->idA);
      *(outbuffer + offset + 0) = (this->idB >> (8 * 0)) & 0xFF;
      offset += sizeof(this->idB);
      *(outbuffer + offset + 0) = (this->kickforce >> (8 * 0)) & 0xFF;
      offset += sizeof(this->kickforce);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      this->MatchMode =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->MatchMode);
      this->MatchType =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->MatchType);
      this->TestMode =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->TestMode);
      offset += this->pointA.deserialize(inbuffer + offset);
      offset += this->pointB.deserialize(inbuffer + offset);
      union {
        int16_t real;
        uint16_t base;
      } u_angleA;
      u_angleA.base = 0;
      u_angleA.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angleA.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->angleA = u_angleA.real;
      offset += sizeof(this->angleA);
      union {
        int16_t real;
        uint16_t base;
      } u_angleB;
      u_angleB.base = 0;
      u_angleB.base |= ((uint16_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_angleB.base |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->angleB = u_angleB.real;
      offset += sizeof(this->angleB);
      this->idA =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->idA);
      this->idB =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->idB);
      this->kickforce =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->kickforce);
     return offset;
    }

    const char * getType(){ return "nubot_common/CoachInfo"; };
    const char * getMD5(){ return "7bb01a0f4328cb28beb61d4f502c2969"; };

  };

}
#endif
