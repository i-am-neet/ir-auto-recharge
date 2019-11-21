#ifndef _ROS_SERVICE_Shoot_h
#define _ROS_SERVICE_Shoot_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace nubot_common
{

static const char SHOOT[] = "nubot_common/Shoot";

  class ShootRequest : public ros::Msg
  {
    public:
      typedef float _strength_type;
      _strength_type strength;
      typedef int64_t _ShootPos_type;
      _ShootPos_type ShootPos;

    ShootRequest():
      strength(0),
      ShootPos(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_strength;
      u_strength.real = this->strength;
      *(outbuffer + offset + 0) = (u_strength.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_strength.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_strength.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_strength.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->strength);
      union {
        int64_t real;
        uint64_t base;
      } u_ShootPos;
      u_ShootPos.real = this->ShootPos;
      *(outbuffer + offset + 0) = (u_ShootPos.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ShootPos.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ShootPos.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ShootPos.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ShootPos.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ShootPos.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ShootPos.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ShootPos.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ShootPos);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_strength;
      u_strength.base = 0;
      u_strength.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_strength.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_strength.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_strength.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->strength = u_strength.real;
      offset += sizeof(this->strength);
      union {
        int64_t real;
        uint64_t base;
      } u_ShootPos;
      u_ShootPos.base = 0;
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ShootPos.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ShootPos = u_ShootPos.real;
      offset += sizeof(this->ShootPos);
     return offset;
    }

    const char * getType(){ return SHOOT; };
    const char * getMD5(){ return "3198871bad21e7a959f16b2e8430d374"; };

  };

  class ShootResponse : public ros::Msg
  {
    public:
      typedef int64_t _ShootIsDone_type;
      _ShootIsDone_type ShootIsDone;

    ShootResponse():
      ShootIsDone(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_ShootIsDone;
      u_ShootIsDone.real = this->ShootIsDone;
      *(outbuffer + offset + 0) = (u_ShootIsDone.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ShootIsDone.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ShootIsDone.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ShootIsDone.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ShootIsDone.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ShootIsDone.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ShootIsDone.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ShootIsDone.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ShootIsDone);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_ShootIsDone;
      u_ShootIsDone.base = 0;
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ShootIsDone.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ShootIsDone = u_ShootIsDone.real;
      offset += sizeof(this->ShootIsDone);
     return offset;
    }

    const char * getType(){ return SHOOT; };
    const char * getMD5(){ return "942dc5d9ce09e09747b9618619df0e71"; };

  };

  class Shoot {
    public:
    typedef ShootRequest Request;
    typedef ShootResponse Response;
  };

}
#endif
