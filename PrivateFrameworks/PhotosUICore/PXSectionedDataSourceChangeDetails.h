//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXSectionedLayoutDataSourceChangeDetails.h"

@class NSDictionary, NSIndexSet, NSNumber, NSString, PXArrayChangeDetails;

@interface PXSectionedDataSourceChangeDetails : NSObject <PXSectionedLayoutDataSourceChangeDetails>
{
    NSDictionary *_itemChangeDetailsBySection;
    NSDictionary *_itemsWithSubitemChangesBySection;
    NSDictionary *_subitemChangeDetailsByItemBySection;
    NSNumber *_hasAnyInsertionsRemovalsOrMovesCache;
    unsigned long long _fromDataSourceIdentifier;
    unsigned long long _toDataSourceIdentifier;
    PXArrayChangeDetails *_sectionChanges;
    NSIndexSet *_sectionsWithItemChanges;
}

+ (void)debug_assertValidChangeDetails:(id)arg1 fromDataSource:(id)arg2 toDataSource:(id)arg3;
+ (id)changeDetailsWithNoChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
+ (id)changeDetailsWithoutIncrementalChangesFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2;
+ (BOOL)changesHaveAnyInsertionsRemovalsOrMoves:(id)arg1;
+ (id)indexPathSetAfterRevertingChanges:(id)arg1 fromIndexPathSet:(id)arg2 hasIncrementalChanges:(out char *)arg3;
+ (id)indexPathSetAfterApplyingChanges:(id)arg1 toIndexPathSet:(id)arg2 hasIncrementalChanges:(out char *)arg3;
+ (struct PXSimpleIndexPath)indexPathAfterRevertingChanges:(id)arg1 fromIndexPath:(struct PXSimpleIndexPath)arg2 hasIncrementalChanges:(out char *)arg3 objectChanged:(out char *)arg4;
+ (struct PXSimpleIndexPath)indexPathAfterApplyingChanges:(id)arg1 toIndexPath:(struct PXSimpleIndexPath)arg2 hasIncrementalChanges:(out char *)arg3 objectChanged:(out char *)arg4;
@property(readonly, nonatomic) NSIndexSet *sectionsWithItemChanges; // @synthesize sectionsWithItemChanges=_sectionsWithItemChanges;
@property(readonly, nonatomic) PXArrayChangeDetails *sectionChanges; // @synthesize sectionChanges=_sectionChanges;
@property(readonly, nonatomic) unsigned long long toDataSourceIdentifier; // @synthesize toDataSourceIdentifier=_toDataSourceIdentifier;
@property(readonly, nonatomic) unsigned long long fromDataSourceIdentifier; // @synthesize fromDataSourceIdentifier=_fromDataSourceIdentifier;
- (void).cxx_destruct;
- (id)changedItemsInSection:(long long)arg1;
- (id)insertedItemsInSection:(long long)arg1;
- (id)deletedItemsInSection:(long long)arg1;
@property(readonly, copy) NSString *description;
- (id)indexPathSetAfterRevertingChangesFromIndexPathSet:(id)arg1 hasIncrementalChanges:(out char *)arg2;
- (id)indexPathSetAfterApplyingChangesToIndexPathSet:(id)arg1 hasIncrementalChanges:(out char *)arg2;
- (struct PXSimpleIndexPath)indexPathAfterRevertingChangesFromIndexPath:(struct PXSimpleIndexPath)arg1 hasIncrementalChanges:(out char *)arg2 objectChanged:(out char *)arg3;
- (struct PXSimpleIndexPath)indexPathAfterApplyingChangesToIndexPath:(struct PXSimpleIndexPath)arg1 hasIncrementalChanges:(out char *)arg2 objectChanged:(out char *)arg3;
@property(readonly, nonatomic) BOOL hasAnyInsertionsRemovalsOrMoves;
- (id)subitemChangesInItem:(long long)arg1 section:(long long)arg2;
- (id)itemsWithSubitemChangesInSection:(long long)arg1;
- (id)itemChangesInSection:(long long)arg1;
- (id)initWithFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 sectionChanges:(id)arg3 itemChangeDetailsBySection:(id)arg4 subitemChangeDetailsByItemBySection:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

