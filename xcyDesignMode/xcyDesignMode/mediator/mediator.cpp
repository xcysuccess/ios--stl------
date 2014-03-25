//
//  mm.cpp
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "mediator.h"
#include "person.h"

void HouseMediator::setRenter(Person *person)
{
    m_renter = person;
}

void HouseMediator::setLandlord(Person *person)
{
    m_landlord = person;
}

void HouseMediator::send(Person *person,string message)
{
    if(person == m_renter)
    {
        m_landlord->getMessage(message);   //房东收到信息
    }
    else
    {
        m_renter->getMessage(message);     //租房者收到信息
    }
}