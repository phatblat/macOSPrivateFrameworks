//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer;

@protocol PXMutableImageLayerModulator <NSObject>
@property(nonatomic) BOOL displayingVideoComplement;
@property(retain, nonatomic) CALayer *layer;
- (void)removeFilterFromUnownedLayer:(CALayer *)arg1;
- (void)animateChangesWithDuration:(double)arg1;
@end
