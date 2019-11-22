#ifndef _ROS_strategy_RobotState_h
#define _ROS_strategy_RobotState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Twist.h"

namespace strategy
{

  class RobotState : public ros::Msg
  {
    public:
      typedef const char* _state_type;
      _state_type state;
      typedef bool _ball_is_handled_type;
      _ball_is_handled_type ball_is_handled;
      typedef int32_t _ball_dis_type;
      _ball_dis_type ball_dis;
      typedef geometry_msgs::Twist _position_type;
      _position_type position;

    RobotState():
      state(""),
      ball_is_handled(0),
      ball_dis(0),
      position()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_state = strlen(this->state);
      varToArr(outbuffer + offset, length_state);
      offset += 4;
      memcpy(outbuffer + offset, this->state, length_state);
      offset += length_state;
      union {
        bool real;
        uint8_t base;
      } u_ball_is_handled;
      u_ball_is_handled.real = this->ball_is_handled;
      *(outbuffer + offset + 0) = (u_ball_is_handled.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->ball_is_handled);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_dis;
      u_ball_dis.real = this->ball_dis;
      *(outbuffer + offset + 0) = (u_ball_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ball_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ball_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ball_dis.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ball_dis);
      offset += this->position.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_state;
      arrToVar(length_state, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_state; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_state-1]=0;
      this->state = (char *)(inbuffer + offset-1);
      offset += length_state;
      union {
        bool real;
        uint8_t base;
      } u_ball_is_handled;
      u_ball_is_handled.base = 0;
      u_ball_is_handled.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->ball_is_handled = u_ball_is_handled.real;
      offset += sizeof(this->ball_is_handled);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_dis;
      u_ball_dis.base = 0;
      u_ball_dis.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ball_dis.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ball_dis.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ball_dis.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ball_dis = u_ball_dis.real;
      offset += sizeof(this->ball_dis);
      offset += this->position.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "strategy/RobotState"; };
    const char * getMD5(){ return "ef23ae9bca178d6ef3390b78b7fd0b5f"; };

  };

}
#endif
