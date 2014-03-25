//
//  TBTemplate.h
//  xcySTL
//
//  Created by XiangChenyu on 14-3-9.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//
//模版全特化与偏特化
//template<>
//class Type<char>  全特化，其他都是偏特化
//typeinfo判断模版类型

#ifndef xcySTL_TBTemplate_h
#define xcySTL_TBTemplate_h

template <int n>
class Fact
{
public:
    enum {var = Fact<n - 1>::var * n};
    
    void printTestFact()
    {
        cout << typeid(int).name() << endl;
    }

};

template <>
class Fact<0>
{
public:
    enum {var = 1};
    
  
   
};



#endif
