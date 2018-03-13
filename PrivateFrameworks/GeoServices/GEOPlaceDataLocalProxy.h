//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOPlaceDataProxy.h"

@class GEOPhoneNumberMUIDMapper, GEOPlaceDataCacheRegister, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy>
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMapTable *_pendingRequests;
    GEOPlaceDataCacheRegister *_cacheRegister;
    GEOPhoneNumberMUIDMapper *_phoneNumberMapper;
    NSMutableSet *_requestsInProgress;
    NSMutableArray *_requestHandlersPending;
    NSMutableOrderedSet *_placeHashes;
}

- (void).cxx_destruct;
- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;
- (void)_callHistoryRecentsClearedObserver:(id)arg1;
- (void)_resetPhoneNumberMapper;
- (void)clearCache;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(CDUnknownBlockType)arg2;
- (void)calculateFreeableSpaceWithHandler:(CDUnknownBlockType)arg1;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 networkActivity:(CDUnknownBlockType)arg6 requesterHandler:(CDUnknownBlockType)arg7;
- (void)_cachePlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2 shouldOptimizeWritesToDisk:(BOOL)arg3 shouldUseDefaultProviderId:(BOOL)arg4;
- (void)_cachePlaceData:(id)arg1 forKey:(struct _GEOTileKey)arg2 shouldOptimizeWritesToDisk:(BOOL)arg3;
- (id)_cachedPlacedForRequest:(id)arg1;
- (BOOL)_populateKey:(struct _GEOTileKey *)arg1 request:(id)arg2;
- (void)_trackPlaceData:(id)arg1 forRequest:(id)arg2;
- (void)trackPlaceData:(id)arg1;
- (void)fetchAllCacheEntriesWithRequesterHandler:(CDUnknownBlockType)arg1;
- (long long)_invalidationStateForPlace:(id)arg1 fromRequest:(id)arg2;
- (id)_placeResponseFromPlaces:(id)arg1;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(CDUnknownBlockType)arg5;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 auditToken:(id)arg4 finished:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 requesterHandler:(CDUnknownBlockType)arg6;
- (void)cancelRequest:(id)arg1;
- (void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 finished:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6 error:(CDUnknownBlockType)arg7;
- (id)cacheRegister;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

