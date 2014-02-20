//
//  TBList.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-1-12.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//
#include "TBList.h"

TBList::TBList()
{
    
}

TBList::~TBList()
{

}


bool compareList(const int& b)
{
    return b < 5;
}

bool compareList2(int x, int y)
{
    x %= 3, y %= 3;
    return x < y;
}


void TBList::printTest()
{
    int a[10] = {3, 8 ,8, 5, 5, 1, 8, 8, 7},b[6] = {9, 3, 5, 2, 7, 6};
    int bSize = sizeof(b) / sizeof(b[0]);
    list<int> clili(b, b + bSize);
    
    printIterator(clili.begin(), clili.end());
    
    list<int> clist(a, a + 10);
    printIterator(clist.begin(), clist.end());
    clist.unique();
    printIterator(clist.begin(), clist.end());
    
    clist.sort();
    clist.reverse();
    
    printIterator(clist.begin(), clist.end());
    cout << "========================" << endl;
//    clist.splice(clist.begin(), clili);
    printIterator(clist.begin(), clist.end());
    assert(!clili.empty()); //加上！会导致崩溃
    
    clist.remove(5);
    
    clist.remove_if(compareList);
    printIterator(clist.begin(), clist.end());
    clist.push_back(11);
    clist.push_front(12);
    printIterator(clist.begin(), clist.end());
//    clist.resize(2);
//    printIterator(clist.begin(), clist.end());
    cout << "现在的clist " << endl;
     printIterator(clist.begin(), clist.end());
    
    cout << "现在的clili" << endl;
    printIterator(clili.begin(), clili.end());
    clist.sort();
    clili.sort(greater<int>());
    clist.merge(clili);
    
    cout << "合并之后的数据" << endl;
    printIterator(clist.begin(), clist.end());
    bool compareList2(int x, int y);
    
    clist.sort(compareList2);
    printIterator(clist.begin(), clist.end());

}



