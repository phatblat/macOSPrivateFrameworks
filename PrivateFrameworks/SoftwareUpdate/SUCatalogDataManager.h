//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSURL, SUCatalog;

@interface SUCatalogDataManager : NSObject
{
    NSString *_catalogEntityTag;
    NSURL *_currentlySetCatalogURL;
    NSMutableDictionary *_lastClientRetrievalPostDateByKey;
    BOOL _isDefaultAppleProductionCatalogURL;
    BOOL _isAppleSeedCatalogURL;
    BOOL _isCatalogEVProtected;
    NSString *_cachePathRoot;
    SUCatalog *_catalog;
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_loadQueue;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

+ (id)sharedCatalogDataManager;
@property(retain, nonatomic) SUCatalog *catalog; // @synthesize catalog=_catalog;
- (void)dumpDebugInfo;
- (void)resetState;
- (void)dumpStateFromCoder:(id)arg1;
- (void)archiveToCoder:(id)arg1;
- (void)restoreFromCoder:(id)arg1;
- (void)_purgeChangedAndRemovedProductsFromCache;
- (void)_removeCacheForProduct:(id)arg1 reason:(id)arg2;
- (id)_cachePathForURL:(id)arg1 inProduct:(id)arg2;
- (id)_cachePathForProduct:(id)arg1;
- (void)invalidateResourcesForProduct:(id)arg1;
- (void)retrieveIntegrityDataForProduct:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)retrievePKMDataForProduct:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)undoRetrieveDistributionDataForProduct:(id)arg1;
- (void)retrieveDistributionDataForProduct:(id)arg1 preferredLocalizations:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_retrieveURL:(id)arg1 forProduct:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)enumerateProductsWithHandler:(CDUnknownBlockType)arg1;
- (id)currentlySetCatalogURL;
- (BOOL)isCurrentCatalogEVProtected;
- (BOOL)isCurrentCatalogAppleSeed;
- (BOOL)isCurrentCatalogDefaultAppleProduction;
- (void)retrieveCatalogWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

