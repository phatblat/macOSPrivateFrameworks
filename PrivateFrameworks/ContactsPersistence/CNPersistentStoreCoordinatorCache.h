//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNCache, CNPersistentStoreCoordinatorFactory, CNPersistentStoreCoordinatorUpdater, CNQueue;

__attribute__((visibility("hidden")))
@interface CNPersistentStoreCoordinatorCache : NSObject
{
    CNCache *_cache;
    CNQueue *_cacheQueue;
    CNPersistentStoreCoordinatorFactory *_coordinatorFactory;
    CNPersistentStoreCoordinatorUpdater *_coordinatorUpdater;
}

+ (id)_cacheKeyForAccountCollection:(id)arg1;
+ (id)pscKeyForStoreDescription:(id)arg1;
+ (id)cacheKeyForAllSources;
+ (id)sharedInstance;
- (BOOL)addAllPersistentStoresAndReturnIsMainDatabasePristine;
- (void)_updateCacheEntry:(id)arg1 withResult:(id)arg2 accountCollection:(id)arg3 storeDescriptionKey:(id)arg4;
- (id)_pscResultFromCacheEntry:(id)arg1 withStoreDescriptionKey:(id)arg2;
- (id)_cacheEntryForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_cacheEntryForKey:(id)arg1;
- (id)coordinatorWithCacheKey:(id)arg1 storeDescription:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)coordinatorWithCacheKey:(id)arg1 storeDescription:(id)arg2;
- (id)coordinatorForSourcesWithAccountCollection:(id)arg1;
- (id)allCacheKeys;
- (void)dealloc;
- (id)initReadOnly:(BOOL)arg1;

@end

