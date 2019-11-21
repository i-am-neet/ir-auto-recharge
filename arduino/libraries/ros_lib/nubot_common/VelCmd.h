#ifndef _ROS_nubot_common_VelCmd_h
#define _ROS_nubot_common_VelCmd_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace nubot_common
{

  class VelCmd : public ros::Msg
  {
    public:
      typedef float _Vx_type;
      _Vx_type Vx;
      typedef float _Vy_type;
      _Vy_type Vy;
      typedef float _w_type;
      _w_type w;

    VelCmd():
      Vx(0),
      Vy(0),
      w(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_Vx;
      u_Vx.real = this->Vx;
      *(outbuffer + offset + 0) = (u_Vx.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Vx.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Vx.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Vx.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->Vx);
      union {
        float real;
        uint32_t base;
      } u_Vy;
      u_Vy.real = this->Vy;
      *(outbuffer + offset + 0) = (u_Vy.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Vy.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Vy.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Vy.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->Vy);
      union {
        float real;
        uint32_t base;
      } u_w;
      u_w.real = this->w;
      *(outbuffer + offset + 0) = (u_w.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_w.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_w.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_w.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->w);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_Vx;
      u_Vx.base = 0;
      u_Vx.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Vx.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Vx.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Vx.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->Vx = u_Vx.real;
      offset += sizeof(this->Vx);
      union {
        float real;
        uint32_t base;
      } u_Vy;
      u_Vy.base = 0;
      u_Vy.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Vy.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Vy.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Vy.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->Vy = u_Vy.real;
      offset += sizeof(this->Vy);
      union {
        float real;
        uint32_t base;
      } u_w;
      u_w.base = 0;
      u_w.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_w.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_w.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_w.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->w = u_w.real;
      offset += sizeof(this->w);
     return offset;
    }

    const char * getType(){ return "nubot_common/VelCmd"; };
    const char * getMD5(){ return "914217797e9c6227112d1ec2a4b462eb"; };

  };

}
#endif
