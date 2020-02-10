//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface AKSparseMutableControllerArray : NSMutableArray
{
    NSMutableArray *_backendArray;
}

- (void).cxx_destruct;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObject:(id)arg1;
- (unsigned long long)count;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_backFillUntilCount:(unsigned long long)arg1;
- (void)addObject:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (BOOL)containsAnyObjects:(id)arg1;

@end
