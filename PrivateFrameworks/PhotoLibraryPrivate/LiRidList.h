//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiImmutableRidList.h>

@interface LiRidList : LiImmutableRidList
{
    unsigned long long _mutations;
    BOOL _isDirty;
}

+ (struct _NSRange)rangeOfNextRidBitsetAtOrAbove:(unsigned long long)arg1;
+ (struct _NSRange)rangeOfRidBitsetAt:(unsigned long long)arg1;
+ (id)listFromNumbers:(id)arg1;
+ (unsigned char)encodingObjectType;
@property BOOL isDirty; // @synthesize isDirty=_isDirty;
- (void)addRidBitSet:(const shared_ptr_4932a42e *)arg1;
- (unsigned long long *)countByEnumeratingMutationPtr;
- (id)extractBatch:(unsigned long long)arg1;
- (shared_ptr_4932a42e)extractLastRidBitset;
- (shared_ptr_4932a42e)extractFirstRidBitset;
- (void)setRidsUsingIndexSet:(id)arg1;
- (void)setRidsUsingList:(id)arg1;
- (void)diffNumbers:(id)arg1;
- (void)orNumbers:(id)arg1;
- (void)andNumbers:(id)arg1;
- (void)diffRids:(id)arg1;
- (void)orRids:(id)arg1;
- (void)andRids:(id)arg1;
- (void)clearRange:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)setRange:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (BOOL)clearRid:(unsigned long long)arg1;
- (BOOL)setRid:(unsigned long long)arg1;
- (void)empty;
- (BOOL)isImmutable;
- (shared_ptr_4932a42e)unshadowedBitSetAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

