#ifndef _ROS_vision_dis_h
#define _ROS_vision_dis_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class dis : public ros::Msg
  {
    public:
      typedef float _distance_type;
      _distance_type distance;

    dis():
      distance(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += serializeAvrFloat64(outbuffer + offset, this->distance);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += deserializeAvrFloat64(inbuffer + offset, &(this->distance));
     return offset;
    }

    const char * getType(){ return "vision/dis"; };
    const char * getMD5(){ return "acff7fda0c683c872875f5c4b069f124"; };

  };

}
#endif
