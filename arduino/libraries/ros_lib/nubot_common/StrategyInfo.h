#ifndef _ROS_nubot_common_StrategyInfo_h
#define _ROS_nubot_common_StrategyInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/PassCommands.h"

namespace nubot_common
{

  class StrategyInfo : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef int32_t _AgentID_type;
      _AgentID_type AgentID;
      typedef int32_t _targetNum1_type;
      _targetNum1_type targetNum1;
      typedef int32_t _targetNum2_type;
      _targetNum2_type targetNum2;
      typedef int32_t _targetNum3_type;
      _targetNum3_type targetNum3;
      typedef int32_t _targetNum4_type;
      _targetNum4_type targetNum4;
      typedef int32_t _staticpassNum_type;
      _staticpassNum_type staticpassNum;
      typedef int32_t _staticcatchNum_type;
      _staticcatchNum_type staticcatchNum;
      typedef uint32_t _role_type;
      _role_type role;
      typedef uint32_t _action_type;
      _action_type action;
      typedef bool _is_dribble_type;
      _is_dribble_type is_dribble;
      typedef bool _is_kickoff_type;
      _is_kickoff_type is_kickoff;
      typedef float _role_time_type;
      _role_time_type role_time;
      typedef nubot_common::PassCommands _pass_cmd_type;
      _pass_cmd_type pass_cmd;

    StrategyInfo():
      header(),
      AgentID(0),
      targetNum1(0),
      targetNum2(0),
      targetNum3(0),
      targetNum4(0),
      staticpassNum(0),
      staticcatchNum(0),
      role(0),
      action(0),
      is_dribble(0),
      is_kickoff(0),
      role_time(0),
      pass_cmd()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_AgentID;
      u_AgentID.real = this->AgentID;
      *(outbuffer + offset + 0) = (u_AgentID.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_AgentID.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_AgentID.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_AgentID.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->AgentID);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum1;
      u_targetNum1.real = this->targetNum1;
      *(outbuffer + offset + 0) = (u_targetNum1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_targetNum1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_targetNum1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_targetNum1.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->targetNum1);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum2;
      u_targetNum2.real = this->targetNum2;
      *(outbuffer + offset + 0) = (u_targetNum2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_targetNum2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_targetNum2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_targetNum2.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->targetNum2);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum3;
      u_targetNum3.real = this->targetNum3;
      *(outbuffer + offset + 0) = (u_targetNum3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_targetNum3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_targetNum3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_targetNum3.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->targetNum3);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum4;
      u_targetNum4.real = this->targetNum4;
      *(outbuffer + offset + 0) = (u_targetNum4.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_targetNum4.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_targetNum4.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_targetNum4.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->targetNum4);
      union {
        int32_t real;
        uint32_t base;
      } u_staticpassNum;
      u_staticpassNum.real = this->staticpassNum;
      *(outbuffer + offset + 0) = (u_staticpassNum.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_staticpassNum.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_staticpassNum.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_staticpassNum.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->staticpassNum);
      union {
        int32_t real;
        uint32_t base;
      } u_staticcatchNum;
      u_staticcatchNum.real = this->staticcatchNum;
      *(outbuffer + offset + 0) = (u_staticcatchNum.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_staticcatchNum.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_staticcatchNum.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_staticcatchNum.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->staticcatchNum);
      *(outbuffer + offset + 0) = (this->role >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->role >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->role >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->role >> (8 * 3)) & 0xFF;
      offset += sizeof(this->role);
      *(outbuffer + offset + 0) = (this->action >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->action >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->action >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->action >> (8 * 3)) & 0xFF;
      offset += sizeof(this->action);
      union {
        bool real;
        uint8_t base;
      } u_is_dribble;
      u_is_dribble.real = this->is_dribble;
      *(outbuffer + offset + 0) = (u_is_dribble.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_dribble);
      union {
        bool real;
        uint8_t base;
      } u_is_kickoff;
      u_is_kickoff.real = this->is_kickoff;
      *(outbuffer + offset + 0) = (u_is_kickoff.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_kickoff);
      union {
        float real;
        uint32_t base;
      } u_role_time;
      u_role_time.real = this->role_time;
      *(outbuffer + offset + 0) = (u_role_time.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_role_time.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_role_time.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_role_time.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->role_time);
      offset += this->pass_cmd.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        int32_t real;
        uint32_t base;
      } u_AgentID;
      u_AgentID.base = 0;
      u_AgentID.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_AgentID.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_AgentID.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_AgentID.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->AgentID = u_AgentID.real;
      offset += sizeof(this->AgentID);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum1;
      u_targetNum1.base = 0;
      u_targetNum1.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_targetNum1.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_targetNum1.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_targetNum1.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->targetNum1 = u_targetNum1.real;
      offset += sizeof(this->targetNum1);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum2;
      u_targetNum2.base = 0;
      u_targetNum2.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_targetNum2.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_targetNum2.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_targetNum2.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->targetNum2 = u_targetNum2.real;
      offset += sizeof(this->targetNum2);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum3;
      u_targetNum3.base = 0;
      u_targetNum3.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_targetNum3.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_targetNum3.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_targetNum3.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->targetNum3 = u_targetNum3.real;
      offset += sizeof(this->targetNum3);
      union {
        int32_t real;
        uint32_t base;
      } u_targetNum4;
      u_targetNum4.base = 0;
      u_targetNum4.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_targetNum4.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_targetNum4.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_targetNum4.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->targetNum4 = u_targetNum4.real;
      offset += sizeof(this->targetNum4);
      union {
        int32_t real;
        uint32_t base;
      } u_staticpassNum;
      u_staticpassNum.base = 0;
      u_staticpassNum.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_staticpassNum.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_staticpassNum.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_staticpassNum.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->staticpassNum = u_staticpassNum.real;
      offset += sizeof(this->staticpassNum);
      union {
        int32_t real;
        uint32_t base;
      } u_staticcatchNum;
      u_staticcatchNum.base = 0;
      u_staticcatchNum.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_staticcatchNum.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_staticcatchNum.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_staticcatchNum.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->staticcatchNum = u_staticcatchNum.real;
      offset += sizeof(this->staticcatchNum);
      this->role =  ((uint32_t) (*(inbuffer + offset)));
      this->role |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->role |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->role |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->role);
      this->action =  ((uint32_t) (*(inbuffer + offset)));
      this->action |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->action |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->action |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->action);
      union {
        bool real;
        uint8_t base;
      } u_is_dribble;
      u_is_dribble.base = 0;
      u_is_dribble.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_dribble = u_is_dribble.real;
      offset += sizeof(this->is_dribble);
      union {
        bool real;
        uint8_t base;
      } u_is_kickoff;
      u_is_kickoff.base = 0;
      u_is_kickoff.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_kickoff = u_is_kickoff.real;
      offset += sizeof(this->is_kickoff);
      union {
        float real;
        uint32_t base;
      } u_role_time;
      u_role_time.base = 0;
      u_role_time.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_role_time.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_role_time.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_role_time.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->role_time = u_role_time.real;
      offset += sizeof(this->role_time);
      offset += this->pass_cmd.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "nubot_common/StrategyInfo"; };
    const char * getMD5(){ return "9983cea3e357670f055f12d4322a06c9"; };

  };

}
#endif
