//
//  statetest.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_statetest_h
#define xcyDesignMode_statetest_h
//---通过初始话一个战争的状态，从而通过时间知道来判断当前处于哪一个状态，这个状态应该干嘛-----
#include "war.h"
#include "state.h"
#include "prophase.h"
class statetest
{
public:
    static void showCurrentState()
    {
        War *war = new War(new Prophase());
        for(int i = 5; i < 30; i += 5)
        {
            NSLog(@"当前第%d天",i);
            war->setDays(i);
            war->showState();
        }
        
    }
};


#endif
