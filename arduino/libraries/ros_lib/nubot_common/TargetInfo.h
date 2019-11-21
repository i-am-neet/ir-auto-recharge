#ifndef _ROS_nubot_common_TargetInfo_h
#define _ROS_nubot_common_TargetInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/Point2d.h"

namespace nubot_common
{

  class TargetInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t target_length;
      typedef nubot_common::Point2d _target_type;
      _target_type st_target;
      _target_type * target;

    TargetInfo():
      header(),
      target_length(0), target(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->target_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->target_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->target_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->target_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->target_length);
      for( uint32_t i = 0; i < target_length; i++){
      offset += this->target[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t target_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      target_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      target_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      target_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->target_length);
      if(target_lengthT > target_length)
        this->target = (nubot_common::Point2d*)realloc(this->target, target_lengthT * sizeof(nubot_common::Point2d));
      target_length = target_lengthT;
      for( uint32_t i = 0; i < target_length; i++){
      offset += this->st_target.deserialize(inbuffer + offset);
        memcpy( &(this->target[i]), &(this->st_target), sizeof(nubot_common::Point2d));
      }
     return offset;
    }

    const char * getType(){ return "nubot_common/TargetInfo"; };
    const char * getMD5(){ return "a4938944832bdc9277041fe2fa758dce"; };

  };

}
#endif
