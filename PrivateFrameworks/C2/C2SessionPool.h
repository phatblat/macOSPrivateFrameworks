//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "C2SessionDelegate.h"

@class C2RoutingTable, C2SessionTLSCache, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface C2SessionPool : NSObject <C2SessionDelegate>
{
    BOOL _cleanUp_running;
    BOOL _testBehavior_disableAutomaticCleanup;
    NSObject<OS_dispatch_queue> *_sessionCreation_queue;
    NSObject<OS_dispatch_queue> *_cleanUp_queue;
    C2RoutingTable *_routingTable;
    C2SessionTLSCache *_sessionTLSCache;
    NSMapTable *_useCountByObject;
    NSMutableDictionary *_sessionGroupForSessionConfigurationName;
}

@property(nonatomic) BOOL testBehavior_disableAutomaticCleanup; // @synthesize testBehavior_disableAutomaticCleanup=_testBehavior_disableAutomaticCleanup;
@property(retain, nonatomic) NSMutableDictionary *sessionGroupForSessionConfigurationName; // @synthesize sessionGroupForSessionConfigurationName=_sessionGroupForSessionConfigurationName;
@property(retain, nonatomic) NSMapTable *useCountByObject; // @synthesize useCountByObject=_useCountByObject;
@property(retain, nonatomic) C2SessionTLSCache *sessionTLSCache; // @synthesize sessionTLSCache=_sessionTLSCache;
@property(retain, nonatomic) C2RoutingTable *routingTable; // @synthesize routingTable=_routingTable;
@property(nonatomic) BOOL cleanUp_running; // @synthesize cleanUp_running=_cleanUp_running;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cleanUp_queue; // @synthesize cleanUp_queue=_cleanUp_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *sessionCreation_queue; // @synthesize sessionCreation_queue=_sessionCreation_queue;
- (void).cxx_destruct;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (BOOL)testBehavior_cleanUp;
- (void)ensureCleanUpRunning;
- (void)_cleanUp_schedule;
- (BOOL)_cleanUp_job;
- (void)removeSession:(id)arg1;
- (void)_unsafe_removeSession:(id)arg1;
- (void)_unsafe_removeSessionGroupIfEmpty:(id)arg1;
- (BOOL)_unsafe_isCreating:(id)arg1;
- (void)_unsafe_didCreate:(id)arg1;
- (void)_unsafe_willCreate:(id)arg1;
- (id)createDataTaskWithRequestIdentifer:(id)arg1 request:(id)arg2 options:(id)arg3 delegate:(id)arg4 sessionHandle:(id *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

