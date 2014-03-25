//
//  Manager.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-24.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_Manager_h
#define xcyDesignMode_Manager_h

//抽象管理者
class Manager
{
protected:
    string m_name;
    Manager *m_Manager;
public:
    Manager(Manager *manager, string name) : m_Manager(manager),m_name(name)
    {}
    
    virtual void DealWithRequest(string name,int num)
    {
    
    };
};

//经理
class CommonManager : public Manager
{
public:
    CommonManager(Manager *manager, string name):Manager(manager,name)
    {
    
    }
    virtual void DealWithRequest(string name,int num)
    {
        if(num < 500)
        {
            cout << m_name << "经理批准" << name << "员工加" << num << "工资!" << endl;;
        }
        else
        {
            m_Manager->DealWithRequest(name, num); //交给上级处理
        }
    }
};

//总监
class Majordomo : public Manager
{
public:
    Majordomo(Manager *manager, string name):Manager(manager, name)
    {
        
    }
    virtual void DealWithRequest(string name,int num)
    {
        if(num < 1000)
        {
            cout << m_name << "总监批准" << name << "员工加" << num << "工资!" << endl;;
        }
        else
        {
            NSLog(@"已经到达上限，不允许加工资了");
//            m_Manager.DealWithRequest(name, num); //交给上级处理
        }
    }
};

#endif
