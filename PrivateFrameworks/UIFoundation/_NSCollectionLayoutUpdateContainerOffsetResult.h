//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSCollectionLayoutUpdateContainerOffsetResult.h"

@class NSMutableDictionary, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _NSCollectionLayoutUpdateContainerOffsetResult : NSObject <_NSCollectionLayoutUpdateContainerOffsetResult>
{
    NSMutableDictionary *_invalidatedSupplementaryIndexesDict;
}

- (void).cxx_destruct;
- (void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2;
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;
@property(readonly, nonatomic) NSSet *invalidatedAuxiliaryKinds;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

