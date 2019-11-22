#ifndef _ROS_self_localization_setAugmentParam_h
#define _ROS_self_localization_setAugmentParam_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace self_localization
{

  class setAugmentParam : public ros::Msg
  {
    public:
      typedef float _a_fast_type;
      _a_fast_type a_fast;
      typedef float _a_slow_type;
      _a_slow_type a_slow;

    setAugmentParam():
      a_fast(0),
      a_slow(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_a_fast;
      u_a_fast.real = this->a_fast;
      *(outbuffer + offset + 0) = (u_a_fast.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a_fast.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a_fast.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a_fast.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->a_fast);
      union {
        float real;
        uint32_t base;
      } u_a_slow;
      u_a_slow.real = this->a_slow;
      *(outbuffer + offset + 0) = (u_a_slow.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_a_slow.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_a_slow.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_a_slow.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->a_slow);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_a_fast;
      u_a_fast.base = 0;
      u_a_fast.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a_fast.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a_fast.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a_fast.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->a_fast = u_a_fast.real;
      offset += sizeof(this->a_fast);
      union {
        float real;
        uint32_t base;
      } u_a_slow;
      u_a_slow.base = 0;
      u_a_slow.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_a_slow.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_a_slow.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_a_slow.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->a_slow = u_a_slow.real;
      offset += sizeof(this->a_slow);
     return offset;
    }

    const char * getType(){ return "self_localization/setAugmentParam"; };
    const char * getMD5(){ return "16b9873551f5637dd2620b7aa10af9ef"; };

  };

}
#endif
