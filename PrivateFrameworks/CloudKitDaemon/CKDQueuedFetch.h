//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDClientContext, CKDOperation, NSDate, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface CKDQueuedFetch : NSObject
{
    BOOL _isFinished;
    BOOL _isCancelled;
    NSDate *_queuedDate;
    CDUnknownBlockType _completionHandler;
    CKDQueuedFetch *_equivalentRunningFetch;
    NSObject<OS_os_activity> *_osActivity;
    NSMutableDictionary *_completionHandlersByItemID;
    unsigned long long _lastCompletionHandlerCount;
    NSDate *_startDate;
    NSDate *_lastRequestDate;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    long long _scope;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    long long _highestQOS;
    NSString *_runningOperationID;
    NSMutableSet *_dependentOperationIDs;
    NSMutableDictionary *_dependentOperationIDsByItemID;
    CKDOperation *_initialOperation;
}

@property(retain, nonatomic) CKDOperation *initialOperation; // @synthesize initialOperation=_initialOperation;
@property(retain, nonatomic) NSMutableDictionary *dependentOperationIDsByItemID; // @synthesize dependentOperationIDsByItemID=_dependentOperationIDsByItemID;
@property(retain, nonatomic) NSMutableSet *dependentOperationIDs; // @synthesize dependentOperationIDs=_dependentOperationIDs;
@property(retain, nonatomic) NSString *runningOperationID; // @synthesize runningOperationID=_runningOperationID;
@property(nonatomic) long long highestQOS; // @synthesize highestQOS=_highestQOS;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) long long scope; // @synthesize scope=_scope;
@property(nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *lastRequestDate; // @synthesize lastRequestDate=_lastRequestDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long lastCompletionHandlerCount; // @synthesize lastCompletionHandlerCount=_lastCompletionHandlerCount;
@property(retain, nonatomic) NSMutableDictionary *completionHandlersByItemID; // @synthesize completionHandlersByItemID=_completionHandlersByItemID;
@property(retain, nonatomic) NSObject<OS_os_activity> *osActivity; // @synthesize osActivity=_osActivity;
@property(nonatomic) __weak CKDQueuedFetch *equivalentRunningFetch; // @synthesize equivalentRunningFetch=_equivalentRunningFetch;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
- (void).cxx_destruct;
- (void)start;
- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (BOOL)dependentOperationListContainsOperationID:(id)arg1;
- (BOOL)dependentOperationListContainsRunningFetch:(id)arg1;
- (BOOL)canBeUsedForPendingFetch:(id)arg1;
- (BOOL)canBeUsedForOperation:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (void)cancelFetchOperation;
- (void)finishFetchOperationWithError:(id)arg1;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (id)allItemIDs;
- (id)callbacksForItemWithID:(id)arg1;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (int)numberOfCallbacks;
@property(nonatomic) BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (id)init;

@end

