//
//  multiset.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-3-1.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "multiset.h"

void wyMultiSet::testwyMultiSet()
{
    multiset<string> ms;
    multiset<string>::iterator msIter;
    std::string name = "a";
    for(int  i = 0 ;i < 2; ++i)
    {
        ms.insert(name);
    }
    ms.insert("5");
    ms.insert("b");
    
    msIter = ms.upper_bound("a");
    printIterator(msIter->begin(),msIter->end(),'\n');
}