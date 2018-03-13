//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDCNPersonAliasResolver, IMDMessageHistorySyncController, IMDMessageProcessingController, NSArray, NSCache, NSMutableDictionary, NSRecursiveLock;

@interface IMDChatRegistry : NSObject
{
    NSRecursiveLock *_chatsLock;
    NSMutableDictionary *_chats;
    BOOL _isLoading;
    BOOL _doneLoadingAfterMerge;
    NSCache *_allChatsByIDCache;
    NSMutableDictionary *_chatsByGroupID;
    IMDMessageProcessingController *_messageProcessingController;
    IMDMessageHistorySyncController *_messageHistorySyncController;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) IMDMessageHistorySyncController *messageHistorySyncController; // @synthesize messageHistorySyncController=_messageHistorySyncController;
@property(readonly, nonatomic) IMDMessageProcessingController *messageProcessingController; // @synthesize messageProcessingController=_messageProcessingController;
- (id)_existingiMessageChatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (BOOL)isBeingSetup;
- (void)clearPendingDeleteTable;
- (id)copyRecordIDsAndGUIDsPendingCloudKitDelete;
- (void)processMessageUsingCKRecord:(id)arg1;
- (id)_lookupChatUsingID:(id)arg1;
- (id)messagesToUploadToCloudKitWithLimit:(unsigned long long)arg1;
- (void)__removeChatFromGroupIDChatIndex:(id)arg1;
- (void)__addChatToGroupIDChatIndex:(id)arg1;
- (void)resetChatSyncStateForRecord:(id)arg1;
- (void)markDefferredChatsAsNeedingSync;
- (void)markChatAsDeferredForSyncingUsingCKRecord:(id)arg1;
- (void)updateChatUsingCKRecord:(id)arg1;
- (void)_markForksAsSyncedForChat:(id)arg1;
- (id)_existingChatForCKRecord:(id)arg1;
- (id)_existingChatWithOriginalGroupID:(id)arg1 onService:(id)arg2;
- (void)_insertChatUsingCKRecord:(id)arg1;
- (void)updateChatWithGUID:(id)arg1 serverChangeToken:(id)arg2 CKSystemPropertiesBlob:(id)arg3;
- (id)chatsToUploadToCloudKitWithLimit:(unsigned long long)arg1;
- (id)personCentricGroupedChatsDictionary;
- (id)groupChatsBasedOnIdentity;
- (void)startHandleIDPopulation;
- (void)_populateCNRecordIDForHandles:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_aliasToHandlesMap:(id)arg1;
- (id)_allHandles;
@property(readonly, nonatomic) IMDCNPersonAliasResolver *cnaliasResolver;
- (BOOL)repairDuplicateChatsIfNeeded;
- (BOOL)_mergeDuplicateGroupsIfNeeded;
- (struct NSArray *)_createGroupChatsArray;
- (id)_findLosingChatGUIDsInArrayOfChats:(struct NSArray *)arg1 withWinner:(id)arg2;
- (id)_findChatWinnerInDuplicateChatArray:(struct NSArray *)arg1;
- (struct NSArray *)findDuplicateChats:(struct NSArray *)arg1;
- (BOOL)_chat:(id)arg1 isDuplicateOfChat:(id)arg2;
- (BOOL)_updateDuplicateUnnamedGroupsWithNewGroupIDIfNeeded;
- (struct NSArray *)findDuplicateUnnamedGroups:(struct NSArray *)arg1;
- (void)_makeAllAttachmentsClassC;
- (void)systemDidUnlock;
- (void)systemDidLeaveFirstDataProtectionLock;
- (BOOL)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (BOOL)saveChats;
- (BOOL)_saveChats;
- (BOOL)loadChatsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_forceReloadChats:(BOOL)arg1;
- (id)_chatInfoForSaving;
- (id)_chatInfoInRange:(struct _NSRange)arg1;
- (id)_chatInfoForNumberOfChats:(long long)arg1;
- (id)_allChatInfo;
- (id)_chatInfoForConnection;
- (void)removeMessage:(id)arg1 fromChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2 deferSpotlightIndexing:(BOOL)arg3;
- (void)addMessage:(id)arg1 toChat:(id)arg2;
- (void)removeItem:(id)arg1 fromChat:(id)arg2;
- (void)addItem:(id)arg1 toChat:(id)arg2;
- (void)archiveChat:(id)arg1;
- (void)removeChat:(id)arg1;
- (void)addChat:(id)arg1 firstLoad:(BOOL)arg2;
- (void)addChat:(id)arg1;
- (void)updateGroupIDForChat:(id)arg1 newGroupID:(id)arg2;
- (void)updateStateForChat:(id)arg1 forcePost:(BOOL)arg2;
- (void)updateStateForChat:(id)arg1 hintMessage:(id)arg2;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(BOOL)arg4 hintMessage:(id)arg5;
- (BOOL)updateUnreadCountForChat:(id)arg1;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2;
- (id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)existingChatForRoom:(id)arg1 account:(id)arg2;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 displayName:(id)arg3 groupID:(id)arg4 style:(unsigned char)arg5;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatForID:(id)arg1 account:(id)arg2;
- (id)existingChatWithEngramID:(id)arg1;
- (id)existingChatWithIdentifier:(id)arg1 account:(id)arg2;
- (id)existingChatsWithGroupID:(id)arg1;
- (id)existingChatWithGUID:(id)arg1;
- (id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 displayName:(id)arg6 guid:(id)arg7;
- (id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
@property(readonly, nonatomic) NSArray *chats;
- (void)dealloc;
- (id)init;

@end

