#ifndef _ROS_nubot_common_PassCommands_h
#define _ROS_nubot_common_PassCommands_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "nubot_common/Point2d.h"

namespace nubot_common
{

  class PassCommands : public ros::Msg
  {
    public:
      typedef uint32_t _pass_id_type;
      _pass_id_type pass_id;
      typedef uint32_t _catch_id_type;
      _catch_id_type catch_id;
      typedef nubot_common::Point2d _pass_pt_type;
      _pass_pt_type pass_pt;
      typedef nubot_common::Point2d _catch_pt_type;
      _catch_pt_type catch_pt;
      typedef bool _is_passout_type;
      _is_passout_type is_passout;
      typedef bool _is_dynamic_pass_type;
      _is_dynamic_pass_type is_dynamic_pass;
      typedef bool _is_static_pass_type;
      _is_static_pass_type is_static_pass;
      typedef bool _is_valid_type;
      _is_valid_type is_valid;

    PassCommands():
      pass_id(0),
      catch_id(0),
      pass_pt(),
      catch_pt(),
      is_passout(0),
      is_dynamic_pass(0),
      is_static_pass(0),
      is_valid(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->pass_id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->pass_id >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->pass_id >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->pass_id >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pass_id);
      *(outbuffer + offset + 0) = (this->catch_id >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->catch_id >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->catch_id >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->catch_id >> (8 * 3)) & 0xFF;
      offset += sizeof(this->catch_id);
      offset += this->pass_pt.serialize(outbuffer + offset);
      offset += this->catch_pt.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_passout;
      u_is_passout.real = this->is_passout;
      *(outbuffer + offset + 0) = (u_is_passout.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_passout);
      union {
        bool real;
        uint8_t base;
      } u_is_dynamic_pass;
      u_is_dynamic_pass.real = this->is_dynamic_pass;
      *(outbuffer + offset + 0) = (u_is_dynamic_pass.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_dynamic_pass);
      union {
        bool real;
        uint8_t base;
      } u_is_static_pass;
      u_is_static_pass.real = this->is_static_pass;
      *(outbuffer + offset + 0) = (u_is_static_pass.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_static_pass);
      union {
        bool real;
        uint8_t base;
      } u_is_valid;
      u_is_valid.real = this->is_valid;
      *(outbuffer + offset + 0) = (u_is_valid.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->is_valid);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      this->pass_id =  ((uint32_t) (*(inbuffer + offset)));
      this->pass_id |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->pass_id |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->pass_id |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->pass_id);
      this->catch_id =  ((uint32_t) (*(inbuffer + offset)));
      this->catch_id |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->catch_id |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->catch_id |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->catch_id);
      offset += this->pass_pt.deserialize(inbuffer + offset);
      offset += this->catch_pt.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_is_passout;
      u_is_passout.base = 0;
      u_is_passout.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_passout = u_is_passout.real;
      offset += sizeof(this->is_passout);
      union {
        bool real;
        uint8_t base;
      } u_is_dynamic_pass;
      u_is_dynamic_pass.base = 0;
      u_is_dynamic_pass.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_dynamic_pass = u_is_dynamic_pass.real;
      offset += sizeof(this->is_dynamic_pass);
      union {
        bool real;
        uint8_t base;
      } u_is_static_pass;
      u_is_static_pass.base = 0;
      u_is_static_pass.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_static_pass = u_is_static_pass.real;
      offset += sizeof(this->is_static_pass);
      union {
        bool real;
        uint8_t base;
      } u_is_valid;
      u_is_valid.base = 0;
      u_is_valid.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->is_valid = u_is_valid.real;
      offset += sizeof(this->is_valid);
     return offset;
    }

    const char * getType(){ return "nubot_common/PassCommands"; };
    const char * getMD5(){ return "d50d66ad0a96e8d9eae8a7a9da579ad2"; };

  };

}
#endif
