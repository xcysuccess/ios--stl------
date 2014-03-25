//
//  observertest.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_observertest_h
#define xcyDesignMode_observertest_h

#include "csdnblog.h"
#include "blogobserver.h"

class observertest
{
public:
    static void show()
    {
        Blog *blog = new BlogCsdn("blog.csdn.net/xcysuccess3");
        Observer *obv = new BlogObserver("csdn专用观察者",blog);
        blog->Attach(obv);
        blog->setStatus("发表设计模式C++实现（15");
        blog->Notify();
        
        delete blog;
        delete obv;
    }
    
};


#endif
