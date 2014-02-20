//
//  stlpractise.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-1-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "containter.h"

container::container()
{

}

container::~container()
{

}


void container::printTest()
{
    int a[] = {4, 5, 2, 6, 1};
    vector<int> vi(a, a + 5);
    //降序
//    std::sort(vi.begin(), vi.end(), compareDecrease);//只能是数组、vector和deque
    printIterator(vi.begin(), vi.end());
    
    //升序
    std::sort(vi.begin(), vi.end());
    printIterator(vi.begin(), vi.end());
    
    vector<int>::iterator b = vi.begin();
    
    //反向输出数据
    printIterator(vi.rbegin(), vi.rend());
    
    vi.insert(b + 2, 77); // 6 5 77 4 2 1
    printIterator(vi.begin(), vi.end());
    
    vi.insert(vi.begin() , 88); //88 6 5 77 4 2 1
    printIterator(vi.begin(), vi.end());
    
    cout << "========================1" << endl;
    
    //新建一个vector
    vector<int> v2(a, a+5);
    printIterator(v2.begin(), v2.end());
    cout << "========================2" << endl;
    
    printIterator(vi.begin(), vi.end());
    vi.swap(v2); //效率更高，直接交换指针
    printIterator(vi.begin(), vi.end());
    
    std::swap(vi, v2);
    printIterator(vi.begin(), vi.end());
    
    cout << "========================3" << endl;
    vector<int> t = vi;
    vi = v2;
    v2 = t;
    printIterator(vi.begin(), vi.end());
    
    vi.erase(vi.begin() + 2);
    printIterator(vi.begin(), vi.end());
    
    //删除指定元素
    vi.erase(remove(vi.begin(), vi.end(), 6), vi.end());
    printIterator(vi.begin(), vi.end());
    
    vi.clear();
    cout << "vi.size()-->" << vi.size() << endl;
    cout << "vi.capacity()-->" << vi.capacity() << endl;
    
    vector<int> x;
    x.reserve(20);
	cout << "vector当前容量:" << x.capacity() << endl;
    
}