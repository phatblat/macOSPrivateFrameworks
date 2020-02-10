//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PPLocationClientProtocol.h"

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPLocationReadOnlyClient : NSObject <PPLocationClientProtocol>
{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)locationRecordsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (BOOL)rankedLocationsWithQuery:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)locationRecordBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)locationBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_unblockPendingQueries;
- (id)init;

@end
