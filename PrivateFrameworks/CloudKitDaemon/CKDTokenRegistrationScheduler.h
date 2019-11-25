//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKDSystemAvailabilityWatcher.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CKDTokenRegistrationScheduler : NSObject <CKDSystemAvailabilityWatcher>
{
    BOOL _schedulerIsAvailable;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_callbackBlocks;
    NSMutableDictionary *_callbackTimers;
    NSMutableSet *_operations;
    id <CKDAccountInfoProvider> _unitTestingAccountInfoProvider;
    NSMutableDictionary *_unitTestingPushTokens;
}

+ (id)sharedSchedulerWithUnitTestingContextInfoProvider:(id)arg1 accountInfoProvider:(id)arg2;
+ (id)sharedScheduler;
@property(retain, nonatomic) NSMutableDictionary *unitTestingPushTokens; // @synthesize unitTestingPushTokens=_unitTestingPushTokens;
@property(retain, nonatomic) id <CKDAccountInfoProvider> unitTestingAccountInfoProvider; // @synthesize unitTestingAccountInfoProvider=_unitTestingAccountInfoProvider;
@property(retain, nonatomic) NSMutableSet *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSMutableDictionary *callbackTimers; // @synthesize callbackTimers=_callbackTimers;
@property(retain, nonatomic) NSMutableDictionary *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL schedulerIsAvailable; // @synthesize schedulerIsAvailable=_schedulerIsAvailable;
- (void).cxx_destruct;
- (void)ensureTokenRefreshForAppContainerAccountTuple:(id)arg1 contextInfoProvider:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handlePublicPushTokenDidUpdate:(id)arg1;
- (void)forceTokenRefreshForAllClients;
- (void)unregisterAllTokensForAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterTokenForAppContainerAccountTuple:(id)arg1;
- (void)_handlePushToken:(id)arg1 forAppContainerAccountTuple:(id)arg2 applicationMetadata:(id)arg3 appContainerIntersectionMetadata:(id)arg4;
- (void)refreshAllClientsNow:(BOOL)arg1;
- (void)_removeApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_refreshApsToken:(id)arg1 appContainerAccountTuple:(id)arg2 apsEnvironmentString:(id)arg3 pushBundleIdentifier:(id)arg4 isCKSystemService:(BOOL)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)tokenRefreshChanged;
- (void)registerTokenRefreshActivity;
- (void)setSchedulerAvailable:(BOOL)arg1;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;
- (BOOL)canRunGivenAvailabilityState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAccountInfoProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

