//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOTileRequester.h>

#import "GEOSimpleTileRequesterOperationDelegate.h"
#import "GEOSimpleTileRequesterSubclass.h"

@class GEODataSession, GEOTileRequestBalancer, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate>
{
    GEOTileRequestBalancer *_balancer;
    NSMutableArray *_running;
    NSMutableArray *_errors;
    NSObject<OS_os_activity> *_activity;
    NSObject<OS_dispatch_queue> *_workQueue;
    GEODataSession *_dataSession;
    unsigned int _qos;
    struct GEOOnce_s _didStart;
    struct GEOOnce_s _didCallDelegate;
    BOOL _cancelled;
    BOOL _subclassImplementsTileEdition;
    BOOL _hasRemainingTileKeys;
}

+ (unsigned char)eTagType;
@property(readonly, nonatomic) GEOTileRequestBalancer *balancer; // @synthesize balancer=_balancer;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) GEODataSession *dataSession; // @synthesize dataSession=_dataSession;
- (void).cxx_destruct;
- (id)operationsForKey:(const struct _GEOTileKey *)arg1;
- (id)removeOperationsForKey:(const struct _GEOTileKey *)arg1;
- (BOOL)_isRunningOperation:(id)arg1;
- (BOOL)_removeRunningOperation:(id)arg1;
- (void)_addRunningOperation:(id)arg1;
- (void)dealloc;
- (void)_reprioritizeKey:(struct _GEOTileKey)arg1 newPriority:(unsigned int)arg2;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)_cancelKey:(struct _GEOTileKey)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)_cancel;
- (void)cancel;
- (void)_cancelAllRunningOperations;
- (void)_cleanup;
- (id)newRequestWithType:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 entityTag:(id)arg4 cachedData:(id)arg5 allowedRequestMode:(BOOL)arg6;
- (void)_startOperation:(id)arg1;
- (void)createRequest:(id *)arg1 localizationRequest:(id *)arg2 forKey:(const struct _GEOTileKey *)arg3;
- (id)_createOperationsForTileKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2;
- (void)_notifyDelegateDone:(CDUnknownBlockType)arg1;
- (void)_checkIfDone;
- (void)_didStartOperationsForAllTileKeys;
- (void)_updateRunningCountAndCheckIfDone;
- (void)start;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
- (void)didStartOperationsForAllTileKeys;
- (void)startOperations:(id)arg1;
- (id)createOperationsForTileKey:(struct _GEOTileKey)arg1 priority:(unsigned int)arg2;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (id)editionHeader;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2;
- (BOOL)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (id)newXPCDataRequestForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (BOOL)allowsCookies;
- (int)checksumMethodForIncomingTileDataWithKey:(struct _GEOTileKey *)arg1;
- (id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (void)operationFailed:(id)arg1 error:(id)arg2;
- (void)_operationFinished:(id)arg1;
- (void)operationFinished:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

