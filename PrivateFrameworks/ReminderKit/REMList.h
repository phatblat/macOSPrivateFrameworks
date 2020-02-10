//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "REMDAChangeTrackableFetchableModel.h"
#import "REMDAChangedModelObjectResult.h"
#import "REMExternalSyncMetadataProviding.h"
#import "REMObjectIDProviding.h"
#import "_REMDAChangeTrackableModel.h"

@class NSArray, NSData, NSDate, NSDictionary, NSOrderedSet, NSSet, NSString, REMAccount, REMColor, REMListAppearanceContext, REMListCalDAVNotificationContext, REMListShareeContext, REMListStorage, REMListSublistContext, REMObjectID, REMResolutionTokenMap, REMStore;

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding>
{
    REMStore *_store;
    REMListStorage *_storage;
    REMAccount *_account;
    REMList *_parentList;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)isSharedWithShareeCount:(unsigned long long)arg1 sharingStatus:(long long)arg2;
+ (id)localAccountDefaultListID;
+ (id)siriFoundInAppsListID;
+ (id)fetchRequestWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;
+ (BOOL)rem_DA_supportsLazyDelete;
+ (BOOL)rem_DA_supportsFetching;
@property(retain, nonatomic) REMList *parentList; // @synthesize parentList=_parentList;
@property(readonly, nonatomic) REMAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) REMListStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) REMStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg1;
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)sharingStatusText;
- (id)formattedSharedOwnerName;
- (id)fetchRemindersAndSubtasksWithError:(id *)arg1;
- (id)fetchRemindersWithError:(id *)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL isSharedToMe;
@property(readonly, nonatomic) BOOL isOwnedByMe;
@property(readonly, nonatomic) BOOL isShared;
@property(readonly, nonatomic) BOOL canBeIncludedInGroup;
@property(readonly, nonatomic) BOOL canBeShared;
- (id)ekColor;
@property(readonly, nonatomic) NSOrderedSet *reminderIDsOrdering;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) REMListShareeContext *shareeContext;
@property(readonly, nonatomic) REMListCalDAVNotificationContext *calDAVNotificationContext;
@property(readonly, nonatomic) REMListSublistContext *sublistContext;
@property(readonly, nonatomic) REMListAppearanceContext *appearanceContext;
- (id)initWithStore:(id)arg1 account:(id)arg2 storage:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) REMObjectID *accountID; // @dynamic accountID;
@property(readonly, nonatomic) NSString *badgeEmblem; // @dynamic badgeEmblem;
@property(readonly, nonatomic) NSArray *calDAVNotifications; // @dynamic calDAVNotifications;
@property(readonly, nonatomic) REMColor *color; // @dynamic color;
@property(readonly, nonatomic) NSDictionary *daBulkRequests; // @dynamic daBulkRequests;
@property(readonly, nonatomic) long long daDisplayOrder; // @dynamic daDisplayOrder;
@property(readonly, nonatomic) NSString *daExternalIdentificationTag; // @dynamic daExternalIdentificationTag;
@property(readonly, nonatomic) BOOL daIsEventOnlyContainer; // @dynamic daIsEventOnlyContainer;
@property(readonly, nonatomic) BOOL daIsImmutable; // @dynamic daIsImmutable;
@property(readonly, nonatomic) BOOL daIsNotificationsCollection; // @dynamic daIsNotificationsCollection;
@property(readonly, nonatomic) BOOL daIsReadOnly; // @dynamic daIsReadOnly;
@property(readonly, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(readonly, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, nonatomic) NSString *displayName; // @dynamic displayName;
@property(readonly, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(readonly, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly, nonatomic) BOOL isGroup; // @dynamic isGroup;
@property(nonatomic) BOOL isPlaceholder; // @dynamic isPlaceholder;
@property(readonly, copy, nonatomic) NSDate *lastUserAccessDate; // @dynamic lastUserAccessDate;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) REMObjectID *objectID; // @dynamic objectID;
@property(readonly, nonatomic) REMObjectID *parentAccountID; // @dynamic parentAccountID;
@property(readonly, nonatomic) REMObjectID *parentListID; // @dynamic parentListID;
@property(readonly, nonatomic) NSData *reminderIDsMergeableOrderingData; // @dynamic reminderIDsMergeableOrderingData;
@property(readonly, nonatomic) NSSet *reminderIDsToUndelete; // @dynamic reminderIDsToUndelete;
@property(readonly, nonatomic) BOOL remindersICSDisplayOrderChanged; // @dynamic remindersICSDisplayOrderChanged;
@property(readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // @dynamic resolutionTokenMap;
@property(readonly, nonatomic) NSString *sharedOwnerAddress; // @dynamic sharedOwnerAddress;
@property(readonly, nonatomic) REMObjectID *sharedOwnerID; // @dynamic sharedOwnerID;
@property(readonly, nonatomic) NSString *sharedOwnerName; // @dynamic sharedOwnerName;
@property(readonly, nonatomic) NSArray *sharees; // @dynamic sharees;
@property(readonly, nonatomic) long long sharingStatus; // @dynamic sharingStatus;
@property(readonly, nonatomic) BOOL showingLargeAttachments; // @dynamic showingLargeAttachments;
@property(readonly) Class superclass;

@end
