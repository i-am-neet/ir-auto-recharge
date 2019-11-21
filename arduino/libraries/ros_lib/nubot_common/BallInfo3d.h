#ifndef _ROS_nubot_common_BallInfo3d_h
#define _ROS_nubot_common_BallInfo3d_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/Point3d.h"

namespace nubot_common
{

  class BallInfo3d : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef nubot_common::Point3d _pos_type;
      _pos_type pos;
      typedef nubot_common::Point3d _velocity_type;
      _velocity_type velocity;
      typedef bool _pos_known_3d_type;
      _pos_known_3d_type pos_known_3d;
      typedef bool _pos_known_2d_type;
      _pos_known_2d_type pos_known_2d;
      typedef bool _velocity_known_type;
      _velocity_known_type velocity_known;

    BallInfo3d():
      header(),
      pos(),
      velocity(),
      pos_known_3d(0),
      pos_known_2d(0),
      velocity_known(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->pos.serialize(outbuffer + offset);
      offset += this->velocity.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_pos_known_3d;
      u_pos_known_3d.real = this->pos_known_3d;
      *(outbuffer + offset + 0) = (u_pos_known_3d.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_known_3d);
      union {
        bool real;
        uint8_t base;
      } u_pos_known_2d;
      u_pos_known_2d.real = this->pos_known_2d;
      *(outbuffer + offset + 0) = (u_pos_known_2d.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_known_2d);
      union {
        bool real;
        uint8_t base;
      } u_velocity_known;
      u_velocity_known.real = this->velocity_known;
      *(outbuffer + offset + 0) = (u_velocity_known.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->velocity_known);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->pos.deserialize(inbuffer + offset);
      offset += this->velocity.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_pos_known_3d;
      u_pos_known_3d.base = 0;
      u_pos_known_3d.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_known_3d = u_pos_known_3d.real;
      offset += sizeof(this->pos_known_3d);
      union {
        bool real;
        uint8_t base;
      } u_pos_known_2d;
      u_pos_known_2d.base = 0;
      u_pos_known_2d.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_known_2d = u_pos_known_2d.real;
      offset += sizeof(this->pos_known_2d);
      union {
        bool real;
        uint8_t base;
      } u_velocity_known;
      u_velocity_known.base = 0;
      u_velocity_known.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->velocity_known = u_velocity_known.real;
      offset += sizeof(this->velocity_known);
     return offset;
    }

    const char * getType(){ return "nubot_common/BallInfo3d"; };
    const char * getMD5(){ return "6634a529c2fba000f06cf99f5ab31312"; };

  };

}
#endif
