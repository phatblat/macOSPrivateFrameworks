//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MCPowerLog : NSObject
{
    NSString *_eventName;
    NSObject<OS_dispatch_queue> *_logQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (void)_logEventWithDictionary:(id)arg1;
- (void)logEventWithDictionary:(id)arg1;
- (id)initWithEventName:(id)arg1;

@end

