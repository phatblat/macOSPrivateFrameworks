//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MRTransition.h>

@class MRCAMLBezierData;

@interface MRTransitionHyperGridWipe : MRTransition
{
    MRCAMLBezierData *mCurves[2];
}

- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isLoadedForTime:(double)arg1;
- (BOOL)controlsLayersTime;
- (void)_cleanup;
- (id)initWithTransitionID:(id)arg1;

@end

