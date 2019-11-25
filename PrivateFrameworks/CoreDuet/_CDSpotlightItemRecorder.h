//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSSearchableIndexObserver.h"
#import "SpotlightReceiver.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>, NSString, _DKPrivacyPolicyEnforcer, _DKRateLimitPolicyEnforcer;

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver>
{
    NSObject<OS_dispatch_source> *_batchExecutionSource;
    NSObject<OS_dispatch_queue> *_batchExecutionSourceQueue;
    NSObject<OS_dispatch_queue> *_pendingOperationsQueue;
    NSMutableArray *_pendingOperations;
    NSObject<OS_os_transaction> *_pendingOperationsTransaction;
    NSObject<OS_dispatch_queue> *_activityRateLimiterQueue;
    NSMutableDictionary *_activityPerBundleRateLimit;
    id <_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> _knowledgeStore;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    id <_CDInteractionRecording><_CDInteractionDeleting> _recorder;
}

+ (void)recordAggdReceiverAction:(long long)arg1 bundleID:(id)arg2 count:(unsigned long long)arg3;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2;
+ (id)spotlightItemRecorderWithKnowledgeStore:(id)arg1;
+ (id)spotlightItemRecorderWithInteractionRecorder:(id)arg1;
+ (id)spotlightItemRecorder;
@property(retain, nonatomic) id <_CDInteractionRecording><_CDInteractionDeleting> recorder; // @synthesize recorder=_recorder;
- (void).cxx_destruct;
- (void)deleteKnowledgeEventsMatchingPredicate:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_deleteKnowledgeEventsMatchingPredicate:(id)arg1;
- (void)deleteAllItemsWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithGroupIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteAllInteractionsWithBundleID:(id)arg1 protectionClass:(id)arg2;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)deleteInteractionsWithIdentifiers:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteSearchableItemsSinceDate:(id)arg1 bundleID:(id)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteSearchableItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(id)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)_deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteAllUserActivities:(id)arg1;
- (void)addUserAction:(id)arg1 withItem:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addUserAction:(id)arg1 withItem:(id)arg2;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addOrUpdateSearchableItems:(id)arg1 bundleID:(id)arg2;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)addInteractions:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)supportedINIntentClassNames;
- (id)supportedContentTypes;
- (id)supportedUTIs;
- (void)addOrUpdateSearchableItems:(id)arg1;
- (void)donateRelevantShortcuts:(id)arg1 bundleID:(id)arg2;
- (void)saveRateLimitedEvents:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_addOrUpdateCoreDuetInteractions:(id)arg1 bundleID:(id)arg2;
- (void)_enqueueOperation:(id)arg1;
- (void)runOperation:(id)arg1;
@property(readonly, nonatomic) BOOL canRecordInteractions;
- (void)registerSpotlightRecorderWithServiceName:(id)arg1;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2 rateLimitEnforcer:(id)arg3;
- (id)initWithInteractionRecorder:(id)arg1 knowledgeStore:(id)arg2;
- (id)initWithInteractionRecorder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

