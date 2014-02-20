//
//  stlpractise.h
//  xcySTL
//
//  Created by XiangChenyu on 14-1-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcySTL__stlpractise__
#define __xcySTL__stlpractise__

/*标准容器（类模板）的共性：vector,deque,list,set/map,multi...
 构造函数：无参构造，拷贝构造，区间构造（两个迭代器表示的两个位置）
 析构:
 迭代器相关：正向.begin()，.end()，反向.rbegin()，.rend()
 iterator,reverse_iterator,const_iterator,const_reverse_iterator
 *,->,=,++,==,!= --
 插入：.insert(pos,element)，其中pos表示插入位置，是个迭代器
 删除：.erase(pos), .erase(pos_beg, pos_end)
 清除：.clear()
 大小：.size(), .max_size(), .empty()
 交换：.swap(c2),  swap(c1,c2)
 运算符：=, >, <, >=, <=, ==, !=
 */

class container
{
public:
    container();
    ~container();
    
    void printTest();
};

#endif /* defined(__xcySTL__stlpractise__) */
