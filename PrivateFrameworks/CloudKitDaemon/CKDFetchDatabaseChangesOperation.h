//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

#import "CKDOperationPipelining.h"

@class CKServerChangeToken, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining>
{
    BOOL _fetchAllChanges;
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CDUnknownBlockType _recordZoneWithIDWasPurgedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    CKServerChangeToken *_serverChangeToken;
    long long _status;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    unsigned long long _numRequestsSent;
    NSObject<OS_dispatch_group> *_fetchZonesGroup;
    NSMutableArray *_requestInfos;
}

@property(retain, nonatomic) NSMutableArray *requestInfos; // @synthesize requestInfos=_requestInfos;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup; // @synthesize fetchZonesGroup=_fetchZonesGroup;
@property(nonatomic) unsigned long long numRequestsSent; // @synthesize numRequestsSent=_numRequestsSent;
@property(nonatomic) BOOL fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock; // @synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasPurgedBlock; // @synthesize recordZoneWithIDWasPurgedBlock=_recordZoneWithIDWasPurgedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg1 previousRequestSchedulerInfo:(id)arg2;
- (void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg1;
- (id)activityCreate;
@property(readonly, nonatomic) NSString *pipeliningDescription;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

