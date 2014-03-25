//
//  metaphase.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_metaphase_h
#define xcyDesignMode_metaphase_h
#include "endphase.h"

class War;

class EnaPhase;
class Metaphase : public State
{
public:
    void CurrentState(War* war)
    {
        Dophase(war);
    }
private:
    void Dophase(War* war)
    {
        if(war->getDays() >= 10 && war->getDays() <= 20)
        {
            NSLog(@"中期，我正应该做一些事情");
        }
        else
        {
            war->setState(new Endphase());
            war->showState();
        }
    }
};

#endif
