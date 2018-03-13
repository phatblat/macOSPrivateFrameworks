//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICSearchIndexerDataSource.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface ICBaseSearchIndexerDataSource : NSObject <ICSearchIndexerDataSource>
{
    BOOL _observingChanges;
    BOOL _needsReindexing;
    BOOL _reindexing;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableSet *_objectIDsToProcess;
    NSMutableSet *_objectIDsBeingProcessed;
    NSMutableSet *_objectIDsToIgnore;
    NSMutableDictionary *_objectIDsByIdentifier;
    NSMutableDictionary *_identifiersByObjectID;
}

@property(getter=isReindexing) BOOL reindexing; // @synthesize reindexing=_reindexing;
@property BOOL needsReindexing; // @synthesize needsReindexing=_needsReindexing;
@property(nonatomic, getter=isObservingChanges) BOOL observingChanges; // @synthesize observingChanges=_observingChanges;
@property(retain, nonatomic) NSMutableDictionary *identifiersByObjectID; // @synthesize identifiersByObjectID=_identifiersByObjectID;
@property(retain, nonatomic) NSMutableDictionary *objectIDsByIdentifier; // @synthesize objectIDsByIdentifier=_objectIDsByIdentifier;
@property(retain, nonatomic) NSMutableSet *objectIDsToIgnore; // @synthesize objectIDsToIgnore=_objectIDsToIgnore;
@property(retain, nonatomic) NSMutableSet *objectIDsBeingProcessed; // @synthesize objectIDsBeingProcessed=_objectIDsBeingProcessed;
@property(retain, nonatomic) NSMutableSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
- (void).cxx_destruct;
- (void)loadObjectIDsToIgnore;
- (void)saveObjectIDsToIgnore;
- (id)objectIDsToIgnoreDefaultsKey;
- (id)stateDefaultsKey;
- (void)loadState;
- (void)saveState;
- (id)objectIDsFromSearchableItems:(id)arg1;
- (void)searchIndexerDidFinishReindexingWithError:(id)arg1;
- (void)searchIndexerWillBeginReindexing;
- (void)searchIndexerDidFinishDeletingSearchableItemsWithIdentifiers:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillDeleteSearchableItemsWithIdentifiers:(id)arg1;
- (void)searchIndexerDidFinishIndexingObjectIDs:(id)arg1 error:(id)arg2;
- (void)searchIndexerWillIndexObjectIDs:(id)arg1;
- (id)searchableItemIdentifiersToBeDeleted;
- (id)objectIDsNeedingIndexing;
- (id)allIndexableObjectIDs;
- (id)indexableObjectIDsWithIdentifiers:(id)arg1;
- (void)contextWillSave:(id)arg1;
- (void)stopObservingChanges;
- (void)startObservingChanges;
- (void)resetContextObservers;
- (id)searchableItemsForObjectIDs:(id)arg1;
- (id)searchableItemForObject:(id)arg1;
- (id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
- (id)objectForSearchableItem:(id)arg1 context:(id)arg2;
- (id)newManagedObjectContext;
- (id)persistentStoreCoordinator;
- (id)dataSourceIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

