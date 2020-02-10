//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WiFiAvailabilitySource.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, TBDataSourceMediator, WiFi3BarsTileFetcher;

@interface WiFi3BarsSource : NSObject <WiFiAvailabilitySource>
{
    CDUnknownBlockType changeHandler;
    CDUnknownBlockType relevancyHandler;
    unsigned long long _cacheExpirationInDays;
    NSMutableDictionary *_networks;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_storeURL;
    TBDataSourceMediator *_sourceMediator;
    WiFi3BarsTileFetcher *_tileFetcher;
}

@property(retain, nonatomic) WiFi3BarsTileFetcher *tileFetcher; // @synthesize tileFetcher=_tileFetcher;
@property(retain, nonatomic) TBDataSourceMediator *sourceMediator; // @synthesize sourceMediator=_sourceMediator;
@property(copy, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *networks; // @synthesize networks=_networks;
@property(nonatomic) unsigned long long cacheExpirationInDays; // @synthesize cacheExpirationInDays=_cacheExpirationInDays;
@property(copy, nonatomic) CDUnknownBlockType relevancyHandler; // @synthesize relevancyHandler;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler;
- (void).cxx_destruct;
- (id)_descriptorForType:(unsigned long long)arg1;
- (void)submitCacheAnalyticsEvent;
- (id)relevantNetworks;
- (void)forceFetch3BarsNetworkMatchingBSSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_matchSearchBSSIDs:(id)arg1 toResponse:(id)arg2;
- (void)fetchCandidateNetworksMatchingBSSIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetch3BarsNetworksPredictedForLocation:(id)arg1 duration:(double)arg2 maxLocations:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetch3BarsNetworksPredictedFor:(id)arg1 duration:(double)arg2 maxLocations:(unsigned long long)arg3;
- (void)_handleRemoteFetchResponse:(id)arg1;
- (void)fetch3BarsNetworksForLocation:(id)arg1 forceRemote:(BOOL)arg2 trigger:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetch3BarsNetworksFor:(id)arg1;
- (id)initWithChangeHandler:(CDUnknownBlockType)arg1 localStoreType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
