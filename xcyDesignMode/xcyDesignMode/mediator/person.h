//
//  person.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_person_h
#define xcyDesignMode_person_h


//#import "mediator.h"
class Mediator;

class Person
{
protected:
    Mediator *m_mediator;
    
public:
    virtual void setMediator(Mediator *mediator){};
    
    virtual void setMessage(string message){};
    
    virtual void getMessage(string message){};
};


//租房者
class Renter : public Person
{
private:
    string m_message;
public:
    void setMediator(Mediator *mediator);
    
    void setMessage(string message);
    
    void getMessage(string message);
};

//房东
class Landlord : public Person
{
private:
    string m_message;
    
public:
    void setMediator(Mediator *mediator);
    void setMessage(string message);
    
    void getMessage(string message);
    
};

#endif
