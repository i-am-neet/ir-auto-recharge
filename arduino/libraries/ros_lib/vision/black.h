#ifndef _ROS_vision_black_h
#define _ROS_vision_black_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class black : public ros::Msg
  {
    public:
      typedef int64_t _Gray_type;
      _Gray_type Gray;
      typedef int64_t _Angle_type;
      _Angle_type Angle;

    black():
      Gray(0),
      Angle(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_Gray;
      u_Gray.real = this->Gray;
      *(outbuffer + offset + 0) = (u_Gray.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Gray.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Gray.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Gray.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Gray.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Gray.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Gray.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Gray.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Gray);
      union {
        int64_t real;
        uint64_t base;
      } u_Angle;
      u_Angle.real = this->Angle;
      *(outbuffer + offset + 0) = (u_Angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Angle.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Angle.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Angle.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Angle.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Angle.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Angle);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_Gray;
      u_Gray.base = 0;
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Gray.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Gray = u_Gray.real;
      offset += sizeof(this->Gray);
      union {
        int64_t real;
        uint64_t base;
      } u_Angle;
      u_Angle.base = 0;
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Angle.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Angle = u_Angle.real;
      offset += sizeof(this->Angle);
     return offset;
    }

    const char * getType(){ return "vision/black"; };
    const char * getMD5(){ return "5dea6a3e5a1346d96db1f873a7e99b4e"; };

  };

}
#endif
