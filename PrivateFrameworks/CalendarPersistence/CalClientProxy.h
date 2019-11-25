//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalendarAgentClient.h"

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface CalClientProxy : NSObject <CalendarAgentClient>
{
    NSObject<OS_dispatch_group> *_externalGroup;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void)calPersistanceNotification:(id)arg1 userInfo:(id)arg2;
- (void)calDavSharedUIDChanged:(id)arg1;
- (void)agentUpdatedCache:(id)arg1;
- (void)testMethod;
- (void)_waitForReady;
- (void)dealloc;
- (id)initWithGroup:(id)arg1;

@end

