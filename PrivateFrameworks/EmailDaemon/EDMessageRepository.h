//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDAccountChangeHookResponder.h"
#import "EDThreadQueryHandlerDelegate.h"
#import "EFLoggable.h"
#import "EMMessageRepositoryInterface.h"

@class EDConversationPersistence, EDFetchController, EDMailboxPersistence, EDMailboxPredictionController, EDMessageChangeManager, EDMessagePersistence, EDPersistenceHookRegistry, EDThreadPersistence, EDVIPManager, NSConditionLock, NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface EDMessageRepository : NSObject <EDAccountChangeHookResponder, EDThreadQueryHandlerDelegate, EMMessageRepositoryInterface, EFLoggable>
{
    EDMailboxPredictionController *_mailboxPredictionController;
    struct os_unfair_lock_s _mailboxPredictionControllerLock;
    struct os_unfair_lock_s _handlersLock;
    NSMutableDictionary *_queryHandlers;
    NSMutableDictionary *_threadQueryHandlers;
    NSHashTable *_handlerTokens;
    EDPersistenceHookRegistry *_hookRegistry;
    EDMessagePersistence *_messagePersistence;
    EDConversationPersistence *_conversationPersistence;
    EDThreadPersistence *_threadPersistence;
    EDMessageChangeManager *_messageChangeManager;
    NSConditionLock *_performQueryOnSerializationQueue;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    EDMailboxPersistence *_mailboxPersistence;
    id <EMUserProfileProvider> _userProfileProvider;
    EDVIPManager *_vipManager;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDFetchController *_fetchController;
}

+ (id)signpostLog;
+ (id)log;
@property(readonly, nonatomic) EDFetchController *fetchController; // @synthesize fetchController=_fetchController;
@property(readonly, nonatomic) id <EDRemoteSearchProvider> remoteSearchProvider; // @synthesize remoteSearchProvider=_remoteSearchProvider;
@property(readonly, nonatomic) EDVIPManager *vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) id <EMUserProfileProvider> userProfileProvider; // @synthesize userProfileProvider=_userProfileProvider;
@property(readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serializationQueue; // @synthesize serializationQueue=_serializationQueue;
@property(readonly, nonatomic) NSConditionLock *performQueryOnSerializationQueue; // @synthesize performQueryOnSerializationQueue=_performQueryOnSerializationQueue;
@property(retain, nonatomic) EDMessageChangeManager *messageChangeManager; // @synthesize messageChangeManager=_messageChangeManager;
@property(retain, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property(readonly, nonatomic) EDConversationPersistence *conversationPersistence; // @synthesize conversationPersistence=_conversationPersistence;
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) EDPersistenceHookRegistry *hookRegistry; // @synthesize hookRegistry=_hookRegistry;
@property(retain, nonatomic) NSHashTable *handlerTokens; // @synthesize handlerTokens=_handlerTokens;
@property(retain, nonatomic) NSMutableDictionary *threadQueryHandlers; // @synthesize threadQueryHandlers=_threadQueryHandlers;
@property(retain, nonatomic) NSMutableDictionary *queryHandlers; // @synthesize queryHandlers=_queryHandlers;
- (void).cxx_destruct;
- (void)_resetUpdateThrottlersWithLogMessage:(id)arg1;
- (void)loadOlderMessagesForMailboxes:(id)arg1;
- (id)mailboxPredictionController;
- (void)predictMailboxForMovingMessages:(id)arg1 withObserver:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getCachedMetadataJSONForKey:(id)arg1 messageID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCachedMetadataJSON:(id)arg1 forKey:(id)arg2 messageID:(id)arg3;
- (void)resetPrecomputedThreadScopesForMailboxScope:(id)arg1;
- (id)requestRepresentationForMessageWithID:(id)arg1 requestID:(unsigned long long)arg2 options:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_persistedMessagesForObjectIDs:(id)arg1;
- (id)_persistedMessagesForMessageChangeAction:(id)arg1;
- (void)_performMessageConversationFlagChangeAction:(id)arg1;
- (id)_performUndoAction:(id)arg1;
- (id)_undoActionsForMovedMessages:(id)arg1;
- (void)_performMessageTransferAllActionToSpecialMailbox:(id)arg1;
- (id)_performMessageTransferActionToSpecialMailbox:(id)arg1 returnUndoAction:(BOOL)arg2;
- (void)_performMessageTransferAllAction:(id)arg1;
- (id)_performMessageTransferAction:(id)arg1 returnUndoAction:(BOOL)arg2;
- (id)_changeFlagsForPersistedMessages:(id)arg1 flagChange:(id)arg2 returnUndoAction:(BOOL)arg3;
- (void)_performMessageDeleteAction:(id)arg1;
- (void)_performMessageDeleteAllAction:(id)arg1;
- (void)_performMessageFlagChangeAllAction:(id)arg1;
- (id)_performMessageFlagChangeAction:(id)arg1 returnUndoAction:(BOOL)arg2;
- (void)performMessageChangeAction:(id)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)messageListItemsForObjectIDs:(id)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(id)arg3 loadSummaryForAdditionalObjectIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_enumerateThreadsByThreadObjectIDsByScope:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_partitionObjectIDs:(id)arg1;
- (void)cancelAllHandlers;
- (void)startCountingQuery:(id)arg1 includingServerCountsForMailboxScope:(id)arg2 withObserver:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_triggerMigrationWithThreadScopesMatcher:(CDUnknownBlockType)arg1;
- (void)threadQueryHandlerStateDidChange:(id)arg1;
- (void)_triggerMigrationForThreadScopes:(id)arg1;
- (void)accountBecameInactive:(id)arg1;
- (void)accountBecameActive:(id)arg1;
- (void)_performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performQuery:(id)arg1 withObserver:(id)arg2 observationIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performCountQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performQuery:(id)arg1 limit:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)test_tearDown;
- (void)dealloc;
- (id)initWithMessagePersistence:(id)arg1 conversationPersistence:(id)arg2 threadPersistence:(id)arg3 messageChangeManager:(id)arg4 hookRegistry:(id)arg5 mailboxPersistence:(id)arg6 remoteSearchProvider:(id)arg7 userProfileProvider:(id)arg8 vipManager:(id)arg9 fetchController:(id)arg10;
- (unsigned long long)signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

