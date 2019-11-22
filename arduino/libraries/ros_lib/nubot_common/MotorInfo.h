#ifndef _ROS_nubot_common_MotorInfo_h
#define _ROS_nubot_common_MotorInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace nubot_common
{

  class MotorInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t motordata[4];

    MotorInfo():
      header(),
      motordata()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      for( uint32_t i = 0; i < 4; i++){
      *(outbuffer + offset + 0) = (this->motordata[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->motordata[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->motordata[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->motordata[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motordata[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      for( uint32_t i = 0; i < 4; i++){
      this->motordata[i] =  ((uint32_t) (*(inbuffer + offset)));
      this->motordata[i] |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->motordata[i] |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->motordata[i] |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->motordata[i]);
      }
     return offset;
    }

    const char * getType(){ return "nubot_common/MotorInfo"; };
    const char * getMD5(){ return "a75d984a29f54312561eb327c067e655"; };

  };

}
#endif
