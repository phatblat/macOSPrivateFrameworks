//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXGLayoutContentSource.h"

@class NSIndexSet, PXGLayout;

@protocol PXGSelectionDecorationSource <PXGLayoutContentSource>
- (NSIndexSet *)selectedSpriteIndexesInLayout:(PXGLayout *)arg1;
- (long long)selectionDecorationStyleInLayout:(PXGLayout *)arg1;
@end

