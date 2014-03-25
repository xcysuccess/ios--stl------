//
//  blogobserver.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_blogobserver_h
#define xcyDesignMode_blogobserver_h

#include "observer.h"

class BlogObserver : public Observer
{
private:
    string m_name;
    Blog *m_blog;   //观察的博客，当然以链表形式更好，就可以观察多个博客
    
public:
    BlogObserver(string name,Blog *blog) : m_name(name),m_blog(blog)
    {
    
    }
    ~BlogObserver()
    {
    
    }
    
    void Update()
    {
        string status = m_blog->getStatus();
        cout << m_name << "-----" << status <<endl;
    }
    
};

#endif
