//
//  pp.cpp
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "person.h"
#include "mediator.h"


void Renter::setMediator(Mediator *mediator)
{
    m_mediator = mediator;
}

void Renter::setMessage(string message)
{
    m_message = message;
    m_mediator->send(this,message);
}

void Renter::getMessage(string message)
{
    cout << message << "-->已经发送信息" << endl;
}



void Landlord::setMediator(Mediator *mediator)
{
    m_mediator = mediator;
}

void Landlord::setMessage(string message)
{
    m_message = message;
    m_mediator->send(this,message);
}

void Landlord::getMessage(string message)
{
    cout << message << "-->房东收到信息" << endl;
}