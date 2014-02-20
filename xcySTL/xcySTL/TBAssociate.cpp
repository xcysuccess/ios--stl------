//
//  TBAssociate.cpp
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

#include "TBAssociate.h"

TBAssociate::TBAssociate()
{

};

TBAssociate::~TBAssociate()
{

};

void TBAssociate::printTest()
{
    int  array[] = {1, 2, 6, 3, 5 ,5};
    set<int> cset(array, array + 5);
    printIterator(cset.begin(),cset.end());
    cset.insert(5);
    cset.insert(10);
   
//    printIterator(cset.begin(),cset.end());
    
    if(cset.find(5) != cset.end())
    {
        cout << "找到了5" << endl;
    }
    cout << "5的个数--->" << cset.count(5) << endl;
//    cset.erase(5);
    printIterator(cset.begin(),cset.end());
    
    set<int>::iterator iterLower, itUp;
    iterLower = cset.lower_bound(2);
    itUp = cset.upper_bound(5);
    
//    cset.erase(iterLower, itUp);
    printIterator(cset.begin(), cset.end());
    
    std::pair<set<int>::iterator, set<int>::iterator> ret;
    ret = cset.equal_range(5);
    cout << "ret.first::" << *ret.first << endl;
    cout << "ret.second::"<< *ret.second<< endl;
    printIterator(cset.begin(), cset.end());

//    cset.insert(5);
}