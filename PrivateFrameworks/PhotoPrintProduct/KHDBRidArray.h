//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface KHDBRidArray : NSObject <NSCopying, NSCoding>
{
    unsigned long long m_startOffset;
    unsigned int m_ridCount;
    unsigned int m_array[32];
}

- (void)appendToSetOfNumbers:(id)arg1;
- (void)appendToArrayOfNumbers:(id)arg1;
- (void)appendToIndexSet:(id)arg1;
- (unsigned long long)_ridFromAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2;
- (BOOL)lastRid:(unsigned long long *)arg1;
- (BOOL)nextRid:(unsigned long long *)arg1 afterRid:(unsigned long long)arg2;
- (BOOL)firstRid:(unsigned long long *)arg1;
- (unsigned long long)countRidsNow;
- (unsigned long long)count;
- (void)diffRids:(id)arg1;
- (void)orRids:(id)arg1;
- (BOOL)isSubsetOf:(id)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (void)andRids:(id)arg1;
- (BOOL)isSet:(unsigned long long)arg1;
- (void)clearRange:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (BOOL)clearRid:(unsigned long long)arg1;
- (BOOL)setRid:(unsigned long long)arg1;
- (long long)rangeCompare:(unsigned long long)arg1;
- (BOOL)inRange:(unsigned long long)arg1;
- (BOOL)isEmpty;
- (void)empty;
- (unsigned long long)end;
- (unsigned long long)start;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)appendToData:(id)arg1;
- (id)initWithBytes:(const char **)arg1;
- (void)_setAllRids;
- (id)initWithOffset:(unsigned long long)arg1;
- (id)init;

@end
