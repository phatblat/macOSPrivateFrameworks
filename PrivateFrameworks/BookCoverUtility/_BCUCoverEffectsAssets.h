//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _BCUCoverEffectsAssets : NSObject
{
    struct CGImage *_spineNormalBlend;
    struct CGImage *_spineLinearBurnBlend;
    struct CGImage *_spineSoftLightBlend;
    struct CGImage *_edges;
    struct CGColor *_overlayColor;
}

@property(readonly, nonatomic) struct CGColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(readonly, nonatomic) struct CGImage *edges; // @synthesize edges=_edges;
@property(readonly, nonatomic) struct CGImage *spineSoftLightBlend; // @synthesize spineSoftLightBlend=_spineSoftLightBlend;
@property(readonly, nonatomic) struct CGImage *spineLinearBurnBlend; // @synthesize spineLinearBurnBlend=_spineLinearBurnBlend;
@property(readonly, nonatomic) struct CGImage *spineNormalBlend; // @synthesize spineNormalBlend=_spineNormalBlend;
- (id)initWithBundle:(id)arg1 rtl:(BOOL)arg2 night:(BOOL)arg3;

@end

