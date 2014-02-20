//
//  cbase.h
//  xcyBASE
//
//  Created by XiangChenyu on 14-1-6.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcyBASE__cbase__
#define __xcyBASE__cbase__

#define deletePtr(pstr) \
if(pstr != NULL)        \
{                       \
delete pstr;        \
pstr = NULL;        \
}

#define ZeroMemory(p, len) memset(p, 0 ,sizeof(len))

#endif /* defined(__xcyBASE__cbase__) */
