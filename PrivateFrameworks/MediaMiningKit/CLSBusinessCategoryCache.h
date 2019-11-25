//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSDBCache.h>

@class NSPredicate;

@interface CLSBusinessCategoryCache : CLSDBCache
{
    NSPredicate *_predicateEntryWithUpdateTimestamp;
}

+ (BOOL)cachedRegion:(id)arg1 isMatchingOtherRegion:(id)arg2;
@property(readonly, nonatomic) NSPredicate *predicateEntryWithUpdateTimestamp; // @synthesize predicateEntryWithUpdateTimestamp=_predicateEntryWithUpdateTimestamp;
- (void).cxx_destruct;
- (id)updateBusinessItems:(id)arg1;
- (void)_updateManagedBusinessItem:(id)arg1 withBusinessItem:(id)arg2;
- (id)_fetchBusinessItemsForMUIDs:(id)arg1;
- (unsigned long long)numberOfBusinessItemsForRegion:(id)arg1;
- (BOOL)hasRegion:(id)arg1;
- (id)businessItemFromManagedObject:(id)arg1;
- (id)businessItemsForMuids:(id)arg1;
- (id)businessItemsForMuid:(unsigned long long)arg1;
- (id)_businessItemInRegion:(id)arg1 matchingCategories:(id)arg2 maximumDistance:(double)arg3 forBusinessItems:(id)arg4;
- (id)businessItemsInRegion:(id)arg1 categories:(id)arg2 maximumDistance:(double)arg3;
- (id)businessItemsForRegion:(id)arg1;
- (id)nearestItemForRegion:(id)arg1 inItems:(id)arg2;
- (void)insertBatchesOfBusinessItems:(id)arg1 forRegions:(id)arg2;
- (id)_fetchedBusinessItemByMUIDForBusinessItems:(id)arg1;
- (id)predicateForRegion:(id)arg1;
- (id)predicateForEntryNearbyRegion:(id)arg1;
- (void)invalidateCacheForGeoServiceProviderChangeToProvider:(id)arg1;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)arg1;
- (id)dataModelName;
- (id)initWithDiskCacheName:(id)arg1;

@end

