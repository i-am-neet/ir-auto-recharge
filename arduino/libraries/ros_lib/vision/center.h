#ifndef _ROS_vision_center_h
#define _ROS_vision_center_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class center : public ros::Msg
  {
    public:
      typedef int64_t _CenterX_type;
      _CenterX_type CenterX;
      typedef int64_t _CenterY_type;
      _CenterY_type CenterY;
      typedef int64_t _Inner_type;
      _Inner_type Inner;
      typedef int64_t _Outer_type;
      _Outer_type Outer;
      typedef int64_t _Front_type;
      _Front_type Front;
      typedef int64_t _Camera_High_type;
      _Camera_High_type Camera_High;
      typedef int64_t _Horizon_type;
      _Horizon_type Horizon;

    center():
      CenterX(0),
      CenterY(0),
      Inner(0),
      Outer(0),
      Front(0),
      Camera_High(0),
      Horizon(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_CenterX;
      u_CenterX.real = this->CenterX;
      *(outbuffer + offset + 0) = (u_CenterX.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_CenterX.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_CenterX.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_CenterX.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_CenterX.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_CenterX.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_CenterX.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_CenterX.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->CenterX);
      union {
        int64_t real;
        uint64_t base;
      } u_CenterY;
      u_CenterY.real = this->CenterY;
      *(outbuffer + offset + 0) = (u_CenterY.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_CenterY.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_CenterY.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_CenterY.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_CenterY.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_CenterY.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_CenterY.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_CenterY.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->CenterY);
      union {
        int64_t real;
        uint64_t base;
      } u_Inner;
      u_Inner.real = this->Inner;
      *(outbuffer + offset + 0) = (u_Inner.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Inner.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Inner.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Inner.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Inner.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Inner.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Inner.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Inner.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Inner);
      union {
        int64_t real;
        uint64_t base;
      } u_Outer;
      u_Outer.real = this->Outer;
      *(outbuffer + offset + 0) = (u_Outer.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Outer.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Outer.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Outer.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Outer.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Outer.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Outer.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Outer.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Outer);
      union {
        int64_t real;
        uint64_t base;
      } u_Front;
      u_Front.real = this->Front;
      *(outbuffer + offset + 0) = (u_Front.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Front.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Front.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Front.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Front.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Front.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Front.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Front.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Front);
      union {
        int64_t real;
        uint64_t base;
      } u_Camera_High;
      u_Camera_High.real = this->Camera_High;
      *(outbuffer + offset + 0) = (u_Camera_High.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Camera_High.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Camera_High.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Camera_High.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Camera_High.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Camera_High.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Camera_High.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Camera_High.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Camera_High);
      union {
        int64_t real;
        uint64_t base;
      } u_Horizon;
      u_Horizon.real = this->Horizon;
      *(outbuffer + offset + 0) = (u_Horizon.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Horizon.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Horizon.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Horizon.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Horizon.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Horizon.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Horizon.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Horizon.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Horizon);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_CenterX;
      u_CenterX.base = 0;
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_CenterX.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->CenterX = u_CenterX.real;
      offset += sizeof(this->CenterX);
      union {
        int64_t real;
        uint64_t base;
      } u_CenterY;
      u_CenterY.base = 0;
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_CenterY.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->CenterY = u_CenterY.real;
      offset += sizeof(this->CenterY);
      union {
        int64_t real;
        uint64_t base;
      } u_Inner;
      u_Inner.base = 0;
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Inner.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Inner = u_Inner.real;
      offset += sizeof(this->Inner);
      union {
        int64_t real;
        uint64_t base;
      } u_Outer;
      u_Outer.base = 0;
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Outer.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Outer = u_Outer.real;
      offset += sizeof(this->Outer);
      union {
        int64_t real;
        uint64_t base;
      } u_Front;
      u_Front.base = 0;
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Front.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Front = u_Front.real;
      offset += sizeof(this->Front);
      union {
        int64_t real;
        uint64_t base;
      } u_Camera_High;
      u_Camera_High.base = 0;
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Camera_High.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Camera_High = u_Camera_High.real;
      offset += sizeof(this->Camera_High);
      union {
        int64_t real;
        uint64_t base;
      } u_Horizon;
      u_Horizon.base = 0;
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Horizon.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Horizon = u_Horizon.real;
      offset += sizeof(this->Horizon);
     return offset;
    }

    const char * getType(){ return "vision/center"; };
    const char * getMD5(){ return "4ef0ddd6fed416b76223e33d4c8c5c7d"; };

  };

}
#endif
