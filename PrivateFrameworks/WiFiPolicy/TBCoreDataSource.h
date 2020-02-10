//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WiFiPolicy/TBDataSource.h>

#import "TBCacheProvider.h"

@class NSManagedObjectContext, NSString, TBCoreDataStoreDescriptor, TBPersistenceManager;

@interface TBCoreDataSource : TBDataSource <TBCacheProvider>
{
    unsigned long long _cacheExpirationInDays;
    NSManagedObjectContext *_context;
    TBPersistenceManager *_persistenceManager;
    TBCoreDataStoreDescriptor *_descriptor;
}

@property(retain, nonatomic) TBCoreDataStoreDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(retain, nonatomic) TBPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long cacheExpirationInDays; // @synthesize cacheExpirationInDays=_cacheExpirationInDays;
- (void).cxx_destruct;
- (void)_createNewNetworkFromDictionary:(id)arg1 withMOC:(id)arg2;
- (void)importObjectsWithArray:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_createNewNetwork:(id)arg1 tile:(id)arg2 withMOC:(id)arg3;
- (void)removeWithFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cacheFetchResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_canSupportRequest:(id)arg1;
- (void)_executeFetchRequest:(id)arg1;
- (void)_executePreferLocalFetchRequest:(id)arg1;
- (void)executeFetchRequest:(id)arg1;
- (unsigned long long)type;
- (id)initWithStoreDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
