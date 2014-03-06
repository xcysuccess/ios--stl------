//
//  stlforeach.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-3-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "stlforeach.h"
void add10(int& element)
{
    element += 10;
}
string printElement(int element)
{
    cout << element << ' ';
    return "printElement";
}

class add
{
    int delta;
public:
    add(int d):delta(d)
    {
    
    }
    void operator()(int &element)
    {
        element += delta;
    }
    
};
stlforeach::stlforeach()
{
}
stlforeach::~stlforeach()
{
}
void stlforeach::testPrint()
{
    int a[] = {11,22,33,44,55};
    for_each(a, a+5, add10);
    
    for_each(a, a+5, printElement);
    cout << endl;
    
    for_each(a, a+5, add(20));
    for_each(a, a+5, printElement);
    cout << endl;
}