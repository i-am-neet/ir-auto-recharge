#ifndef _ROS_vision_Two_point_h
#define _ROS_vision_Two_point_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class Two_point : public ros::Msg
  {
    public:
      typedef int64_t _blue_dis_type;
      _blue_dis_type blue_dis;
      typedef int64_t _blue_ang_max_type;
      _blue_ang_max_type blue_ang_max;
      typedef int64_t _blue_ang_min_type;
      _blue_ang_min_type blue_ang_min;
      typedef int64_t _blue_fix_ang_max_type;
      _blue_fix_ang_max_type blue_fix_ang_max;
      typedef int64_t _blue_fix_ang_min_type;
      _blue_fix_ang_min_type blue_fix_ang_min;
      typedef int64_t _blue_left_type;
      _blue_left_type blue_left;
      typedef int64_t _blue_right_type;
      _blue_right_type blue_right;
      typedef int64_t _yellow_dis_type;
      _yellow_dis_type yellow_dis;
      typedef int64_t _yellow_ang_max_type;
      _yellow_ang_max_type yellow_ang_max;
      typedef int64_t _yellow_ang_min_type;
      _yellow_ang_min_type yellow_ang_min;
      typedef int64_t _yellow_fix_ang_max_type;
      _yellow_fix_ang_max_type yellow_fix_ang_max;
      typedef int64_t _yellow_fix_ang_min_type;
      _yellow_fix_ang_min_type yellow_fix_ang_min;
      typedef int64_t _yellow_left_type;
      _yellow_left_type yellow_left;
      typedef int64_t _yellow_right_type;
      _yellow_right_type yellow_right;

    Two_point():
      blue_dis(0),
      blue_ang_max(0),
      blue_ang_min(0),
      blue_fix_ang_max(0),
      blue_fix_ang_min(0),
      blue_left(0),
      blue_right(0),
      yellow_dis(0),
      yellow_ang_max(0),
      yellow_ang_min(0),
      yellow_fix_ang_max(0),
      yellow_fix_ang_min(0),
      yellow_left(0),
      yellow_right(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_blue_dis;
      u_blue_dis.real = this->blue_dis;
      *(outbuffer + offset + 0) = (u_blue_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_dis.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_dis.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_dis.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_dis.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_dis.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_dis);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_ang_max;
      u_blue_ang_max.real = this->blue_ang_max;
      *(outbuffer + offset + 0) = (u_blue_ang_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_ang_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_ang_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_ang_max.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_ang_max.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_ang_max.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_ang_max.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_ang_max.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_ang_min;
      u_blue_ang_min.real = this->blue_ang_min;
      *(outbuffer + offset + 0) = (u_blue_ang_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_ang_min.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_ang_min.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_ang_min.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_ang_min.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_ang_min.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_ang_min.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_ang_min.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_fix_ang_max;
      u_blue_fix_ang_max.real = this->blue_fix_ang_max;
      *(outbuffer + offset + 0) = (u_blue_fix_ang_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_fix_ang_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_fix_ang_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_fix_ang_max.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_fix_ang_max.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_fix_ang_max.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_fix_ang_max.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_fix_ang_max.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_fix_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_fix_ang_min;
      u_blue_fix_ang_min.real = this->blue_fix_ang_min;
      *(outbuffer + offset + 0) = (u_blue_fix_ang_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_fix_ang_min.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_fix_ang_min.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_fix_ang_min.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_fix_ang_min.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_fix_ang_min.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_fix_ang_min.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_fix_ang_min.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_fix_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_left;
      u_blue_left.real = this->blue_left;
      *(outbuffer + offset + 0) = (u_blue_left.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_left.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_left.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_left.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_left.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_left.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_left.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_left.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_left);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_right;
      u_blue_right.real = this->blue_right;
      *(outbuffer + offset + 0) = (u_blue_right.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_right.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_right.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_right.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_blue_right.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_blue_right.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_blue_right.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_blue_right.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->blue_right);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_dis;
      u_yellow_dis.real = this->yellow_dis;
      *(outbuffer + offset + 0) = (u_yellow_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_dis.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_dis.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_dis.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_dis.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_dis.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_dis);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_ang_max;
      u_yellow_ang_max.real = this->yellow_ang_max;
      *(outbuffer + offset + 0) = (u_yellow_ang_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_ang_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_ang_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_ang_max.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_ang_max.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_ang_max.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_ang_max.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_ang_max.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_ang_min;
      u_yellow_ang_min.real = this->yellow_ang_min;
      *(outbuffer + offset + 0) = (u_yellow_ang_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_ang_min.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_ang_min.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_ang_min.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_ang_min.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_ang_min.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_ang_min.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_ang_min.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_fix_ang_max;
      u_yellow_fix_ang_max.real = this->yellow_fix_ang_max;
      *(outbuffer + offset + 0) = (u_yellow_fix_ang_max.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_fix_ang_max.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_fix_ang_max.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_fix_ang_max.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_fix_ang_max.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_fix_ang_max.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_fix_ang_max.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_fix_ang_max.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_fix_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_fix_ang_min;
      u_yellow_fix_ang_min.real = this->yellow_fix_ang_min;
      *(outbuffer + offset + 0) = (u_yellow_fix_ang_min.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_fix_ang_min.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_fix_ang_min.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_fix_ang_min.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_fix_ang_min.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_fix_ang_min.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_fix_ang_min.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_fix_ang_min.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_fix_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_left;
      u_yellow_left.real = this->yellow_left;
      *(outbuffer + offset + 0) = (u_yellow_left.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_left.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_left.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_left.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_left.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_left.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_left.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_left.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_left);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_right;
      u_yellow_right.real = this->yellow_right;
      *(outbuffer + offset + 0) = (u_yellow_right.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_right.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_right.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_right.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_yellow_right.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_yellow_right.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_yellow_right.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_yellow_right.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->yellow_right);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_blue_dis;
      u_blue_dis.base = 0;
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_dis.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_dis = u_blue_dis.real;
      offset += sizeof(this->blue_dis);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_ang_max;
      u_blue_ang_max.base = 0;
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_ang_max = u_blue_ang_max.real;
      offset += sizeof(this->blue_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_ang_min;
      u_blue_ang_min.base = 0;
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_ang_min = u_blue_ang_min.real;
      offset += sizeof(this->blue_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_fix_ang_max;
      u_blue_fix_ang_max.base = 0;
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_fix_ang_max = u_blue_fix_ang_max.real;
      offset += sizeof(this->blue_fix_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_fix_ang_min;
      u_blue_fix_ang_min.base = 0;
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_fix_ang_min = u_blue_fix_ang_min.real;
      offset += sizeof(this->blue_fix_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_left;
      u_blue_left.base = 0;
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_left.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_left = u_blue_left.real;
      offset += sizeof(this->blue_left);
      union {
        int64_t real;
        uint64_t base;
      } u_blue_right;
      u_blue_right.base = 0;
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_blue_right.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->blue_right = u_blue_right.real;
      offset += sizeof(this->blue_right);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_dis;
      u_yellow_dis.base = 0;
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_dis.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_dis = u_yellow_dis.real;
      offset += sizeof(this->yellow_dis);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_ang_max;
      u_yellow_ang_max.base = 0;
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_ang_max = u_yellow_ang_max.real;
      offset += sizeof(this->yellow_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_ang_min;
      u_yellow_ang_min.base = 0;
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_ang_min = u_yellow_ang_min.real;
      offset += sizeof(this->yellow_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_fix_ang_max;
      u_yellow_fix_ang_max.base = 0;
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_fix_ang_max.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_fix_ang_max = u_yellow_fix_ang_max.real;
      offset += sizeof(this->yellow_fix_ang_max);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_fix_ang_min;
      u_yellow_fix_ang_min.base = 0;
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_fix_ang_min.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_fix_ang_min = u_yellow_fix_ang_min.real;
      offset += sizeof(this->yellow_fix_ang_min);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_left;
      u_yellow_left.base = 0;
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_left.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_left = u_yellow_left.real;
      offset += sizeof(this->yellow_left);
      union {
        int64_t real;
        uint64_t base;
      } u_yellow_right;
      u_yellow_right.base = 0;
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_yellow_right.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->yellow_right = u_yellow_right.real;
      offset += sizeof(this->yellow_right);
     return offset;
    }

    const char * getType(){ return "vision/Two_point"; };
    const char * getMD5(){ return "49b7910a1d0d52c57f3f74552ee3c8b8"; };

  };

}
#endif
