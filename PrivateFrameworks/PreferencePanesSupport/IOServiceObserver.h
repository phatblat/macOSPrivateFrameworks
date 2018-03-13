//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IOServiceObserver : NSObject
{
    id mTarget;
    SEL mSelector;
    unsigned int mIOConnectIterator;
    unsigned int mIOTerminateIterator;
}

+ (id)observerForConnectService:(struct __CFDictionary *)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)observerForService:(struct __CFDictionary *)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (void)_closeNotificationPort;
+ (struct IONotificationPort *)_openNotificationPort;
@property(readonly) SEL selector; // @synthesize selector=mSelector;
@property(readonly) id target; // @synthesize target=mTarget;
- (void).cxx_destruct;
- (void)armIterators;
- (unsigned int)terminateIterator;
- (unsigned int)connectIterator;
- (void)dealloc;
- (id)initForConnectService:(struct __CFDictionary *)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)initForService:(struct __CFDictionary *)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

