#ifndef _ROS_nubot_common_OdoInfo_h
#define _ROS_nubot_common_OdoInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace nubot_common
{

  class OdoInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef float _Vx_type;
      _Vx_type Vx;
      typedef float _Vy_type;
      _Vy_type Vy;
      typedef float _w_type;
      _w_type w;
      typedef bool _RobotStuck_type;
      _RobotStuck_type RobotStuck;
      typedef bool _PowerState_type;
      _PowerState_type PowerState;

    OdoInfo():
      header(),
      Vx(0),
      Vy(0),
      w(0),
      RobotStuck(0),
      PowerState(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
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
      union {
        bool real;
        uint8_t base;
      } u_RobotStuck;
      u_RobotStuck.real = this->RobotStuck;
      *(outbuffer + offset + 0) = (u_RobotStuck.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->RobotStuck);
      union {
        bool real;
        uint8_t base;
      } u_PowerState;
      u_PowerState.real = this->PowerState;
      *(outbuffer + offset + 0) = (u_PowerState.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->PowerState);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
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
      union {
        bool real;
        uint8_t base;
      } u_RobotStuck;
      u_RobotStuck.base = 0;
      u_RobotStuck.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->RobotStuck = u_RobotStuck.real;
      offset += sizeof(this->RobotStuck);
      union {
        bool real;
        uint8_t base;
      } u_PowerState;
      u_PowerState.base = 0;
      u_PowerState.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->PowerState = u_PowerState.real;
      offset += sizeof(this->PowerState);
     return offset;
    }

    const char * getType(){ return "nubot_common/OdoInfo"; };
    const char * getMD5(){ return "b4f534aa8c080899ef112a410cc2c113"; };

  };

}
#endif
