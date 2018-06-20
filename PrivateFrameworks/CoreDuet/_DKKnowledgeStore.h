//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKKnowledgeDeleting.h"
#import "_DKKnowledgeQuerying.h"
#import "_DKKnowledgeSaving.h"

@class NSObject<OS_dispatch_queue>, NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting>, _DKPrivacyPolicyEnforcer, _DKRateLimitPolicyEnforcer;

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

+ (id)knowledgeStoreWithDirectReadWriteAccess;
+ (id)_knowledgeStoreWithStoreDirectory:(id)arg1 readOnly:(BOOL)arg2;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)userKnowledgeStore;
+ (id)knowledgeStore;
@property(retain) NSObject<OS_dispatch_queue> *defaultQueue; // @synthesize defaultQueue=_defaultQueue;
@property(readonly) _DKPrivacyPolicyEnforcer *privacyEnforcer; // @synthesize privacyEnforcer=_privacyEnforcer;
@property(readonly) _DKRateLimitPolicyEnforcer *rateLimitEnforcer; // @synthesize rateLimitEnforcer=_rateLimitEnforcer;
@property(retain, nonatomic) NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *knowledgeStoreHandle; // @synthesize knowledgeStoreHandle=_knowledgeStoreHandle;
- (void).cxx_destruct;
- (id)sourceDeviceIdentityWithError:(id *)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;
- (BOOL)deleteRemoteState:(id *)arg1;
- (BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;
- (BOOL)synchronizeWithError:(id *)arg1;
- (id)knowledgeSynchronizingHandleWithError:(id *)arg1;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)saveObjects:(id)arg1 error:(id *)arg2;
- (id)_sanitizeObjectsBeforeSaving:(id)arg1;
- (id)init;
- (id)initWithKnowledgeStoreHandle:(id)arg1 readOnly:(BOOL)arg2;

@end

