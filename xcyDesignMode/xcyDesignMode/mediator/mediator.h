//
//  endphase.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_endphase_h
#define xcyDesignMode_endphase_h

class Person;

//中介结构
class Mediator
{
public:
    virtual void setRenter(Person *mediator){};
    
    virtual void setLandlord(Person *person){};
    
    virtual void send(Person *person,std::string message){};
};

class HouseMediator : public Mediator
{
private:
    Person *m_renter;     //租房者
    Person *m_landlord;   //房东
public:
    void setRenter(Person *person);
    
    void setLandlord(Person *person);
    
    void send(Person *person,std::string message);
};
#endif
