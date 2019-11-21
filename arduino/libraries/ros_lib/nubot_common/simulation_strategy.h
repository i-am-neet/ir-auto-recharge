#ifndef _ROS_nubot_common_simulation_strategy_h
#define _ROS_nubot_common_simulation_strategy_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "nubot_common/StrategyInfo.h"

namespace nubot_common
{

  class simulation_strategy : public ros::Msg
  {
    public:
      uint32_t strategy_msgs_length;
      typedef nubot_common::StrategyInfo _strategy_msgs_type;
      _strategy_msgs_type st_strategy_msgs;
      _strategy_msgs_type * strategy_msgs;

    simulation_strategy():
      strategy_msgs_length(0), strategy_msgs(NULL)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      *(outbuffer + offset + 0) = (this->strategy_msgs_length >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->strategy_msgs_length >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->strategy_msgs_length >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->strategy_msgs_length >> (8 * 3)) & 0xFF;
      offset += sizeof(this->strategy_msgs_length);
      for( uint32_t i = 0; i < strategy_msgs_length; i++){
      offset += this->strategy_msgs[i].serialize(outbuffer + offset);
      }
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t strategy_msgs_lengthT = ((uint32_t) (*(inbuffer + offset))); 
      strategy_msgs_lengthT |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1); 
      strategy_msgs_lengthT |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2); 
      strategy_msgs_lengthT |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3); 
      offset += sizeof(this->strategy_msgs_length);
      if(strategy_msgs_lengthT > strategy_msgs_length)
        this->strategy_msgs = (nubot_common::StrategyInfo*)realloc(this->strategy_msgs, strategy_msgs_lengthT * sizeof(nubot_common::StrategyInfo));
      strategy_msgs_length = strategy_msgs_lengthT;
      for( uint32_t i = 0; i < strategy_msgs_length; i++){
      offset += this->st_strategy_msgs.deserialize(inbuffer + offset);
        memcpy( &(this->strategy_msgs[i]), &(this->st_strategy_msgs), sizeof(nubot_common::StrategyInfo));
      }
     return offset;
    }

    const char * getType(){ return "nubot_common/simulation_strategy"; };
    const char * getMD5(){ return "1d84999556ec502fdeaed67902dd635f"; };

  };

}
#endif
