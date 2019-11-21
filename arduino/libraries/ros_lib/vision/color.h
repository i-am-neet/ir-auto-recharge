#ifndef _ROS_vision_color_h
#define _ROS_vision_color_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace vision
{

  class color : public ros::Msg
  {
    public:
      typedef int64_t _ColorMode_type;
      _ColorMode_type ColorMode;
      uint32_t BallHSVBox_length;
      typedef int64_t _BallHSVBox_type;
      _BallHSVBox_type st_BallHSVBox;
      _BallHSVBox_type * BallHSVBox;
      uint32_t GreenHSVBox_length;
      typedef int64_t _GreenHSVBox_type;
      _GreenHSVBox_type st_GreenHSVBox;
      _GreenHSVBox_type * GreenHSVBox;
      uint32_t BlueHSVBox_length;
      typedef int64_t _BlueHSVBox_type;
      _BlueHSVBox_type st_BlueHSVBox;
      _BlueHSVBox_type * BlueHSVBox;
      uint32_t YellowHSVBox_length;
      typedef int64_t _YellowHSVBox_type;
      _YellowHSVBox_type st_YellowHSVBox;
      _YellowHSVBox_type * YellowHSVBox;
      uint32_t WhiteHSVBox_length;
      typedef int64_t _WhiteHSVBox_type;
      _WhiteHSVBox_type st_WhiteHSVBox;
      _WhiteHSVBox_type * WhiteHSVBox;

    color():
      ColorMode(0),
      BallHSVBox_length(0), BallHSVBox(NULL),
      GreenHSVBox_length(0), GreenHSVBox(NULL),
      BlueHSVBox_length(0), BlueHSVBox(NULL),
      YellowHSVBox_length(0), YellowHSVBox(NULL),
      WhiteHSVBox_length(0), WhiteHSVBox(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_ColorMode;
      u_ColorMode.real = this->ColorMode;
      *(outbuffer + offset + 0) = (u_ColorMode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ColorMode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ColorMode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ColorMode.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ColorMode.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ColorMode.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ColorMode.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ColorMode.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ColorMode);
      *(outbuffer + offset + 0) = (this->BallHSVBox_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->BallHSVBox_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->BallHSVBox_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->BallHSVBox_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->BallHSVBox_length);
      for( uint32_t i = 0; i < BallHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_BallHSVBoxi;
      u_BallHSVBoxi.real = this->BallHSVBox[i];
      *(outbuffer + offset + 0) = (u_BallHSVBoxi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_BallHSVBoxi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_BallHSVBoxi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_BallHSVBoxi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_BallHSVBoxi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_BallHSVBoxi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_BallHSVBoxi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_BallHSVBoxi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->BallHSVBox[i]);
      }
      *(outbuffer + offset + 0) = (this->GreenHSVBox_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->GreenHSVBox_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->GreenHSVBox_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->GreenHSVBox_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->GreenHSVBox_length);
      for( uint32_t i = 0; i < GreenHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_GreenHSVBoxi;
      u_GreenHSVBoxi.real = this->GreenHSVBox[i];
      *(outbuffer + offset + 0) = (u_GreenHSVBoxi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_GreenHSVBoxi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_GreenHSVBoxi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_GreenHSVBoxi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_GreenHSVBoxi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_GreenHSVBoxi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_GreenHSVBoxi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_GreenHSVBoxi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->GreenHSVBox[i]);
      }
      *(outbuffer + offset + 0) = (this->BlueHSVBox_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->BlueHSVBox_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->BlueHSVBox_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->BlueHSVBox_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->BlueHSVBox_length);
      for( uint32_t i = 0; i < BlueHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_BlueHSVBoxi;
      u_BlueHSVBoxi.real = this->BlueHSVBox[i];
      *(outbuffer + offset + 0) = (u_BlueHSVBoxi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_BlueHSVBoxi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_BlueHSVBoxi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_BlueHSVBoxi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_BlueHSVBoxi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_BlueHSVBoxi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_BlueHSVBoxi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_BlueHSVBoxi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->BlueHSVBox[i]);
      }
      *(outbuffer + offset + 0) = (this->YellowHSVBox_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->YellowHSVBox_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->YellowHSVBox_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->YellowHSVBox_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->YellowHSVBox_length);
      for( uint32_t i = 0; i < YellowHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_YellowHSVBoxi;
      u_YellowHSVBoxi.real = this->YellowHSVBox[i];
      *(outbuffer + offset + 0) = (u_YellowHSVBoxi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_YellowHSVBoxi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_YellowHSVBoxi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_YellowHSVBoxi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_YellowHSVBoxi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_YellowHSVBoxi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_YellowHSVBoxi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_YellowHSVBoxi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->YellowHSVBox[i]);
      }
      *(outbuffer + offset + 0) = (this->WhiteHSVBox_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->WhiteHSVBox_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->WhiteHSVBox_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->WhiteHSVBox_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->WhiteHSVBox_length);
      for( uint32_t i = 0; i < WhiteHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_WhiteHSVBoxi;
      u_WhiteHSVBoxi.real = this->WhiteHSVBox[i];
      *(outbuffer + offset + 0) = (u_WhiteHSVBoxi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_WhiteHSVBoxi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_WhiteHSVBoxi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_WhiteHSVBoxi.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_WhiteHSVBoxi.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_WhiteHSVBoxi.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_WhiteHSVBoxi.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_WhiteHSVBoxi.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->WhiteHSVBox[i]);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_ColorMode;
      u_ColorMode.base = 0;
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ColorMode.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ColorMode = u_ColorMode.real;
      offset += sizeof(this->ColorMode);
      uint32_t BallHSVBox_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      BallHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      BallHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      BallHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->BallHSVBox_length);
      if(BallHSVBox_lengthT > BallHSVBox_length)
        this->BallHSVBox = (int64_t*)realloc(this->BallHSVBox, BallHSVBox_lengthT * sizeof(int64_t));
      BallHSVBox_length = BallHSVBox_lengthT;
      for( uint32_t i = 0; i < BallHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_st_BallHSVBox;
      u_st_BallHSVBox.base = 0;
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_BallHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_BallHSVBox = u_st_BallHSVBox.real;
      offset += sizeof(this->st_BallHSVBox);
        memcpy( &(this->BallHSVBox[i]), &(this->st_BallHSVBox), sizeof(int64_t));
      }
      uint32_t GreenHSVBox_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      GreenHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      GreenHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      GreenHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->GreenHSVBox_length);
      if(GreenHSVBox_lengthT > GreenHSVBox_length)
        this->GreenHSVBox = (int64_t*)realloc(this->GreenHSVBox, GreenHSVBox_lengthT * sizeof(int64_t));
      GreenHSVBox_length = GreenHSVBox_lengthT;
      for( uint32_t i = 0; i < GreenHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_st_GreenHSVBox;
      u_st_GreenHSVBox.base = 0;
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_GreenHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_GreenHSVBox = u_st_GreenHSVBox.real;
      offset += sizeof(this->st_GreenHSVBox);
        memcpy( &(this->GreenHSVBox[i]), &(this->st_GreenHSVBox), sizeof(int64_t));
      }
      uint32_t BlueHSVBox_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      BlueHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      BlueHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      BlueHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->BlueHSVBox_length);
      if(BlueHSVBox_lengthT > BlueHSVBox_length)
        this->BlueHSVBox = (int64_t*)realloc(this->BlueHSVBox, BlueHSVBox_lengthT * sizeof(int64_t));
      BlueHSVBox_length = BlueHSVBox_lengthT;
      for( uint32_t i = 0; i < BlueHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_st_BlueHSVBox;
      u_st_BlueHSVBox.base = 0;
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_BlueHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_BlueHSVBox = u_st_BlueHSVBox.real;
      offset += sizeof(this->st_BlueHSVBox);
        memcpy( &(this->BlueHSVBox[i]), &(this->st_BlueHSVBox), sizeof(int64_t));
      }
      uint32_t YellowHSVBox_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      YellowHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      YellowHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      YellowHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->YellowHSVBox_length);
      if(YellowHSVBox_lengthT > YellowHSVBox_length)
        this->YellowHSVBox = (int64_t*)realloc(this->YellowHSVBox, YellowHSVBox_lengthT * sizeof(int64_t));
      YellowHSVBox_length = YellowHSVBox_lengthT;
      for( uint32_t i = 0; i < YellowHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_st_YellowHSVBox;
      u_st_YellowHSVBox.base = 0;
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_YellowHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_YellowHSVBox = u_st_YellowHSVBox.real;
      offset += sizeof(this->st_YellowHSVBox);
        memcpy( &(this->YellowHSVBox[i]), &(this->st_YellowHSVBox), sizeof(int64_t));
      }
      uint32_t WhiteHSVBox_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      WhiteHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      WhiteHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      WhiteHSVBox_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->WhiteHSVBox_length);
      if(WhiteHSVBox_lengthT > WhiteHSVBox_length)
        this->WhiteHSVBox = (int64_t*)realloc(this->WhiteHSVBox, WhiteHSVBox_lengthT * sizeof(int64_t));
      WhiteHSVBox_length = WhiteHSVBox_lengthT;
      for( uint32_t i = 0; i < WhiteHSVBox_length; i++){
      union {
        int64_t real;
        uint64_t base;
      } u_st_WhiteHSVBox;
      u_st_WhiteHSVBox.base = 0;
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_st_WhiteHSVBox.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->st_WhiteHSVBox = u_st_WhiteHSVBox.real;
      offset += sizeof(this->st_WhiteHSVBox);
        memcpy( &(this->WhiteHSVBox[i]), &(this->st_WhiteHSVBox), sizeof(int64_t));
      }
     return offset;
    }

    const char * getType(){ return "vision/color"; };
    const char * getMD5(){ return "3ff80881ed080689369689eeb69893cd"; };

  };

}
#endif
