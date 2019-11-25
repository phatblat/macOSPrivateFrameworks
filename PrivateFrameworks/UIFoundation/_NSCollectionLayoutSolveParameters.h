//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSCollectionLayoutSolveResult.h"

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;

@interface _NSCollectionLayoutSolveParameters : NSObject <_NSCollectionLayoutSolveResult>
{
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxiliaryDict;
    BOOL _isFullResolve;
    id <_NSCollectionLayoutAuxiliaryOffsets> _invalidatedSupplementaryOffsets;
}

+ (id)parametersForFullResolve;
@property(readonly, nonatomic) id <_NSCollectionLayoutAuxiliaryOffsets> invalidatedSupplementaryOffsets; // @synthesize invalidatedSupplementaryOffsets=_invalidatedSupplementaryOffsets;
- (void).cxx_destruct;
- (id)invalidatedAuxiliaryOffsets;
- (void)addAuxiliaryIndex:(long long)arg1 elementKind:(id)arg2;
- (void)addItemIndex:(long long)arg1;
- (id)indexesForInvalidatedAuxiliariesOfKind:(id)arg1;
@property(readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
@property(readonly, nonatomic) BOOL hasInvalidatedItems;
@property(readonly, nonatomic) BOOL isFullResolve;
@property(readonly, nonatomic) NSIndexSet *invalidatedIndexes;
- (id)init;
- (id)initWithInvalidatedIndexes:(id)arg1;
- (id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

