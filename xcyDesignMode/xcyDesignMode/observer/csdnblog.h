//
//  csdnblog.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_csdnblog_h
#define xcyDesignMode_csdnblog_h

#include "blog.h"

class BlogCsdn : public Blog
{
public:
    BlogCsdn(string name) : m_name(name)
    {
    
    }
    ~BlogCsdn()
    {}
    
    void setStatus(const string& s)
    {
        m_status = "CSDN通知 : " + m_name + s;
    }
    string getStatus()
    {
        return m_status;
    }
    
private:
    string m_name; //博客名称
};
#endif
