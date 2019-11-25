//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import "ICNoteContainer.h"

@class CROrderedSet, ICAccount, ICCRDTIdentifierOrderedSetVersionedDocument, ICFolderCustomNoteSortType, NSArray, NSData, NSManagedObjectContext, NSString;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>
{
    BOOL _subFolderOrderMergeableDataDirty;
    ICCRDTIdentifierOrderedSetVersionedDocument *_subFolderIdentifiersOrderedSetDocument;
}

+ (id)keyPathsForValuesAffectingCloudAccount;
@property(nonatomic, getter=isSubFolderOrderMergeableDataDirty) BOOL subFolderOrderMergeableDataDirty; // @synthesize subFolderOrderMergeableDataDirty=_subFolderOrderMergeableDataDirty;
@property(retain, nonatomic) ICCRDTIdentifierOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument; // @synthesize subFolderIdentifiersOrderedSetDocument=_subFolderIdentifiersOrderedSetDocument;
- (void).cxx_destruct;
- (void)updateSubFolderMergeableDataChangeCount;
- (void)writeSubFolderMergeableData;
- (BOOL)mergeWithSubFolderMergeableData:(id)arg1;
- (void)saveSubFolderMergeableDataIfNeeded;
@property(readonly, nonatomic) CROrderedSet *subFolderIdentifiersOrderedSet;
- (void)willSave;
- (void)willRefresh:(BOOL)arg1;
- (void)willTurnIntoFault;
@property(retain, nonatomic) NSData *subFolderOrderMergeableData;
@property(readonly, nonatomic) NSArray *visibleSubFolders;
- (id)noteVisibilityTestingForSearchingAccount;
@property(readonly, nonatomic) BOOL isTrashFolder;
- (BOOL)isModernCustomFolder;
@property(readonly, nonatomic) BOOL supportsEditingNotes;
@property(readonly, nonatomic) NSString *containerIdentifier;
- (id)accountName;
- (id)cloudAccount;
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (id)detailForTableViewCell;
- (id)titleForTableViewCell;
- (id)titleForNavigationBar;
- (BOOL)noteIsVisible:(id)arg1;
- (unsigned long long)visibleNotesCount;
- (id)visibleNotes;
@property(readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property(readonly, nonatomic) BOOL isAllNotesContainer;
@property(readonly, nonatomic) BOOL canBeSharedViaICloud;
@property(readonly, nonatomic) BOOL isSharedViaICloud;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleNotes;
- (BOOL)supportsVisibilityTestingType:(long long)arg1;
- (id)cacheKey;

// Remaining properties
@property(retain, nonatomic) NSString *accountNameForAccountListSorting; // @dynamic accountNameForAccountListSorting;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL isHiddenNoteContainer; // @dynamic isHiddenNoteContainer;
@property(readonly) NSManagedObjectContext *managedObjectContext;
@property(retain, nonatomic) NSString *nestedTitleForSorting; // @dynamic nestedTitleForSorting;
@property(retain, nonatomic) ICAccount *owner; // @dynamic owner;
@property(nonatomic) int sortOrder; // @dynamic sortOrder;
@property(readonly) Class superclass;

@end

