#ifndef _ROS_self_localization_setCmpsWeight_h
#define _ROS_self_localization_setCmpsWeight_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace self_localization
{

  class setCmpsWeight : public ros::Msg
  {
    public:
      typedef float _wcmps_type;
      _wcmps_type wcmps;

    setCmpsWeight():
      wcmps(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_wcmps;
      u_wcmps.real = this->wcmps;
      *(outbuffer + offset + 0) = (u_wcmps.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_wcmps.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_wcmps.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_wcmps.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->wcmps);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        float real;
        uint32_t base;
      } u_wcmps;
      u_wcmps.base = 0;
      u_wcmps.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_wcmps.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_wcmps.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_wcmps.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->wcmps = u_wcmps.real;
      offset += sizeof(this->wcmps);
     return offset;
    }

    const char * getType(){ return "self_localization/setCmpsWeight"; };
    const char * getMD5(){ return "35aa2d325551df9a88a86d00aa1bc4e0"; };

  };

}
#endif
