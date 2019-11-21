#ifndef _ROS_nubot_common_OminiVisionInfo_h
#define _ROS_nubot_common_OminiVisionInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/BallInfo.h"
#include "nubot_common/ObstaclesInfo.h"
#include "nubot_common/RobotInfo.h"

namespace nubot_common
{

  class OminiVisionInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef nubot_common::BallInfo _ballinfo_type;
      _ballinfo_type ballinfo;
      typedef nubot_common::ObstaclesInfo _obstacleinfo_type;
      _obstacleinfo_type obstacleinfo;
      uint32_t robotinfo_length;
      typedef nubot_common::RobotInfo _robotinfo_type;
      _robotinfo_type st_robotinfo;
      _robotinfo_type * robotinfo;

    OminiVisionInfo():
      header(),
      ballinfo(),
      obstacleinfo(),
      robotinfo_length(0), robotinfo(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->ballinfo.serialize(outbuffer + offset);
      offset += this->obstacleinfo.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->robotinfo_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->robotinfo_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->robotinfo_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->robotinfo_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->robotinfo_length);
      for( uint32_t i = 0; i < robotinfo_length; i++){
      offset += this->robotinfo[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->ballinfo.deserialize(inbuffer + offset);
      offset += this->obstacleinfo.deserialize(inbuffer + offset);
      uint32_t robotinfo_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      robotinfo_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      robotinfo_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      robotinfo_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->robotinfo_length);
      if(robotinfo_lengthT > robotinfo_length)
        this->robotinfo = (nubot_common::RobotInfo*)realloc(this->robotinfo, robotinfo_lengthT * sizeof(nubot_common::RobotInfo));
      robotinfo_length = robotinfo_lengthT;
      for( uint32_t i = 0; i < robotinfo_length; i++){
      offset += this->st_robotinfo.deserialize(inbuffer + offset);
        memcpy( &(this->robotinfo[i]), &(this->st_robotinfo), sizeof(nubot_common::RobotInfo));
      }
     return offset;
    }

    const char * getType(){ return "nubot_common/OminiVisionInfo"; };
    const char * getMD5(){ return "71f66ce5416c122d9955b156151ea395"; };

  };

}
#endif
