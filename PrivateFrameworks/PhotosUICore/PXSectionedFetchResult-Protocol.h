//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexSet;

@protocol PXSectionedFetchResult <NSObject>
@property(readonly, nonatomic) long long count;
- (BOOL)containsObject:(id <NSObject><NSCopying>)arg1;
- (NSArray *)objectsAtIndexes:(NSIndexSet *)arg1;
- (id <NSObject><NSCopying>)objectAtIndex:(unsigned long long)arg1;
@end

