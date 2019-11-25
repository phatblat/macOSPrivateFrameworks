//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDMailboxChangeHookResponder.h"
#import "EDMessageChangeHookResponder.h"
#import "EFCancelable.h"
#import "EFLoggable.h"
#import "EMMailboxChangeObserver.h"

@class EDMessagePersistence, EDMessageQueryEvaluator, EDPersistenceHookRegistry, EDUpdateThrottler, EFCancelationToken, EFQuery, EMMailboxScope, EMObjectID, NSMutableDictionary, NSMutableSet, NSPredicate, NSString;

@interface EDMessageCountQueryHandler : NSObject <EFLoggable, EDMailboxChangeHookResponder, EDMessageChangeHookResponder, EMMailboxChangeObserver, EFCancelable>
{
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    long long _resyncDatabaseGeneration;
    EMObjectID *_mailboxObserverID;
    NSMutableSet *_seenMessageIDs;
    NSMutableSet *_newMessageIDs;
    struct os_unfair_lock_s _seenMessageIDsLock;
    // Error parsing type: AQ, name: _recalculationPending
    // Error parsing type: {EFAtomicObject="cfObject"Aq}, name: _atomicQueryDescription
    // Error parsing type: {EFAtomicObject="cfObject"Aq}, name: _atomicMailboxScopeDescription
    EFQuery *_query;
    EFQuery *_expandedQuery;
    NSPredicate *_predicateIgnoringFlags;
    EMMailboxScope *_serverCountMailboxScope;
    EDMessageQueryEvaluator *_queryEvaluator;
    id <EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EFCancelationToken *_cancelationToken;
    EDUpdateThrottler *_updateThrottler;
    NSString *_pendingFlagChangesKey;
    long long _localCount;
}

+ (id)defaultScheduler;
+ (id)log;
@property(nonatomic) long long localCount; // @synthesize localCount=_localCount;
@property(readonly) NSString *pendingFlagChangesKey; // @synthesize pendingFlagChangesKey=_pendingFlagChangesKey;
@property(retain, nonatomic) EDUpdateThrottler *updateThrottler; // @synthesize updateThrottler=_updateThrottler;
@property(retain, nonatomic) EFCancelationToken *cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EMMessageRepositoryCountQueryObserver_xpc> resultsObserver; // @synthesize resultsObserver=_resultsObserver;
@property(retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator; // @synthesize queryEvaluator=_queryEvaluator;
@property(readonly, nonatomic) EMMailboxScope *serverCountMailboxScope; // @synthesize serverCountMailboxScope=_serverCountMailboxScope;
@property(retain, nonatomic) NSPredicate *predicateIgnoringFlags; // @synthesize predicateIgnoringFlags=_predicateIgnoringFlags;
@property(retain, nonatomic) EFQuery *expandedQuery; // @synthesize expandedQuery=_expandedQuery;
@property(retain, nonatomic) EFQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)mailboxListChanged:(id)arg1;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(BOOL)arg2 generationWindow:(id)arg3;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (BOOL)_moreThan:(long long)arg1 messagesExistWithMessageIDHeaderHash:(id)arg2;
- (id)_filterMessages:(id)arg1 potentiallyMatchingMessages:(id *)arg2;
- (void)_processChangedMessages:(id)arg1 changeKey:(id)arg2 generationWindow:(id)arg3;
- (void)_prepareForChangeWithMessages:(id)arg1 changeKey:(id)arg2;
- (id)_originalMessagesKeyForKey:(id)arg1;
- (void)didSyncMailbox:(id)arg1;
- (void)willSyncMailbox:(id)arg1;
- (void)_notifyObserverWithLogMessage:(id)arg1;
- (void)_decrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3;
- (void)_incrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3;
- (void)_fireCountCalculation;
- (void)_scheduleCountCalculation;
- (void)cancel;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

