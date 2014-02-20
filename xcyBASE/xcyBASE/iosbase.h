//
//  iosbase.h
//  xcyBASE
//
//  Created by XiangChenyu on 14-1-11.
//  Copyright (c) 2014年 XiangChenyu. All rights reserved.
//

#ifndef __xcyBASE__iosbase__
#define __xcyBASE__iosbase__

#define IOSContruct(object) [[object alloc] init]
#define IOSRelease(object)  \
if(nil != object)           \
{                           \
    [object release];       \
    object = nil;           \
}

#define IOSContructAR(object) [[[object alloc] init] autorelease]

#endif /* defined(__xcyBASE__iosbase__) */
