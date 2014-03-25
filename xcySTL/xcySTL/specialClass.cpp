//
//  priority_queue.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-3-5.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "specialClass.h"

void specialClass::testspecialClass()
{
    std::vector<int> vecTmp;
    vecTmp.push_back(5);
    vecTmp.push_back(7);
    vecTmp.push_back(3);
    vecTmp.push_back(9);
    vecTmp.push_back(8);
    vecTmp.push_back(10);
    std::sort_heap(vecTmp.begin(),vecTmp.end(),greater<int>());
    printIterator(vecTmp.begin(), vecTmp.end());
    
    cout << "---------大顶堆实现---------" <<endl;
    
    priority_queue<int> pq;
    pq.push(5);
    pq.push(6);
    pq.push(1);
    
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    
}