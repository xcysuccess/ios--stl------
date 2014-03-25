//
//  dutytest.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-24.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_dutytest_h
#define xcyDesignMode_dutytest_h
#include "Manager.h"

class dutytest
{
public:
    static void show()
    {
        Manager *majorManager  = new Majordomo(NULL, "向总监");
        Manager *commonManager = new CommonManager(majorManager, "向经理");
        commonManager->DealWithRequest("小李",800);
        commonManager->DealWithRequest("小李3",1000);
        commonManager->DealWithRequest("小李4",300);

        
        
        delete commonManager;
        delete majorManager;
    }
    
};


#endif
