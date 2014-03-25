//
//  prophase.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_prophase_h
#define xcyDesignMode_prophase_h
#include "metaphase.h"

class War;

class Prophase : public State
{
public:
    void CurrentState(War* war)
    {
        Dophase(war);
    }
private:
    void Dophase(War* war)
    {
        if(war->getDays() < 10)
        {
            NSLog(@"现在正在前期，我正应该做一些事情");
        }
        else
        {
            war->setState(new Metaphase());
            war->showState();
        }
    }
};

#endif
