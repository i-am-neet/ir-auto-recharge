#ifndef _ROS_vision_colorbutton_h
#define _ROS_vision_colorbutton_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class colorbutton : public ros::Msg
  {
    public:
      typedef int64_t _button_type;
      _button_type button;

    colorbutton():
      button(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_button;
      u_button.real = this->button;
      *(outbuffer + offset + 0) = (u_button.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_button.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_button.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_button.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_button.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_button.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_button.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_button.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->button);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_button;
      u_button.base = 0;
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_button.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->button = u_button.real;
      offset += sizeof(this->button);
     return offset;
    }

    const char * getType(){ return "vision/colorbutton"; };
    const char * getMD5(){ return "636f342c16f994332c9e43675fa80a7c"; };

  };

}
#endif
