#ifndef _ROS_vision_scan_h
#define _ROS_vision_scan_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class scan : public ros::Msg
  {
    public:
      typedef int64_t _Angle_Near_Gap_type;
      _Angle_Near_Gap_type Angle_Near_Gap;
      typedef int64_t _Magn_Near_Gap_type;
      _Magn_Near_Gap_type Magn_Near_Gap;
      typedef int64_t _Magn_Near_Start_type;
      _Magn_Near_Start_type Magn_Near_Start;
      typedef int64_t _Magn_Middle_Start_type;
      _Magn_Middle_Start_type Magn_Middle_Start;
      typedef int64_t _Magn_Far_Start_type;
      _Magn_Far_Start_type Magn_Far_Start;
      typedef int64_t _Magn_Far_End_type;
      _Magn_Far_End_type Magn_Far_End;
      typedef int64_t _Dont_Search_Angle_1_type;
      _Dont_Search_Angle_1_type Dont_Search_Angle_1;
      typedef int64_t _Dont_Search_Angle_2_type;
      _Dont_Search_Angle_2_type Dont_Search_Angle_2;
      typedef int64_t _Dont_Search_Angle_3_type;
      _Dont_Search_Angle_3_type Dont_Search_Angle_3;
      typedef int64_t _Angle_range_1_type;
      _Angle_range_1_type Angle_range_1;
      typedef int64_t _Angle_range_2_3_type;
      _Angle_range_2_3_type Angle_range_2_3;

    scan():
      Angle_Near_Gap(0),
      Magn_Near_Gap(0),
      Magn_Near_Start(0),
      Magn_Middle_Start(0),
      Magn_Far_Start(0),
      Magn_Far_End(0),
      Dont_Search_Angle_1(0),
      Dont_Search_Angle_2(0),
      Dont_Search_Angle_3(0),
      Angle_range_1(0),
      Angle_range_2_3(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_Angle_Near_Gap;
      u_Angle_Near_Gap.real = this->Angle_Near_Gap;
      *(outbuffer + offset + 0) = (u_Angle_Near_Gap.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Angle_Near_Gap.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Angle_Near_Gap.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Angle_Near_Gap.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Angle_Near_Gap.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Angle_Near_Gap.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Angle_Near_Gap.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Angle_Near_Gap.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Angle_Near_Gap);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Near_Gap;
      u_Magn_Near_Gap.real = this->Magn_Near_Gap;
      *(outbuffer + offset + 0) = (u_Magn_Near_Gap.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Magn_Near_Gap.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Magn_Near_Gap.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Magn_Near_Gap.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Magn_Near_Gap.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Magn_Near_Gap.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Magn_Near_Gap.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Magn_Near_Gap.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Magn_Near_Gap);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Near_Start;
      u_Magn_Near_Start.real = this->Magn_Near_Start;
      *(outbuffer + offset + 0) = (u_Magn_Near_Start.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Magn_Near_Start.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Magn_Near_Start.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Magn_Near_Start.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Magn_Near_Start.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Magn_Near_Start.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Magn_Near_Start.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Magn_Near_Start.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Magn_Near_Start);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Middle_Start;
      u_Magn_Middle_Start.real = this->Magn_Middle_Start;
      *(outbuffer + offset + 0) = (u_Magn_Middle_Start.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Magn_Middle_Start.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Magn_Middle_Start.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Magn_Middle_Start.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Magn_Middle_Start.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Magn_Middle_Start.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Magn_Middle_Start.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Magn_Middle_Start.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Magn_Middle_Start);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Far_Start;
      u_Magn_Far_Start.real = this->Magn_Far_Start;
      *(outbuffer + offset + 0) = (u_Magn_Far_Start.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Magn_Far_Start.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Magn_Far_Start.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Magn_Far_Start.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Magn_Far_Start.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Magn_Far_Start.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Magn_Far_Start.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Magn_Far_Start.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Magn_Far_Start);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Far_End;
      u_Magn_Far_End.real = this->Magn_Far_End;
      *(outbuffer + offset + 0) = (u_Magn_Far_End.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Magn_Far_End.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Magn_Far_End.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Magn_Far_End.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Magn_Far_End.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Magn_Far_End.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Magn_Far_End.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Magn_Far_End.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Magn_Far_End);
      union {
        int64_t real;
        uint64_t base;
      } u_Dont_Search_Angle_1;
      u_Dont_Search_Angle_1.real = this->Dont_Search_Angle_1;
      *(outbuffer + offset + 0) = (u_Dont_Search_Angle_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Dont_Search_Angle_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Dont_Search_Angle_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Dont_Search_Angle_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Dont_Search_Angle_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Dont_Search_Angle_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Dont_Search_Angle_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Dont_Search_Angle_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Dont_Search_Angle_1);
      union {
        int64_t real;
        uint64_t base;
      } u_Dont_Search_Angle_2;
      u_Dont_Search_Angle_2.real = this->Dont_Search_Angle_2;
      *(outbuffer + offset + 0) = (u_Dont_Search_Angle_2.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Dont_Search_Angle_2.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Dont_Search_Angle_2.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Dont_Search_Angle_2.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Dont_Search_Angle_2.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Dont_Search_Angle_2.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Dont_Search_Angle_2.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Dont_Search_Angle_2.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Dont_Search_Angle_2);
      union {
        int64_t real;
        uint64_t base;
      } u_Dont_Search_Angle_3;
      u_Dont_Search_Angle_3.real = this->Dont_Search_Angle_3;
      *(outbuffer + offset + 0) = (u_Dont_Search_Angle_3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Dont_Search_Angle_3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Dont_Search_Angle_3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Dont_Search_Angle_3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Dont_Search_Angle_3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Dont_Search_Angle_3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Dont_Search_Angle_3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Dont_Search_Angle_3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Dont_Search_Angle_3);
      union {
        int64_t real;
        uint64_t base;
      } u_Angle_range_1;
      u_Angle_range_1.real = this->Angle_range_1;
      *(outbuffer + offset + 0) = (u_Angle_range_1.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Angle_range_1.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Angle_range_1.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Angle_range_1.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Angle_range_1.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Angle_range_1.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Angle_range_1.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Angle_range_1.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Angle_range_1);
      union {
        int64_t real;
        uint64_t base;
      } u_Angle_range_2_3;
      u_Angle_range_2_3.real = this->Angle_range_2_3;
      *(outbuffer + offset + 0) = (u_Angle_range_2_3.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_Angle_range_2_3.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_Angle_range_2_3.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_Angle_range_2_3.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_Angle_range_2_3.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_Angle_range_2_3.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_Angle_range_2_3.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_Angle_range_2_3.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->Angle_range_2_3);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_Angle_Near_Gap;
      u_Angle_Near_Gap.base = 0;
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Angle_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Angle_Near_Gap = u_Angle_Near_Gap.real;
      offset += sizeof(this->Angle_Near_Gap);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Near_Gap;
      u_Magn_Near_Gap.base = 0;
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Magn_Near_Gap.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Magn_Near_Gap = u_Magn_Near_Gap.real;
      offset += sizeof(this->Magn_Near_Gap);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Near_Start;
      u_Magn_Near_Start.base = 0;
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Magn_Near_Start.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Magn_Near_Start = u_Magn_Near_Start.real;
      offset += sizeof(this->Magn_Near_Start);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Middle_Start;
      u_Magn_Middle_Start.base = 0;
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Magn_Middle_Start.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Magn_Middle_Start = u_Magn_Middle_Start.real;
      offset += sizeof(this->Magn_Middle_Start);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Far_Start;
      u_Magn_Far_Start.base = 0;
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Magn_Far_Start.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Magn_Far_Start = u_Magn_Far_Start.real;
      offset += sizeof(this->Magn_Far_Start);
      union {
        int64_t real;
        uint64_t base;
      } u_Magn_Far_End;
      u_Magn_Far_End.base = 0;
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Magn_Far_End.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Magn_Far_End = u_Magn_Far_End.real;
      offset += sizeof(this->Magn_Far_End);
      union {
        int64_t real;
        uint64_t base;
      } u_Dont_Search_Angle_1;
      u_Dont_Search_Angle_1.base = 0;
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Dont_Search_Angle_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Dont_Search_Angle_1 = u_Dont_Search_Angle_1.real;
      offset += sizeof(this->Dont_Search_Angle_1);
      union {
        int64_t real;
        uint64_t base;
      } u_Dont_Search_Angle_2;
      u_Dont_Search_Angle_2.base = 0;
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Dont_Search_Angle_2.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Dont_Search_Angle_2 = u_Dont_Search_Angle_2.real;
      offset += sizeof(this->Dont_Search_Angle_2);
      union {
        int64_t real;
        uint64_t base;
      } u_Dont_Search_Angle_3;
      u_Dont_Search_Angle_3.base = 0;
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Dont_Search_Angle_3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Dont_Search_Angle_3 = u_Dont_Search_Angle_3.real;
      offset += sizeof(this->Dont_Search_Angle_3);
      union {
        int64_t real;
        uint64_t base;
      } u_Angle_range_1;
      u_Angle_range_1.base = 0;
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Angle_range_1.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Angle_range_1 = u_Angle_range_1.real;
      offset += sizeof(this->Angle_range_1);
      union {
        int64_t real;
        uint64_t base;
      } u_Angle_range_2_3;
      u_Angle_range_2_3.base = 0;
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_Angle_range_2_3.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->Angle_range_2_3 = u_Angle_range_2_3.real;
      offset += sizeof(this->Angle_range_2_3);
     return offset;
    }

    const char * getType(){ return "vision/scan"; };
    const char * getMD5(){ return "b9e8a289688146cc63d6908befcb947b"; };

  };

}
#endif
