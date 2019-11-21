#ifndef _ROS_vision_Object_h
#define _ROS_vision_Object_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class Object : public ros::Msg
  {
    public:
      typedef int32_t _fps_type;
      _fps_type fps;
      typedef int32_t _ball_x_type;
      _ball_x_type ball_x;
      typedef int32_t _ball_y_type;
      _ball_y_type ball_y;
      typedef const char* _ball_LR_type;
      _ball_LR_type ball_LR;
      typedef int32_t _ball_ang_type;
      _ball_ang_type ball_ang;
      typedef int32_t _ball_dis_type;
      _ball_dis_type ball_dis;
      typedef int32_t _blue_x_type;
      _blue_x_type blue_x;
      typedef int32_t _blue_y_type;
      _blue_y_type blue_y;
      typedef const char* _blue_LR_type;
      _blue_LR_type blue_LR;
      typedef int32_t _blue_ang_type;
      _blue_ang_type blue_ang;
      typedef int32_t _blue_dis_type;
      _blue_dis_type blue_dis;
      typedef int32_t _blue_fix_x_type;
      _blue_fix_x_type blue_fix_x;
      typedef int32_t _blue_fix_y_type;
      _blue_fix_y_type blue_fix_y;
      typedef int32_t _blue_fix_ang_type;
      _blue_fix_ang_type blue_fix_ang;
      typedef int32_t _blue_fix_dis_type;
      _blue_fix_dis_type blue_fix_dis;
      typedef int32_t _yellow_x_type;
      _yellow_x_type yellow_x;
      typedef int32_t _yellow_y_type;
      _yellow_y_type yellow_y;
      typedef const char* _yellow_LR_type;
      _yellow_LR_type yellow_LR;
      typedef int32_t _yellow_ang_type;
      _yellow_ang_type yellow_ang;
      typedef int32_t _yellow_dis_type;
      _yellow_dis_type yellow_dis;
      typedef int32_t _yellow_fix_x_type;
      _yellow_fix_x_type yellow_fix_x;
      typedef int32_t _yellow_fix_y_type;
      _yellow_fix_y_type yellow_fix_y;
      typedef int32_t _yellow_fix_ang_type;
      _yellow_fix_ang_type yellow_fix_ang;
      typedef int32_t _yellow_fix_dis_type;
      _yellow_fix_dis_type yellow_fix_dis;
      typedef int32_t _goalkeeper_move_type;
      _goalkeeper_move_type goalkeeper_move;
      typedef int32_t _ball_fly_type;
      _ball_fly_type ball_fly;

    Object():
      fps(0),
      ball_x(0),
      ball_y(0),
      ball_LR(""),
      ball_ang(0),
      ball_dis(0),
      blue_x(0),
      blue_y(0),
      blue_LR(""),
      blue_ang(0),
      blue_dis(0),
      blue_fix_x(0),
      blue_fix_y(0),
      blue_fix_ang(0),
      blue_fix_dis(0),
      yellow_x(0),
      yellow_y(0),
      yellow_LR(""),
      yellow_ang(0),
      yellow_dis(0),
      yellow_fix_x(0),
      yellow_fix_y(0),
      yellow_fix_ang(0),
      yellow_fix_dis(0),
      goalkeeper_move(0),
      ball_fly(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_fps;
      u_fps.real = this->fps;
      *(outbuffer + offset + 0) = (u_fps.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fps.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fps.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fps.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fps);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_x;
      u_ball_x.real = this->ball_x;
      *(outbuffer + offset + 0) = (u_ball_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ball_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ball_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ball_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ball_x);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_y;
      u_ball_y.real = this->ball_y;
      *(outbuffer + offset + 0) = (u_ball_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ball_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ball_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ball_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ball_y);
      uint32_t length_ball_LR = strlen(this->ball_LR);
      varToArr(outbuffer + offset, length_ball_LR);
      offset += 4;
      memcpy(outbuffer + offset, this->ball_LR, length_ball_LR);
      offset += length_ball_LR;
      union {
        int32_t real;
        uint32_t base;
      } u_ball_ang;
      u_ball_ang.real = this->ball_ang;
      *(outbuffer + offset + 0) = (u_ball_ang.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ball_ang.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ball_ang.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ball_ang.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ball_ang);
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
      union {
        int32_t real;
        uint32_t base;
      } u_blue_x;
      u_blue_x.real = this->blue_x;
      *(outbuffer + offset + 0) = (u_blue_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_x);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_y;
      u_blue_y.real = this->blue_y;
      *(outbuffer + offset + 0) = (u_blue_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_y);
      uint32_t length_blue_LR = strlen(this->blue_LR);
      varToArr(outbuffer + offset, length_blue_LR);
      offset += 4;
      memcpy(outbuffer + offset, this->blue_LR, length_blue_LR);
      offset += length_blue_LR;
      union {
        int32_t real;
        uint32_t base;
      } u_blue_ang;
      u_blue_ang.real = this->blue_ang;
      *(outbuffer + offset + 0) = (u_blue_ang.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_ang.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_ang.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_ang.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_dis;
      u_blue_dis.real = this->blue_dis;
      *(outbuffer + offset + 0) = (u_blue_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_dis.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_x;
      u_blue_fix_x.real = this->blue_fix_x;
      *(outbuffer + offset + 0) = (u_blue_fix_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_fix_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_fix_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_fix_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_fix_x);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_y;
      u_blue_fix_y.real = this->blue_fix_y;
      *(outbuffer + offset + 0) = (u_blue_fix_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_fix_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_fix_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_fix_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_fix_y);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_ang;
      u_blue_fix_ang.real = this->blue_fix_ang;
      *(outbuffer + offset + 0) = (u_blue_fix_ang.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_fix_ang.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_fix_ang.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_fix_ang.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_fix_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_dis;
      u_blue_fix_dis.real = this->blue_fix_dis;
      *(outbuffer + offset + 0) = (u_blue_fix_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_blue_fix_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_blue_fix_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_blue_fix_dis.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->blue_fix_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_x;
      u_yellow_x.real = this->yellow_x;
      *(outbuffer + offset + 0) = (u_yellow_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_x);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_y;
      u_yellow_y.real = this->yellow_y;
      *(outbuffer + offset + 0) = (u_yellow_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_y);
      uint32_t length_yellow_LR = strlen(this->yellow_LR);
      varToArr(outbuffer + offset, length_yellow_LR);
      offset += 4;
      memcpy(outbuffer + offset, this->yellow_LR, length_yellow_LR);
      offset += length_yellow_LR;
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_ang;
      u_yellow_ang.real = this->yellow_ang;
      *(outbuffer + offset + 0) = (u_yellow_ang.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_ang.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_ang.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_ang.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_dis;
      u_yellow_dis.real = this->yellow_dis;
      *(outbuffer + offset + 0) = (u_yellow_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_dis.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_x;
      u_yellow_fix_x.real = this->yellow_fix_x;
      *(outbuffer + offset + 0) = (u_yellow_fix_x.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_fix_x.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_fix_x.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_fix_x.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_fix_x);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_y;
      u_yellow_fix_y.real = this->yellow_fix_y;
      *(outbuffer + offset + 0) = (u_yellow_fix_y.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_fix_y.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_fix_y.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_fix_y.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_fix_y);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_ang;
      u_yellow_fix_ang.real = this->yellow_fix_ang;
      *(outbuffer + offset + 0) = (u_yellow_fix_ang.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_fix_ang.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_fix_ang.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_fix_ang.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_fix_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_dis;
      u_yellow_fix_dis.real = this->yellow_fix_dis;
      *(outbuffer + offset + 0) = (u_yellow_fix_dis.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_yellow_fix_dis.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_yellow_fix_dis.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_yellow_fix_dis.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->yellow_fix_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_goalkeeper_move;
      u_goalkeeper_move.real = this->goalkeeper_move;
      *(outbuffer + offset + 0) = (u_goalkeeper_move.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goalkeeper_move.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goalkeeper_move.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goalkeeper_move.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->goalkeeper_move);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_fly;
      u_ball_fly.real = this->ball_fly;
      *(outbuffer + offset + 0) = (u_ball_fly.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ball_fly.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ball_fly.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ball_fly.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->ball_fly);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int32_t real;
        uint32_t base;
      } u_fps;
      u_fps.base = 0;
      u_fps.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fps.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fps.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fps.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->fps = u_fps.real;
      offset += sizeof(this->fps);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_x;
      u_ball_x.base = 0;
      u_ball_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ball_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ball_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ball_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ball_x = u_ball_x.real;
      offset += sizeof(this->ball_x);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_y;
      u_ball_y.base = 0;
      u_ball_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ball_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ball_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ball_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ball_y = u_ball_y.real;
      offset += sizeof(this->ball_y);
      uint32_t length_ball_LR;
      arrToVar(length_ball_LR, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_ball_LR; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_ball_LR-1]=0;
      this->ball_LR = (char *)(inbuffer + offset-1);
      offset += length_ball_LR;
      union {
        int32_t real;
        uint32_t base;
      } u_ball_ang;
      u_ball_ang.base = 0;
      u_ball_ang.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ball_ang.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ball_ang.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ball_ang.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ball_ang = u_ball_ang.real;
      offset += sizeof(this->ball_ang);
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
      union {
        int32_t real;
        uint32_t base;
      } u_blue_x;
      u_blue_x.base = 0;
      u_blue_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_x = u_blue_x.real;
      offset += sizeof(this->blue_x);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_y;
      u_blue_y.base = 0;
      u_blue_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_y = u_blue_y.real;
      offset += sizeof(this->blue_y);
      uint32_t length_blue_LR;
      arrToVar(length_blue_LR, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_blue_LR; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_blue_LR-1]=0;
      this->blue_LR = (char *)(inbuffer + offset-1);
      offset += length_blue_LR;
      union {
        int32_t real;
        uint32_t base;
      } u_blue_ang;
      u_blue_ang.base = 0;
      u_blue_ang.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_ang.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_ang.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_ang.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_ang = u_blue_ang.real;
      offset += sizeof(this->blue_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_dis;
      u_blue_dis.base = 0;
      u_blue_dis.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_dis.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_dis.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_dis.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_dis = u_blue_dis.real;
      offset += sizeof(this->blue_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_x;
      u_blue_fix_x.base = 0;
      u_blue_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_fix_x = u_blue_fix_x.real;
      offset += sizeof(this->blue_fix_x);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_y;
      u_blue_fix_y.base = 0;
      u_blue_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_fix_y = u_blue_fix_y.real;
      offset += sizeof(this->blue_fix_y);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_ang;
      u_blue_fix_ang.base = 0;
      u_blue_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_fix_ang = u_blue_fix_ang.real;
      offset += sizeof(this->blue_fix_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_blue_fix_dis;
      u_blue_fix_dis.base = 0;
      u_blue_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_blue_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_blue_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_blue_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->blue_fix_dis = u_blue_fix_dis.real;
      offset += sizeof(this->blue_fix_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_x;
      u_yellow_x.base = 0;
      u_yellow_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_x = u_yellow_x.real;
      offset += sizeof(this->yellow_x);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_y;
      u_yellow_y.base = 0;
      u_yellow_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_y = u_yellow_y.real;
      offset += sizeof(this->yellow_y);
      uint32_t length_yellow_LR;
      arrToVar(length_yellow_LR, (inbuffer + offset));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_yellow_LR; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_yellow_LR-1]=0;
      this->yellow_LR = (char *)(inbuffer + offset-1);
      offset += length_yellow_LR;
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_ang;
      u_yellow_ang.base = 0;
      u_yellow_ang.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_ang.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_ang.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_ang.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_ang = u_yellow_ang.real;
      offset += sizeof(this->yellow_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_dis;
      u_yellow_dis.base = 0;
      u_yellow_dis.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_dis.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_dis.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_dis.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_dis = u_yellow_dis.real;
      offset += sizeof(this->yellow_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_x;
      u_yellow_fix_x.base = 0;
      u_yellow_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_fix_x.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_fix_x = u_yellow_fix_x.real;
      offset += sizeof(this->yellow_fix_x);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_y;
      u_yellow_fix_y.base = 0;
      u_yellow_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_fix_y.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_fix_y = u_yellow_fix_y.real;
      offset += sizeof(this->yellow_fix_y);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_ang;
      u_yellow_fix_ang.base = 0;
      u_yellow_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_fix_ang.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_fix_ang = u_yellow_fix_ang.real;
      offset += sizeof(this->yellow_fix_ang);
      union {
        int32_t real;
        uint32_t base;
      } u_yellow_fix_dis;
      u_yellow_fix_dis.base = 0;
      u_yellow_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_yellow_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_yellow_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_yellow_fix_dis.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->yellow_fix_dis = u_yellow_fix_dis.real;
      offset += sizeof(this->yellow_fix_dis);
      union {
        int32_t real;
        uint32_t base;
      } u_goalkeeper_move;
      u_goalkeeper_move.base = 0;
      u_goalkeeper_move.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goalkeeper_move.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goalkeeper_move.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goalkeeper_move.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->goalkeeper_move = u_goalkeeper_move.real;
      offset += sizeof(this->goalkeeper_move);
      union {
        int32_t real;
        uint32_t base;
      } u_ball_fly;
      u_ball_fly.base = 0;
      u_ball_fly.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ball_fly.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ball_fly.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ball_fly.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->ball_fly = u_ball_fly.real;
      offset += sizeof(this->ball_fly);
     return offset;
    }

    const char * getType(){ return "vision/Object"; };
    const char * getMD5(){ return "e57673434c7bf66a0f588a24d62a5371"; };

  };

}
#endif
