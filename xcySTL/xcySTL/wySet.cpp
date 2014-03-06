//
//  wySet.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-3-1.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "wySet.h"

void wySet::testWySet()
{
    set<string> ss;

    ss.insert("5");
    ss.insert("6");
    ss.insert("7");
    printIterator(ss.begin(),ss.end());
}