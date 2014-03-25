//
//  TBTypeinfo.h
//  xcySTL
//
//  Created by XiangChenyu on 14-3-9.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcySTL_TBTypeinfo_h
#define xcySTL_TBTypeinfo_h

class Base
{
    virtual void f(){};
};

class Derived: public Base
{

};

inline void testDrivedPtr()
{
    Base b, *pb;
    pb = NULL;
    Derived d;
    
    Base *pb2 = dynamic_cast<Base*>(new Derived);
    Base &b2  = d;
    Base *pb3 = &d;
    
    cout << typeid(pb2).name() <<endl;//输出Base *
    cout << typeid(b2).name()  <<endl; //输出Base Derived
    cout << typeid(pb3).name()<<endl;//输出Base *
    cout << typeid(*pb3).name()<<endl;//输出Base Derived
}

#endif
