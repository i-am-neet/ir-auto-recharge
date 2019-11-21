#ifndef _ROS_statistics_msgs_Stats1D_h
#define _ROS_statistics_msgs_Stats1D_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace statistics_msgs
{

  class Stats1D : public ros::Msg
  {
    public:
      typedef float _min_type;
      _min_type min;
      typedef float _max_type;
      _max_type max;
      typedef float _mean_type;
      _mean_type mean;
      typedef float _variance_type;
      _variance_type variance;
      typedef int64_t _N_type;
      _N_type N;

    Stats1D():
      min(0),
      max(0),
      mean(0),
      variance(0),
      N(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->min);
      offset += serializeAvrFloat64(outbuffer + offset, this->max);
      offset += serializeAvrFloat64(outbuffer + offset, this->mean);
      offset += serializeAvrFloat64(outbuffer + offset, this->variance);
      union {
        int64_t real;
        uint64_t base;
      } u_N;
      u_N.real = this->N;
      *(outbuffer + offset + 0) = (u_N.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_N.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_N.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_N.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_N.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_N.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_N.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_N.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->N);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->min));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->max));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->mean));
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->variance));
      union {
        int64_t real;
        uint64_t base;
      } u_N;
      u_N.base = 0;
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_N.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->N = u_N.real;
      offset += sizeof(this->N);
     return offset;
    }

    const char * getType(){ return "statistics_msgs/Stats1D"; };
    const char * getMD5(){ return "5e29efbcd70d63a82b5ddfac24a5bc4b"; };

  };

}
#endif
