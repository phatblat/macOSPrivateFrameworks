//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet, NSSet, NSString, _NSCollectionPreferredSize;

@protocol _NSCollectionPreferredSizes <NSObject>
@property(readonly, nonatomic) NSSet *elementKinds;
@property(readonly, nonatomic) NSIndexSet *indexes;
- (id <_NSCollectionPreferredSizes>)preferredSizesApplyingFrameOffset:(long long)arg1 supplementaryBaseOffsets:(id <_NSCollectionLayoutAuxiliaryOffsets>)arg2;
- (BOOL)containsSupplementaryOffsets:(id <_NSCollectionLayoutAuxiliaryOffsets>)arg1;
- (id <_NSCollectionPreferredSizes>)objectForKeyedSubscript:(NSString *)arg1;
- (_NSCollectionPreferredSize *)objectAtIndexedSubscript:(long long)arg1;
- (BOOL)hasSizes;
@end
