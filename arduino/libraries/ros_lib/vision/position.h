#ifndef _ROS_vision_position_h
#define _ROS_vision_position_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class position : public ros::Msg
  {
    public:
      typedef int64_t _PositionX_type;
      _PositionX_type PositionX;
      typedef int64_t _PositionY_type;
      _PositionY_type PositionY;

    position():
      PositionX(0),
      PositionY(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_PositionX;
      u_PositionX.real = this->PositionX;
      *(outbuffer + offset + 0) = (u_PositionX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_PositionX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_PositionX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_PositionX.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_PositionX.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_PositionX.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_PositionX.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_PositionX.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->PositionX);
      union {
        int64_t real;
        uint64_t base;
      } u_PositionY;
      u_PositionY.real = this->PositionY;
      *(outbuffer + offset + 0) = (u_PositionY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_PositionY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_PositionY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_PositionY.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_PositionY.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_PositionY.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_PositionY.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_PositionY.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->PositionY);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_PositionX;
      u_PositionX.base = 0;
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_PositionX.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->PositionX = u_PositionX.real;
      offset += sizeof(this->PositionX);
      union {
        int64_t real;
        uint64_t base;
      } u_PositionY;
      u_PositionY.base = 0;
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_PositionY.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->PositionY = u_PositionY.real;
      offset += sizeof(this->PositionY);
     return offset;
    }

    const char * getType(){ return "vision/position"; };
    const char * getMD5(){ return "036ac6e5b45c20f48b1a12202d3ba9a8"; };

  };

}
#endif
