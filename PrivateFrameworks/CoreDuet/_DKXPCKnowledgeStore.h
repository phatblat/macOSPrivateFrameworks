//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_DKKnowledgeDeleting.h"
#import "_DKKnowledgeEventStreamDeleting.h"
#import "_DKKnowledgeQuerying.h"
#import "_DKKnowledgeSaving.h"
#import "_DKKnowledgeSynchronizing.h"

@class NSXPCConnection;

@interface _DKXPCKnowledgeStore : NSObject <_DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing>
{
    NSXPCConnection *_connection;
}

+ (id)XPCUserKnowledgeStore;
+ (id)XPCKnowledgeStore;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (BOOL)confirmConnectionWithError:(id *)arg1;
- (id)deviceUUID;
- (id)sourceDeviceIdentityWithError:(id *)arg1;
- (id)sourceDeviceIdentityFromObject:(id)arg1 error:(id *)arg2;
- (BOOL)deleteRemoteState:(id *)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 error:(id *)arg3;
- (BOOL)synchronizeWithError:(id *)arg1;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (id)executeQuery:(id)arg1 synchronous:(BOOL)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 synchronous:(BOOL)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 synchronous:(BOOL)arg2 error:(id *)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (BOOL)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)deleteObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (BOOL)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)saveObjects:(id)arg1 synchronous:(BOOL)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)init;

@end

