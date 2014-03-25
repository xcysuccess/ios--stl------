//
//  blog.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_blog_h
#define xcyDesignMode_blog_h
#include "observer.h"

class Blog
{
public:
    Blog(){}
    virtual ~Blog(){}
    
    void Attach(Observer* obv)
    {
        m_obvs.push_back(obv);
    }
    
    void Remove(Observer* obv)
    {
        m_obvs.remove(obv);
    }
    
    void Notify() //通知观察者
    {
        list<Observer*>::iterator iter = m_obvs.begin();
        for(; iter != m_obvs.end(); ++iter)
        {
            (*iter)->Update();
        }
    }
    virtual string getStatus()
    {
        return m_status;
    }
    virtual void setStatus(const string& s)
    {
        m_status = s;
    }
private:
    list<Observer*> m_obvs;
    
protected:
    std::string m_status;
};

#endif
