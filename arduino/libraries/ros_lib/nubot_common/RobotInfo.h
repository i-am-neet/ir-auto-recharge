#ifndef _ROS_nubot_common_RobotInfo_h
#define _ROS_nubot_common_RobotInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "nubot_common/Point2d.h"
#include "nubot_common/Angle.h"

namespace nubot_common
{

  class RobotInfo : public ros::Msg
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
      typedef nubot_common::Point2d _pos_type;
      _pos_type pos;
      typedef nubot_common::Angle _heading_type;
      _heading_type heading;
      typedef float _vrot_type;
      _vrot_type vrot;
      typedef nubot_common::Point2d _vtrans_type;
      _vtrans_type vtrans;
      typedef bool _iskick_type;
      _iskick_type iskick;
      typedef bool _isvalid_type;
      _isvalid_type isvalid;
      typedef bool _isstuck_type;
      _isstuck_type isstuck;
      typedef bool _isdribble_type;
      _isdribble_type isdribble;
      typedef uint8_t _current_role_type;
      _current_role_type current_role;
      typedef float _role_time_type;
      _role_time_type role_time;
      typedef nubot_common::Point2d _target_type;
      _target_type target;

    RobotInfo():
      header(),
      AgentID(0),
      targetNum1(0),
      targetNum2(0),
      targetNum3(0),
      targetNum4(0),
      staticpassNum(0),
      staticcatchNum(0),
      pos(),
      heading(),
      vrot(0),
      vtrans(),
      iskick(0),
      isvalid(0),
      isstuck(0),
      isdribble(0),
      current_role(0),
      role_time(0),
      target()
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
      offset += this->pos.serialize(outbuffer + offset);
      offset += this->heading.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_vrot;
      u_vrot.real = this->vrot;
      *(outbuffer + offset + 0) = (u_vrot.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_vrot.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_vrot.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_vrot.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->vrot);
      offset += this->vtrans.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_iskick;
      u_iskick.real = this->iskick;
      *(outbuffer + offset + 0) = (u_iskick.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->iskick);
      union {
        bool real;
        uint8_t base;
      } u_isvalid;
      u_isvalid.real = this->isvalid;
      *(outbuffer + offset + 0) = (u_isvalid.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isvalid);
      union {
        bool real;
        uint8_t base;
      } u_isstuck;
      u_isstuck.real = this->isstuck;
      *(outbuffer + offset + 0) = (u_isstuck.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isstuck);
      union {
        bool real;
        uint8_t base;
      } u_isdribble;
      u_isdribble.real = this->isdribble;
      *(outbuffer + offset + 0) = (u_isdribble.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->isdribble);
      *(outbuffer + offset + 0) = (this->current_role >> (8 * 0)) & 0xFF;
      offset += sizeof(this->current_role);
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
      offset += this->target.serialize(outbuffer + offset);
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
      offset += this->pos.deserialize(inbuffer + offset);
      offset += this->heading.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_vrot;
      u_vrot.base = 0;
      u_vrot.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_vrot.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_vrot.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_vrot.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->vrot = u_vrot.real;
      offset += sizeof(this->vrot);
      offset += this->vtrans.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_iskick;
      u_iskick.base = 0;
      u_iskick.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->iskick = u_iskick.real;
      offset += sizeof(this->iskick);
      union {
        bool real;
        uint8_t base;
      } u_isvalid;
      u_isvalid.base = 0;
      u_isvalid.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isvalid = u_isvalid.real;
      offset += sizeof(this->isvalid);
      union {
        bool real;
        uint8_t base;
      } u_isstuck;
      u_isstuck.base = 0;
      u_isstuck.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isstuck = u_isstuck.real;
      offset += sizeof(this->isstuck);
      union {
        bool real;
        uint8_t base;
      } u_isdribble;
      u_isdribble.base = 0;
      u_isdribble.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->isdribble = u_isdribble.real;
      offset += sizeof(this->isdribble);
      this->current_role =  ((uint8_t) (*(inbuffer + offset)));
      offset += sizeof(this->current_role);
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
      offset += this->target.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "nubot_common/RobotInfo"; };
    const char * getMD5(){ return "b4ae67161bf4b86c0bc4c4f720e02189"; };

  };

}
#endif
