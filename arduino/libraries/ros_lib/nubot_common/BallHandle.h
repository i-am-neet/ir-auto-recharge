#ifndef _ROS_SERVICE_BallHandle_h
#define _ROS_SERVICE_BallHandle_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace nubot_common
{

static const char BALLHANDLE[] = "nubot_common/BallHandle";

  class BallHandleRequest : public ros::Msg
  {
    public:
      typedef int64_t _enable_type;
      _enable_type enable;

    BallHandleRequest():
      enable(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_enable;
      u_enable.real = this->enable;
      *(outbuffer + offset + 0) = (u_enable.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_enable.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_enable.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_enable.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_enable.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_enable.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_enable.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_enable.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->enable);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_enable;
      u_enable.base = 0;
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_enable.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->enable = u_enable.real;
      offset += sizeof(this->enable);
     return offset;
    }

    const char * getType(){ return BALLHANDLE; };
    const char * getMD5(){ return "c72133dd88f3c751f622755eeb9383c7"; };

  };

  class BallHandleResponse : public ros::Msg
  {
    public:
      typedef int64_t _BallIsHolding_type;
      _BallIsHolding_type BallIsHolding;

    BallHandleResponse():
      BallIsHolding(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_BallIsHolding;
      u_BallIsHolding.real = this->BallIsHolding;
      *(outbuffer + offset + 0) = (u_BallIsHolding.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_BallIsHolding.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_BallIsHolding.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_BallIsHolding.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_BallIsHolding.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_BallIsHolding.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_BallIsHolding.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_BallIsHolding.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->BallIsHolding);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_BallIsHolding;
      u_BallIsHolding.base = 0;
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_BallIsHolding.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->BallIsHolding = u_BallIsHolding.real;
      offset += sizeof(this->BallIsHolding);
     return offset;
    }

    const char * getType(){ return BALLHANDLE; };
    const char * getMD5(){ return "371e9ec4fdab9c30277b932f121cf460"; };

  };

  class BallHandle {
    public:
    typedef BallHandleRequest Request;
    typedef BallHandleResponse Response;
  };

}
#endif
