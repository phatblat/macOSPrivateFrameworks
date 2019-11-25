//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXDataSection.h>

@class NSArray, NSDictionary, NSEnumerator, NSIndexSet;

@interface PXStackedDataSection : PXDataSection
{
    NSArray *_childDataSectionsStartIndexes;
    NSIndexSet *_nonEmptyChildDataSectionsStartIndexSet;
    NSDictionary *_nonEmptyChildDataSectionsIndexMap;
    NSEnumerator *_childDataSectionsEnumerator;
    id <NSFastEnumeration> _currentEnumerator;
    unsigned long long _enumerationMutations;
    unsigned long long *_currentEnumeratorMutationsPtr;
    long long _count;
    NSArray *_childDataSections;
}

+ (id)dataSectionForAssetsInCollections:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *childDataSections; // @synthesize childDataSections=_childDataSections;
- (long long)count;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)_nextEnumerator;
- (void)_resetEnumerationState:(CDStruct_70511ce9 *)arg1;
- (id)objectAtIndex:(long long)arg1;
- (long long)itemStartIndexForChildDataSourceAtIndex:(long long)arg1;
- (long long)indexOfChildDataSourceForObjectAtIndex:(long long)arg1 localIndex:(long long *)arg2;
- (id)initWithChildDataSections:(id)arg1 outlineObject:(id)arg2;

@end

