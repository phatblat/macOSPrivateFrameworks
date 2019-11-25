//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface EFMutableInt64Set : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    long long *_storage;
}

+ (id)indexSetWithIndexesInRange:(struct _EFUInt64Range)arg1;
+ (id)indexSet;
- (void)intersectIndexes:(id)arg1;
- (id)commaSeparatedString;
- (id)description;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (long long)indexGreaterThanIndex:(long long)arg1;
- (unsigned long long)getIndexes:(long long *)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _EFUInt64Range *)arg3;
- (long long)lastIndex;
- (long long)firstIndex;
- (unsigned long long)count;
- (BOOL)containsIndex:(long long)arg1;
- (void)removeAllIndexes;
- (void)removeIndexes:(id)arg1;
- (void)removeIndex:(long long)arg1;
- (void)addIndexes:(id)arg1;
- (void)addIndex:(long long)arg1;
- (long long)_insertionPositionOfIndex:(long long)arg1;
- (long long)_positionOfIndex:(long long)arg1;
- (void)_garbageCollectStorageIfNecessary;
- (void)_incrementStorageIfNecessaryForCount:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

