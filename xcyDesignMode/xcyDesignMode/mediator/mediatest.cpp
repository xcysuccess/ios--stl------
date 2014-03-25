//
//  mediatest.cpp
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-25.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#include "mediatest.h"
#include "person.h"
#include "mediator.h"

void mediatest::show()
{
    Person *pRentor   = new Renter();
    Person *pLandlord = new Landlord();
    Mediator *pMediator = new HouseMediator();
    pMediator->setRenter(pRentor);
    pMediator->setLandlord(pLandlord);
    
    pRentor->setMediator(pMediator);
    pRentor->setMessage("我要租房子，你有房子诶？");
    
    delete pRentor;
    delete pLandlord;
    delete pMediator;
}