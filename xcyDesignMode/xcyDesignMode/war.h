//
//  war.h
//  xcyDesignMode
//
//  Created by XiangChenyu on 14-3-23.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef xcyDesignMode_war_h
#define xcyDesignMode_war_h

#include "state.h"
class War
{
private:
    State* m_state;  //目前状态
    int m_days;      //多少天，根据天数去判断具体的日期
    
public:
    War(State *state) : m_state(state),m_days(0)
    {
    
    }
    
    ~War()
    {
        if(m_state != NULL)
        {
            delete m_state;
            m_state = NULL;
        }
    }
    
    int getDays()
    {
        return m_days;
    }
    
    void setDays(int days)
    {
        m_days = days;
    }
    
    void setState(State* state)
    {
        m_state = state;
    }
    /*
        显示当前状态
     */
    void showState()
    {
        m_state->CurrentState(this);
    }
    
};


#endif
