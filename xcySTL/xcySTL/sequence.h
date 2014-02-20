//
//  sequence.h
//  xcySTL
//
//  Created by XiangChenyu on 14-1-8.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcySTL__sequence__
#define __xcySTL__sequence__

/*
 序列式容器的共性：vector,deque,list
 构造函数：指定元素个数和初始值（初始值默认为零初始化）
 插入：.insert(pos, n, element), .insert(pos, pos_beg, pos_end)
 赋值：.assign(n, element), .assign(pos_beg, pos_end)
 调整：.resize(n, element = 零初始化)
 首尾：.front(), .back()
 增删：.push_back(element), .pop_back()只删除，返回void
 */

class sequence
{
public:
    sequence();
    ~sequence();
    
    void printTest();
};

#endif /* defined(__xcySTL__sequence__) */
