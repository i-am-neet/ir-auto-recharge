#ifndef _ROS_nubot_common_ObstaclesInfo_h
#define _ROS_nubot_common_ObstaclesInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/Point2d.h"
#include "nubot_common/PPoint.h"

namespace nubot_common
{

  class ObstaclesInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      uint32_t pos_length;
      typedef nubot_common::Point2d _pos_type;
      _pos_type st_pos;
      _pos_type * pos;
      uint32_t polar_pos_length;
      typedef nubot_common::PPoint _polar_pos_type;
      _polar_pos_type st_polar_pos;
      _polar_pos_type * polar_pos;

    ObstaclesInfo():
      header(),
      pos_length(0), pos(NULL),
      polar_pos_length(0), polar_pos(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->pos_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pos_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pos_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pos_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pos_length);
      for( uint32_t i = 0; i < pos_length; i++){
      offset += this->pos[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset + 0) = (this->polar_pos_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->polar_pos_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->polar_pos_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->polar_pos_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->polar_pos_length);
      for( uint32_t i = 0; i < polar_pos_length; i++){
      offset += this->polar_pos[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      uint32_t pos_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      pos_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      pos_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      pos_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->pos_length);
      if(pos_lengthT > pos_length)
        this->pos = (nubot_common::Point2d*)realloc(this->pos, pos_lengthT * sizeof(nubot_common::Point2d));
      pos_length = pos_lengthT;
      for( uint32_t i = 0; i < pos_length; i++){
      offset += this->st_pos.deserialize(inbuffer + offset);
        memcpy( &(this->pos[i]), &(this->st_pos), sizeof(nubot_common::Point2d));
      }
      uint32_t polar_pos_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      polar_pos_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      polar_pos_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      polar_pos_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->polar_pos_length);
      if(polar_pos_lengthT > polar_pos_length)
        this->polar_pos = (nubot_common::PPoint*)realloc(this->polar_pos, polar_pos_lengthT * sizeof(nubot_common::PPoint));
      polar_pos_length = polar_pos_lengthT;
      for( uint32_t i = 0; i < polar_pos_length; i++){
      offset += this->st_polar_pos.deserialize(inbuffer + offset);
        memcpy( &(this->polar_pos[i]), &(this->st_polar_pos), sizeof(nubot_common::PPoint));
      }
     return offset;
    }

    const char * getType(){ return "nubot_common/ObstaclesInfo"; };
    const char * getMD5(){ return "8850a2241dd98578d2d66d842f5946c8"; };

  };

}
#endif
