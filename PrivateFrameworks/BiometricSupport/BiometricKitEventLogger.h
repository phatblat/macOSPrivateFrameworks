//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface BiometricKitEventLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _eventList[200];
    int _eventListLength;
    _Bool _terminalFlushPending;
    _Bool _operationCreated;
}

+ (id)logger;
- (void).cxx_destruct;
- (void)flushEvents;
- (void)logEventOrCode:(unsigned long long)arg1;
- (void)appendEventValue:(unsigned int)arg1;
- (id)init;

@end

