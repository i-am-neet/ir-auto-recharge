#ifndef _ROS_nubot_common_WorldModelInfo_h
#define _ROS_nubot_common_WorldModelInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/ObstaclesInfo.h"
#include "nubot_common/RobotInfo.h"
#include "nubot_common/BallInfo.h"
#include "nubot_common/CoachInfo.h"
#include "nubot_common/PassCommands.h"

namespace nubot_common
{

  class WorldModelInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef nubot_common::ObstaclesInfo _obstacleinfo_type;
      _obstacleinfo_type obstacleinfo;
      typedef nubot_common::ObstaclesInfo _oppinfo_type;
      _oppinfo_type oppinfo;
      uint32_t robotinfo_length;
      typedef nubot_common::RobotInfo _robotinfo_type;
      _robotinfo_type st_robotinfo;
      _robotinfo_type * robotinfo;
      uint32_t ballinfo_length;
      typedef nubot_common::BallInfo _ballinfo_type;
      _ballinfo_type st_ballinfo;
      _ballinfo_type * ballinfo;
      typedef nubot_common::CoachInfo _coachinfo_type;
      _coachinfo_type coachinfo;
      typedef nubot_common::PassCommands _pass_cmd_type;
      _pass_cmd_type pass_cmd;

    WorldModelInfo():
      header(),
      obstacleinfo(),
      oppinfo(),
      robotinfo_length(0), robotinfo(NULL),
      ballinfo_length(0), ballinfo(NULL),
      coachinfo(),
      pass_cmd()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->obstacleinfo.serialize(outbuffer + offset);
      offset += this->oppinfo.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->robotinfo_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->robotinfo_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->robotinfo_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->robotinfo_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->robotinfo_length);
      for( uint32_t i = 0; i < robotinfo_length; i++){
      offset += this->robotinfo[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->ballinfo_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->ballinfo_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->ballinfo_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->ballinfo_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ballinfo_length);
      for( uint32_t i = 0; i < ballinfo_length; i++){
      offset += this->ballinfo[i].serialize(outbuffer + offset);
      }
      offset += this->coachinfo.serialize(outbuffer + offset);
      offset += this->pass_cmd.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->obstacleinfo.deserialize(inbuffer + offset);
      offset += this->oppinfo.deserialize(inbuffer + offset);
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
      uint32_t ballinfo_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      ballinfo_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      ballinfo_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      ballinfo_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->ballinfo_length);
      if(ballinfo_lengthT > ballinfo_length)
        this->ballinfo = (nubot_common::BallInfo*)realloc(this->ballinfo, ballinfo_lengthT * sizeof(nubot_common::BallInfo));
      ballinfo_length = ballinfo_lengthT;
      for( uint32_t i = 0; i < ballinfo_length; i++){
      offset += this->st_ballinfo.deserialize(inbuffer + offset);
        memcpy( &(this->ballinfo[i]), &(this->st_ballinfo), sizeof(nubot_common::BallInfo));
      }
      offset += this->coachinfo.deserialize(inbuffer + offset);
      offset += this->pass_cmd.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "nubot_common/WorldModelInfo"; };
    const char * getMD5(){ return "7d184d155b8f964299d2ae834875aebd"; };

  };

}
#endif
