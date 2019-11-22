#ifndef _ROS_transfer_PPoint_h
#define _ROS_transfer_PPoint_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace transfer
{

  class PPoint : public ros::Msg
  {
    public:
      typedef std_msgs::Header _header_type;
      _header_type header;
      typedef float _left_angle_type;
      _left_angle_type left_angle;
      typedef float _left_radius_type;
      _left_radius_type left_radius;
      typedef float _right_angle_type;
      _right_angle_type right_angle;
      typedef float _right_radius_type;
      _right_radius_type right_radius;

    PPoint():
      header(),
      left_angle(0),
      left_radius(0),
      right_angle(0),
      right_radius(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_left_angle;
      u_left_angle.real = this->left_angle;
      *(outbuffer + offset + 0) = (u_left_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_angle.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_angle);
      union {
        float real;
        uint32_t base;
      } u_left_radius;
      u_left_radius.real = this->left_radius;
      *(outbuffer + offset + 0) = (u_left_radius.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_left_radius.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_left_radius.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_left_radius.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->left_radius);
      union {
        float real;
        uint32_t base;
      } u_right_angle;
      u_right_angle.real = this->right_angle;
      *(outbuffer + offset + 0) = (u_right_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_angle.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_angle);
      union {
        float real;
        uint32_t base;
      } u_right_radius;
      u_right_radius.real = this->right_radius;
      *(outbuffer + offset + 0) = (u_right_radius.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_right_radius.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_right_radius.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_right_radius.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->right_radius);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        float real;
        uint32_t base;
      } u_left_angle;
      u_left_angle.base = 0;
      u_left_angle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_angle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_angle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_angle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_angle = u_left_angle.real;
      offset += sizeof(this->left_angle);
      union {
        float real;
        uint32_t base;
      } u_left_radius;
      u_left_radius.base = 0;
      u_left_radius.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_left_radius.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_left_radius.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_left_radius.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->left_radius = u_left_radius.real;
      offset += sizeof(this->left_radius);
      union {
        float real;
        uint32_t base;
      } u_right_angle;
      u_right_angle.base = 0;
      u_right_angle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_angle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_angle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_angle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_angle = u_right_angle.real;
      offset += sizeof(this->right_angle);
      union {
        float real;
        uint32_t base;
      } u_right_radius;
      u_right_radius.base = 0;
      u_right_radius.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_right_radius.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_right_radius.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_right_radius.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->right_radius = u_right_radius.real;
      offset += sizeof(this->right_radius);
     return offset;
    }

    const char * getType(){ return "transfer/PPoint"; };
    const char * getMD5(){ return "beff1cf4a4b34b3e681c4c109fa9e8ec"; };

  };

}
#endif
