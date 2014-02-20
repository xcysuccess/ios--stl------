//
//  TBDeque.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-1-11.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "TBDeque.h"

TBDeque::TBDeque()
{
    
}

TBDeque::~TBDeque()
{
    
}

void TBDeque::printTest()
{
    deque<char> dc;
    
    dc.push_back(97);
    dc.push_back('c');
    dc.push_back('s');
    dc.push_back('d');
    dc.push_back('k');
    dc.push_front('$');
	printIterator(dc.begin(),dc.end());
    
    dc[1] = 't';
//    dc.at(10) = '2';
    dc.at(2) = '3';
    for(int i = 0; i < dc.size(); ++i)
    {
        cout << dc[i] << ',';
    }
    cout << endl;
    dc.pop_back();
    dc.pop_front();
    printIterator(dc.begin(),dc.end());
    
    cout << endl;
}