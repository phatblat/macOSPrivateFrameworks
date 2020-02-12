//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Email/EMCollection.h>

#import "EFContentProtectionObserver.h"
#import "EFLoggable.h"
#import "EMCollectionChangeObserver.h"
#import "EMCollectionItemIDStateCapturerDelegate.h"
#import "EMMessageListQueryResultsObserver.h"

@class EFLazyCache, EMCollectionItemIDStateCapturer, EMMailboxScope, EMMessageListChangeObserverHelper, EMMessageRepository, EMObjectID, EMThreadScope, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface EMMessageList : EMCollection <EFContentProtectionObserver, EFLoggable, EMCollectionChangeObserver, EMCollectionItemIDStateCapturerDelegate, EMMessageListQueryResultsObserver>
{
    NSMutableDictionary *_expandedThreads;
    NSMapTable *_messageListItemsForRetry;
    struct os_unfair_lock_s _expandedThreadsLock;
    EMMailboxScope *_mailboxScope;
    EMThreadScope *_threadScope;
    EFLazyCache *_cache;
    id <EFScheduler> _observerScheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    EMMessageList *_unfilteredMessageList;
    EMMessageListChangeObserverHelper *_changeObserverHelper;
    NSSet *_recentlyCollapsedItemIDs;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

+ (id)simpleMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(BOOL)arg3;
+ (id)threadedMessageListForMailboxes:(id)arg1 withRepository:(id)arg2 shouldTrackOldestItems:(BOOL)arg3;
+ (id)log;
@property(readonly, nonatomic) EMCollectionItemIDStateCapturer *stateCapturer; // @synthesize stateCapturer=_stateCapturer;
@property(retain, nonatomic) NSSet *recentlyCollapsedItemIDs; // @synthesize recentlyCollapsedItemIDs=_recentlyCollapsedItemIDs;
@property(retain, nonatomic) EMMessageListChangeObserverHelper *changeObserverHelper; // @synthesize changeObserverHelper=_changeObserverHelper;
@property(retain, nonatomic) EMMessageList *unfilteredMessageList; // @synthesize unfilteredMessageList=_unfilteredMessageList;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *contentProtectionQueue; // @synthesize contentProtectionQueue=_contentProtectionQueue;
@property(readonly, nonatomic) id <EFScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly, nonatomic) EFLazyCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
@property(readonly, nonatomic) EMMailboxScope *mailboxScope; // @synthesize mailboxScope=_mailboxScope;
- (void).cxx_destruct;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)labelForStateCapture;
- (id)itemIDOfFirstMessageListItemMatchingPredicate:(id)arg1;
- (id)_nextThreadItemIDAfterThreadItemID:(id)arg1;
- (BOOL)_threadIsExpandedForItemID:(id)arg1;
- (BOOL)_threadIsExpanded:(id)arg1;
- (void)queryMatchedOldestItemsUpdatedForMailboxesObjectIDs:(id)arg1;
- (id)_expandedObjectIDsForObjectIDs:(id)arg1;
- (void)queryMatchedChangesByObjectIDs:(id)arg1;
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;
- (void)collection:(id)arg1 replacedExistingItemID:(id)arg2 withNewItemID:(id)arg3;
- (void)collectionDidFinishInitialLoad:(id)arg1;
- (void)collection:(id)arg1 deletedItemIDs:(id)arg2;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2 itemIDsWithCountChanges:(id)arg3;
- (void)collection:(id)arg1 changedItemIDs:(id)arg2;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 movedItemIDs:(id)arg2 before:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 after:(id)arg3;
- (void)collection:(id)arg1 addedItemIDs:(id)arg2 before:(id)arg3;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (void)finishRecovery;
- (id)itemIDOfMessageListItemWithDisplayMessage:(id)arg1;
- (void)invalidateCacheForItemIDs:(id)arg1;
- (void)_attemptToFinishRetryingPromisesByItemID:(id)arg1;
- (id)_availableMessageListItemsForItemIDs:(id)arg1;
- (id)messageListItemsForItemIDs:(id)arg1 ifAvailable:(BOOL)arg2;
- (id)messageListItemsForItemIDs:(id)arg1;
- (id)messageListItemForItemID:(id)arg1 ifAvailable:(BOOL)arg2;
- (id)messageListItemForItemID:(id)arg1;
- (void)clearRecentlyCollapsedThread;
- (BOOL)recentlyCollapsedThreadContainsItemID:(id)arg1;
- (BOOL)anyExpandedThreadContainsItemID:(id)arg1;
- (void)collapseThread:(id)arg1;
- (void)expandThread:(id)arg1;
- (void)expandThreadsFromThreadItemIDs:(id)arg1;
@property(readonly, copy) NSSet *expandedThreadItemIDs;
@property(readonly, nonatomic) BOOL isThreaded;
- (id)filteredMessageListWithPredicate:(id)arg1;
- (void)notifyChangeObserverAboutChangesByItemIDs:(id)arg1;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;
- (void)notifyChangeObserverAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;
- (id)_unreadItemIDsFromExtraInfo:(id)arg1;
- (void)removeItemIDs:(id)arg1;
- (BOOL)objectIDBelongsToCollection:(id)arg1;
- (id)itemIDForObjectID:(id)arg1;
- (id)objectIDForItemID:(id)arg1;
- (void)stopObserving:(id)arg1;
- (id)ef_publicDescription;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (void)_commonInitWithRepository:(id)arg1;
- (id)initWithQuery:(id)arg1 repository:(id)arg2;
- (id)initWithObjectID:(id)arg1 query:(id)arg2 repository:(id)arg3;
- (id)initWithMailboxes:(id)arg1 repository:(id)arg2 targetClass:(Class)arg3 shouldTrackOldestItems:(BOOL)arg4 labelPrefix:(id)arg5;
- (void)setRepository:(id)arg1;
@property(readonly, nonatomic) EMMessageRepository *repository;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) EMObjectID *objectID;
@property(readonly) Class superclass;

@end
