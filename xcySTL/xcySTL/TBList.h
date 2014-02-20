//
//  TBList.h
//  xcySTL
//
//  Created by XiangChenyu on 14-1-12.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//
/*list的个性：双向链表
 增删：.push_front(element), .pop_front(), .remove(element)//==
 不支持下标[]
 除重：.unique()相邻的重复元素只保留一个
 排序：.sort(compare_func=less)默认用小于符号比较，从小到大排序
 倒置：.reverse()颠倒链表中元素顺序
 转移：.splice(pos,list2), .splice(pos,list2,pos2), .splice(pos,list2,pos_beg,pos_end)
 归并：.merge(list2)
 */
#ifndef __xcySTL__TBList__
#define __xcySTL__TBList__


class TBList
{
public:
    TBList ();
    ~TBList();
    
    void printTest();
};

#endif /* defined(__xcySTL__TBList__) */
