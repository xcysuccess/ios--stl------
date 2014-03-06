//
//  wyMultimap.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-3-1.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "wyMultimap.h"
//有序可重复的一个map序列
void wyMultimap::testMultimap()
{
    typedef multimap<string,double> MSD;
    MSD m;
//    m.insert(MSD::value_type<string,double>("xiang",5000));
    m.insert(make_pair("c1",6000));
    m.insert(make_pair("c3",6000));
    m.insert(make_pair("c4",6000));
    m.insert(make_pair("c5",6000));
    m.insert(make_pair("yu",7000));
    
    printMap(m.begin(),m.end());
    
    MSD::iterator ib = m.begin(), ie;
    MSD cnt;
    while(ib != m.end())
    {
        string name = ib->first;
        ie = m.upper_bound(name);
        double sum = 0.0;
        while(ib != ie)
            sum += ib++->second;
        cnt.insert(make_pair(name,sum*0.03));
    }
    printMap(cnt.begin(),cnt.end());
}