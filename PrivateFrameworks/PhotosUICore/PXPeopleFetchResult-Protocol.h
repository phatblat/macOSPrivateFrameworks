//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSFastEnumeration.h"
#import "NSObject.h"

@class NSArray, NSIndexSet;

@protocol PXPeopleFetchResult <NSObject, NSFastEnumeration>
@property(readonly, nonatomic) long long count;
- (BOOL)containsObject:(id <PXPerson>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <PXPerson>)objectAtIndex:(unsigned long long)arg1;
@end

