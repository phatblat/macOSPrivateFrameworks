//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REMConflictResolving.h"
#import "REMExternalSyncMetadataWritableProviding.h"
#import "REMSaveRequestTrackedValue.h"

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMAccount, REMAccountCapabilities, REMChangedKeysObserver, REMColor, REMListAppearanceContextChangeItem, REMListCalDAVNotificationContextChangeItem, REMListShareeContextChangeItem, REMListStorage, REMListSublistContextChangeItem, REMObjectID, REMResolutionTokenMap, REMSaveRequest;

@interface REMListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding>
{
    REMSaveRequest *_saveRequest;
    REMListStorage *_storage;
    REMChangedKeysObserver *_changedKeysObserver;
    REMAccount *_parentAccount;
}

+ (void)initialize;
@property(readonly, nonatomic) REMAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
@property(retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // @synthesize changedKeysObserver=_changedKeysObserver;
@property(readonly, copy, nonatomic) REMListStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMSaveRequest *saveRequest; // @synthesize saveRequest=_saveRequest;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL canBeIncludedInGroup;
@property(readonly, nonatomic) BOOL isSharedToMe;
- (id)resolutionTokenKeyForChangedKey:(id)arg1;
- (void)_testingOnly_setReminderIDsMergeableOrder:(id)arg1;
- (void)_editReminderIDsOrderingUsingBlock:(CDUnknownBlockType)arg1;
- (void)_lowLevelAddReminderChangeItemToOrdering:(id)arg1 atIndexOfSibling:(id)arg2 isAfter:(BOOL)arg3 withParent:(id)arg4;
- (void)_reassignReminderChangeItem:(id)arg1 withParentReminderChangeItem:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(nonatomic) BOOL daIsNotificationsCollection; // @dynamic daIsNotificationsCollection;
@property(nonatomic) long long daDisplayOrder; // @dynamic daDisplayOrder;
- (id)ekColor;
- (id)changedKeys;
- (void)_lowLevelApplyUndoToOrdering:(id)arg1;
- (id)lowLevelRemoveReminderIDFromOrdering:(id)arg1;
- (void)lowLevelAddReminderIDToOrdering:(id)arg1 withParentReminderChangeItem:(id)arg2;
- (void)insertReminderChangeItem:(id)arg1 adjacentToReminderChangeItem:(id)arg2 isAfter:(BOOL)arg3 withParentReminderChangeItem:(id)arg4;
- (void)undeleteRemindersWithoutUndoWithIDs:(id)arg1 isCalDAV:(BOOL)arg2;
- (void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2;
- (void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2;
- (void)addReminderChangeItem:(id)arg1;
- (void)undeleteReminderWithID:(id)arg1 usingUndo:(id)arg2;
- (id)removeFromParentAllowingUndo;
- (id)removeFromAccountAllowingUndo;
- (void)removeFromParent;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) REMListShareeContextChangeItem *shareeContext;
@property(readonly, nonatomic) REMListCalDAVNotificationContextChangeItem *calDAVNotificationContext;
@property(readonly, nonatomic) REMListSublistContextChangeItem *sublistContext;
@property(readonly, nonatomic) REMListAppearanceContextChangeItem *appearanceContext;
- (id)shallowCopyWithSaveRequest:(id)arg1;
@property(readonly, nonatomic) REMAccountCapabilities *accountCapabilities; // @dynamic accountCapabilities;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoListSublistContextChangeItem:(id)arg3;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(BOOL)arg4;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3 isGroup:(BOOL)arg4 withParentList:(id)arg5;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 insertIntoAccountChangeItem:(id)arg3;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 observeInitialValues:(BOOL)arg4;
- (id)initWithSaveRequest:(id)arg1 storage:(id)arg2 accountCapabilities:(id)arg3 changedKeysObserver:(id)arg4;
- (void)copyListDataFrom:(id)arg1;

// Remaining properties
@property(retain, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property(retain, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(retain, nonatomic) NSArray *calDAVNotifications; // @dynamic calDAVNotifications;
@property(retain, nonatomic) REMColor *color; // @dynamic color;
@property(retain, nonatomic) NSDictionary *daBulkRequests; // @dynamic daBulkRequests;
@property(retain, nonatomic) NSString *daExternalIdentificationTag; // @dynamic daExternalIdentificationTag;
@property(nonatomic) BOOL daIsEventOnlyContainer; // @dynamic daIsEventOnlyContainer;
@property(nonatomic) BOOL daIsImmutable; // @dynamic daIsImmutable;
@property(nonatomic) BOOL daIsReadOnly; // @dynamic daIsReadOnly;
@property(copy, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(copy, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isGroup; // @dynamic isGroup;
@property(readonly, nonatomic) BOOL isPlaceholder; // @dynamic isPlaceholder;
@property(copy, nonatomic) NSDate *lastUserAccessDate; // @dynamic lastUserAccessDate;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(retain, nonatomic) REMObjectID *parentAccountID; // @dynamic parentAccountID;
@property(retain, nonatomic) REMObjectID *parentListID; // @dynamic parentListID;
@property(readonly, nonatomic) REMObjectID *remObjectID; // @dynamic remObjectID;
@property(readonly, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering; // @dynamic reminderIDsMergeableOrdering;
@property(readonly, nonatomic) NSData *reminderIDsMergeableOrderingData; // @dynamic reminderIDsMergeableOrderingData;
@property(retain, nonatomic) NSSet *reminderIDsToUndelete; // @dynamic reminderIDsToUndelete;
@property(nonatomic) BOOL remindersICSDisplayOrderChanged; // @dynamic remindersICSDisplayOrderChanged;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(copy, nonatomic) NSString *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(retain, nonatomic) REMObjectID *sharedOwnerID; // @dynamic sharedOwnerID;
@property(copy, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(retain, nonatomic) NSArray *sharees; // @dynamic sharees;
@property(nonatomic) long long sharingStatus; // @dynamic sharingStatus;
@property(nonatomic) BOOL showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(readonly) Class superclass;

@end

