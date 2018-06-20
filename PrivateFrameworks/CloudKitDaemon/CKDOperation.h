//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "CKDFlowControllable.h"
#import "CKDURLRequestAuthRetryDelegate.h"
#import "CKDURLRequestMetricsDelegate.h"

@class CKDClientContext, CKDClientProxy, CKDOperationMetrics, CKDURLRequest, CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationResult, CKTimeLogger, NSDate, NSError, NSMutableArray, NSNumber, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSString;

__attribute__((visibility("hidden")))
@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKDFlowControllable>
{
    unsigned long long _state;
    NSObject<OS_os_activity> *_osActivity;
    BOOL _isFinished;
    BOOL _isExecuting;
    BOOL _useEncryption;
    BOOL _useClearAssetEncryption;
    BOOL _isProxyOperation;
    BOOL _shouldPipelineFetchAllChangesRequests;
    // Error parsing type: Ai, name: _pcsWaitCount
    CKDURLRequest *_request;
    CKTimeLogger *_timeLogger;
    NSDate *_startDate;
    CKDOperation *_parentOperation;
    CKDClientContext *_context;
    CKDClientProxy *_proxy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSError *_error;
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
    NSDate *_metricExecuteStartDate;
    CDUnknownBlockType _requestCompletedBlock;
    CKOperationInfo *_operationInfo;
    NSObject<OS_dispatch_group> *_stateTransitionGroup;
    NSMutableArray *_requestUUIDs;
    NSMutableArray *_childOperations;
    NSMutableArray *_finishedChildOperationIDs;
    id <NSObject> _powerAssertion;
    NSObject<OS_dispatch_group> *_childOperationsGroup;
    NSString *_clientSuppliedDeviceIdentifier;
}

+ (long long)isPredominatelyDownload;
+ (id)_globalOperationCallbackQueueForQOS:(long long)arg1;
// Error parsing type for property pcsWaitCount:
// Property attributes: TAi,N,V_pcsWaitCount

@property(retain, nonatomic) NSString *clientSuppliedDeviceIdentifier; // @synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup; // @synthesize childOperationsGroup=_childOperationsGroup;
@property(retain, nonatomic) id <NSObject> powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) NSMutableArray *finishedChildOperationIDs; // @synthesize finishedChildOperationIDs=_finishedChildOperationIDs;
@property(retain, nonatomic) NSMutableArray *childOperations; // @synthesize childOperations=_childOperations;
@property(retain, nonatomic) NSMutableArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup; // @synthesize stateTransitionGroup=_stateTransitionGroup;
@property(retain, nonatomic) CKOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(copy, nonatomic) CDUnknownBlockType requestCompletedBlock; // @synthesize requestCompletedBlock=_requestCompletedBlock;
@property(retain, nonatomic) NSDate *metricExecuteStartDate; // @synthesize metricExecuteStartDate=_metricExecuteStartDate;
@property(retain, nonatomic) CKDOperationMetrics *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property(retain, nonatomic) CKDOperationMetrics *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) BOOL shouldPipelineFetchAllChangesRequests; // @synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests;
@property(readonly, nonatomic) BOOL isProxyOperation; // @synthesize isProxyOperation=_isProxyOperation;
@property(nonatomic) BOOL useClearAssetEncryption; // @synthesize useClearAssetEncryption=_useClearAssetEncryption;
@property(nonatomic) BOOL useEncryption; // @synthesize useEncryption=_useEncryption;
@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak CKDOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)CKStatusReportLogGroups;
- (id)CKStatusReportProperties;
- (id)_startDateString;
- (id)_runDurationString;
@property(readonly, nonatomic) CKOperationResult *operationResult;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3;
- (void)configureRequest:(id)arg1;
@property(retain, nonatomic) CKDURLRequest *request; // @synthesize request=_request;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL usesBackgroundSession;
- (BOOL)isConcurrent;
@property(readonly, nonatomic) unsigned int QOSClass;
@property(readonly, nonatomic) NSString *flowControlKey;
@property(readonly, nonatomic) BOOL shouldCheckAppVersion;
- (void)_setIsExecuting:(BOOL)arg1;
- (void)_setIsFinished:(BOOL)arg1;
- (BOOL)isWaitingOnPCS;
- (void)noteOperationDidFinishWaitingOnPCS;
- (void)noteOperationWillWaitOnPCS;
- (void)_acquirePowerAssertionsForSelfAndParent;
- (void)_acquirePowerAssertion;
- (void)_dropPowerAssertionsForSelfAndParent;
- (void)_dropPowerAssertion;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (void)makeStateTransition:(BOOL)arg1;
- (BOOL)makeStateTransition;
@property(nonatomic) unsigned long long state;
- (void)cancel;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_reallyStart;
- (void)start;
- (BOOL)operationShouldBeFlowControlled;
- (void)_determineNetworkServiceType;
@property(readonly, nonatomic) unsigned long long networkServiceType;
- (BOOL)_checkAppVersion;
- (void)_registerAttemptForOperation;
- (void)_continueOperationStart;
@property(readonly, nonatomic) __weak CKDOperation *topmostParentOperation;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 operationConfigurationBlock:(CDUnknownBlockType)arg3;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 operationConfigurationBlock:(CDUnknownBlockType)arg4;
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 clientContext:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;
- (void)combineMetricsWithOperation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)ckShortDescription;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)_stateFlags;
@property(readonly, nonatomic) NSNumber *operationGroupQuantityNumber;
@property(readonly, nonatomic) NSString *operationGroupName;
@property(readonly, nonatomic) NSString *operationGroupID;
@property(readonly, nonatomic) BOOL shouldSkipZonePCSUpdate;
- (id)additionalRequestHTTPHeaders;
@property(readonly, nonatomic) double timeoutIntervalForResource;
@property(readonly, nonatomic) double timeoutIntervalForRequest;
@property(readonly, nonatomic) BOOL allowsBackgroundNetworking;
@property(readonly, nonatomic) BOOL preferAnonymousRequests;
@property(readonly, nonatomic) unsigned long long discretionaryNetworkBehavior;
@property(readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property(readonly, nonatomic) NSString *authPromptReason;
@property(readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property(readonly, nonatomic) BOOL isLongLived;
@property(readonly, nonatomic) NSString *operationID;
@property(readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property(readonly, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property(readonly, nonatomic) BOOL allowsCellularAccess;
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (id)createInactiveConcurrentQueue;
- (id)createConcurrentQueue;
- (id)createInactiveSerialQueue;
- (id)createSerialQueue;
- (void)dealloc;
- (void)_ensureOperationGroup;
- (id)activityCreate;
@property(readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

