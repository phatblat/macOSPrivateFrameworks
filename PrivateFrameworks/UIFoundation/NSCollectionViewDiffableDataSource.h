//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCollectionViewDataSource.h"

@class NSString, __NSDiffableDataSource;

@interface NSCollectionViewDiffableDataSource : NSObject <NSCollectionViewDataSource>
{
    __NSDiffableDataSource *_impl;
}

@property(retain, nonatomic) __NSDiffableDataSource *impl; // @synthesize impl=_impl;
- (void).cxx_destruct;
- (BOOL)_isDiffableDataSource;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2;
- (id)snapshot;
@property(copy) CDUnknownBlockType supplementaryViewProvider;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 itemProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
