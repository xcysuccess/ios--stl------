//
//  sequence.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-1-8.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "sequence.h"

sequence::sequence()
{
    
}
sequence::~sequence()
{

}
void sequence::printTest()
{
    deque<string> ds;
    
    ds.push_back("一");
    ds.push_back("二");
    ds.push_back("三");
    ds.push_back("四");
    ds.push_back("五");
    
    printIterator(ds.begin(), ds.end(), ',');
    ds.insert(ds.begin() + 2, 2, "芙蓉");
    printIterator(ds.begin(), ds.end());
    
    string s[3] = {"向", "晨", "宇"};
    ds.insert(----ds.end(), s, s+3);
    printIterator(ds.begin(), ds.end());
    
    ds.pop_back();
    ds.pop_back();
    printIterator(ds.begin(), ds.end());
    
    cout << "front:" << ds.front() << ",back:" << ds.back() << endl;
    cout << "ds.size()" << ds.size() << endl;
    
    ds.resize(10, "郭敬明");
    printIterator(ds.begin(), ds.end());
    ds.assign(5, "康森林");
    printIterator(ds.begin(), ds.end());
    ds.front() = "孙东东";
    ds.back()  = "梁振杰";
    
    printIterator(ds.begin(), ds.end());
    
    
}