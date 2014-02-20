//
//  vectorT.cpp
//  xcySTL
//
//  Created by XiangChenyu on 14-1-8.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "TBVector.h"
#include <exception>
#include <typeinfo>


TBVector::TBVector()
{
    
}

TBVector::~TBVector()
{
    
}

void TBVector::printTest()
{
    vector<double> vd, vv;
    for(int i = 0; i < 9 ;++i)
    {
        vd.push_back( i + 0.1);
        cout << &*vd.begin() << ':' <<endl;
    }
    cout << "-----------------------------" << endl;

    cout << &*vd.begin() << ':' <<endl;
 
    cout << "-----------------------------" << endl;
    vv.reserve(9);
    for(int i = 0; i < 9; ++i)
    {
        vv.push_back(i + 0.5);
        cout << vv.size() << "/" << vv.capacity() << endl;
    }
    
    vd[3] = 123.45;
    vv.at(5) = 67.8;
    
    //printIterator(vv.begin(), vv.end());
    for(int i = 0; i < vv.size(); ++i)
    {
        cout << vd[i] << ' ';
    }
    cout << endl;
    
    try
    {
        for(int i = 0; i<= vv.size(); ++i)
            cout << vv.at(i) << ' ';
        cout << endl;
    }
    catch (exception& e)
    {
        cout << "异常:" << e.what() << endl;
        cout << "类型:" << typeid(e).name() << endl;
    }
    
    int m = 3 , n = 5;
    void print(const vector< vector<int> > &v);
    
    vector< vector<int> > vvi(m , vector<int>(n));
    print(vvi);
    cout << "---------------------" << endl;
    vvi.resize(m + 3);
    vvi[0].assign(9, 1);
    vvi[5].assign(4, 5);
    print(vvi);
    cout << "---------------------" << endl;
    printIterator(vd.begin(),vd.end());
    
    //删除特定元素位置的it需要的作法
    for(vector<double>::iterator it = vd.begin() ; it != vd.end() ;)
    {
        cout << *it << ' ';
        if(*it > 5.0)
        {
            it = vd.erase(it++);
        }
        else
            ++it;
    }
    cout << endl;
    printIterator(vd.begin(),vd.end());
}

void print(const vector< vector<int> > &v)
{
    for(int i = 0; i < v.size() ; ++ i)
    {
        for(int j = 0; j < v[i].size(); ++j)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}
