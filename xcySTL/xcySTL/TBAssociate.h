//
//  TBAssociate.h
//  xcySTL
//
//  Created by XiangChenyu on 14-1-12.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

/*关联式容器共性：都是用二叉查找树实现的，都自动根据关键字排序
 set<K>,  multiset<K>, map<K,V>, multimap<K,V)
 查找：.find(key)返回一个迭代器指向找到的第一个元素，失败返回.end()
 统计：.count(key)统计关键字等于key的元素的个数
 删除：.erase(key)删除关键字等于key的所有元素
 区间：.lower_bound(key)取得关键字为key的第一个元素的位置, .upper_bound(key)取得关键字为key的最后一个元素之后的位置， .equal_range(key)一次取得关键字为key的元素的区间，返回一个pair
 插入：.insert(element)
 */


#ifndef __xcySTL__TBAssociate__
#define __xcySTL__TBAssociate__

class setCompare
{
public:
    bool operator()(const int&a, const int& b)
    {
        return a > b;
    }
};

class TBAssociate
{
public:
    TBAssociate();
    ~TBAssociate();
    
    void printTest();
};

#endif /* defined(__xcySTL__TBAssociate__) */
