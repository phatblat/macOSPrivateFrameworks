//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOResourceManifestTileGroupObserver.h"

@class NSCache, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface GEOLocationShifter : NSObject <GEOResourceManifestTileGroupObserver>
{
    id <_GEOLocationShifterProxy> _proxy;
    BOOL _isRequestingShiftFunction;
    NSLock *_lock;
    NSMutableArray *_locationsToShift;
    NSCache *_shiftFunctionCache;
    int _resetPrivacyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)isLocationShiftEnabled;
+ (BOOL)isLocationShiftRequiredForRegion:(id)arg1;
+ (BOOL)isLocationShiftRequiredForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (unsigned int)locationShiftFunctionVersion;
+ (void)useLocalProxy;
- (void).cxx_destruct;
- (BOOL)_shiftLocation:(id)arg1;
- (void)_fetchShiftFunctionForLatLng:(id)arg1 auditToken:(id)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shiftLatLng:(id)arg1 accuracy:(double)arg2 shiftedCoordinate:(CDStruct_c3b9c2ee *)arg3 shiftedAccuracy:(double *)arg4;
- (BOOL)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 shiftedCoordinate:(CDStruct_c3b9c2ee *)arg3 shiftedAccuracy:(double *)arg4;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 auditToken:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 mustGoToNetworkCallback:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6 callbackQueue:(id)arg7;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 mustGoToNetworkCallback:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 mustGoToNetworkCallback:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)shiftLatLng:(id)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shiftCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_requestNextShiftFunctionIfNecessary;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_reset;
@property(readonly, nonatomic) BOOL locationShiftEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

