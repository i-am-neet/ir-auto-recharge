#ifndef _ROS_nubot_common_BallInfo_h
#define _ROS_nubot_common_BallInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/Point2d.h"
#include "nubot_common/PPoint.h"

namespace nubot_common
{

  class BallInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _ballinfostate_type;
      _ballinfostate_type ballinfostate;
      typedef nubot_common::Point2d _pos_type;
      _pos_type pos;
      typedef nubot_common::PPoint _real_pos_type;
      _real_pos_type real_pos;
      typedef nubot_common::Point2d _velocity_type;
      _velocity_type velocity;
      typedef bool _pos_known_type;
      _pos_known_type pos_known;
      typedef bool _velocity_known_type;
      _velocity_known_type velocity_known;

    BallInfo():
      header(),
      ballinfostate(0),
      pos(),
      real_pos(),
      velocity(),
      pos_known(0),
      velocity_known(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_ballinfostate;
      u_ballinfostate.real = this->ballinfostate;
      *(outbuffer + offset + 0) = (u_ballinfostate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ballinfostate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ballinfostate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ballinfostate.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ballinfostate);
      offset += this->pos.serialize(outbuffer + offset);
      offset += this->real_pos.serialize(outbuffer + offset);
      offset += this->velocity.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_pos_known;
      u_pos_known.real = this->pos_known;
      *(outbuffer + offset + 0) = (u_pos_known.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->pos_known);
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
      union {
        int32_t real;
        uint32_t base;
      } u_ballinfostate;
      u_ballinfostate.base = 0;
      u_ballinfostate.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ballinfostate.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ballinfostate.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ballinfostate.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ballinfostate = u_ballinfostate.real;
      offset += sizeof(this->ballinfostate);
      offset += this->pos.deserialize(inbuffer + offset);
      offset += this->real_pos.deserialize(inbuffer + offset);
      offset += this->velocity.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_pos_known;
      u_pos_known.base = 0;
      u_pos_known.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->pos_known = u_pos_known.real;
      offset += sizeof(this->pos_known);
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

    const char * getType(){ return "nubot_common/BallInfo"; };
    const char * getMD5(){ return "06211c2a8d639c68390f487a28e6a33a"; };

  };

}
#endif
