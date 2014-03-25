//
//  state.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_state_h
#define xcyDesignMode_state_h

class War;
class State
{
public:
    virtual void CurrentState(War* war) = 0;
   
    virtual ~State(){};
    
private:
    virtual void Dophase(War* war) = 0;
};

#endif
