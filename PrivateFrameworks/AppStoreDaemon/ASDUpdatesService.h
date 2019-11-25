//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDServiceBroker, NSObject<OS_dispatch_queue>;

@interface ASDUpdatesService : NSObject
{
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

+ (id)badgeCount;
+ (id)registerBadgeCountNotificationBlock:(CDUnknownBlockType)arg1;
+ (id)defaultService;
+ (id)interface;
- (void).cxx_destruct;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_failedJobResultsForBundleIDs:(id)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setAutoUpdateEnabled:(BOOL)arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasEntitlement;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)confirmAgentRequestedUpdateAll;
- (BOOL)autoUpdateEnabled;
- (id)_initWithServiceBroker:(id)arg1;
- (void)dealloc;
- (id)init;

@end

