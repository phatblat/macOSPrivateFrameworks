//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet;

@protocol PLHighlightItemModelReader <NSObject>
- (NSArray *)fetchParentHighlightItemsForHighlightItems:(id <NSFastEnumeration>)arg1;
- (NSArray *)fetchChildHighlightItemsForHighlightItem:(id <PLHighlightItem>)arg1;
- (NSArray *)fetchNeighborHighlightItemsForHighlightItems:(NSSet *)arg1;
@end
