#ifndef _ROS_nubot_common_FrontBallInfo_h
#define _ROS_nubot_common_FrontBallInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/PPoint.h"

namespace nubot_common
{

  class FrontBallInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef nubot_common::PPoint _real_pos_type;
      _real_pos_type real_pos;
      typedef bool _pos_known_type;
      _pos_known_type pos_known;

    FrontBallInfo():
      header(),
      real_pos(),
      pos_known(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->real_pos.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_pos_known;
      u_pos_known.real = this->pos_known;
      *(outbuffer + offset + 0) = (u_pos_known.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_known);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->real_pos.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_pos_known;
      u_pos_known.base = 0;
      u_pos_known.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_known = u_pos_known.real;
      offset += sizeof(this->pos_known);
     return offset;
    }

    const char * getType(){ return "nubot_common/FrontBallInfo"; };
    const char * getMD5(){ return "2f6f5be4b3c5cce090957cd65810f7ac"; };

  };

}
#endif
