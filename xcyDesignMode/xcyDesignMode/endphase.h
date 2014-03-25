//
//  endphase.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_endphase_h
#define xcyDesignMode_endphase_h

class Endphase : public State
{
public:
    void CurrentState(War* war)
    {
        Dophase(war);
    }
private:
    void Dophase(War* war)
    {
        if(war->getDays() > 20)
        {
            NSLog(@"事情已经结束");
        }
    }
};

#endif
