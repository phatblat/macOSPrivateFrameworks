//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FI_TDesktopGridLayout;

@protocol TGridLayoutControllerDelegate <NSObject>
- (void)clearAllItemLocations;
- (vector_e1abc270)occupyGridSpots:(unsigned long long)arg1;
- (FI_TDesktopGridLayout *)gridLayoutForRect:(const struct CGRect *)arg1;
- (struct CGPoint)anchorForIndex:(unsigned long long)arg1 offset:(const struct CGPoint *)arg2;
- (unsigned long long)totalNumberOfGridSpots;
- (struct CGPoint)invalidAnchorPoint;

@optional
- (unsigned long long)nextMajorIndexFromIndex:(unsigned long long)arg1;
@end
