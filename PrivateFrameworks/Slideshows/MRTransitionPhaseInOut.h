//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MRTransition.h>

@interface MRTransitionPhaseInOut : MRTransition
{
}

- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)controlsLayersTime;
- (BOOL)isSplit;
- (BOOL)isInfinite;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)isNative3D;

@end
