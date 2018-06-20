//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BaseBoard/BSSqliteResultRow.h>

@class NSArray;

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow
{
    unsigned long long _count;
    NSArray *_frozenColumnNames;
    NSArray *_frozenObjects;
    NSArray *_frozenIntegers;
    NSArray *_frozenDoubles;
    NSArray *_frozenStrings;
    NSArray *_frozenDatas;
}

- (void).cxx_destruct;
- (unsigned long long)_indexForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (BOOL)isValid;
- (id)initWithResultRow:(id)arg1;
- (id)initWithStatement:(struct sqlite3_stmt *)arg1;

@end

