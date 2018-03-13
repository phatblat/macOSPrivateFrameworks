//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Slideshows/MRLayer.h>

@class MCContainerParallelizer, NSArray, NSMutableArray, NSMutableDictionary;

@interface MRLayerParallelizer : MRLayer
{
    MCContainerParallelizer *mContainer;
    NSMutableArray *mSublayers;
    NSMutableDictionary *mSublayersForPlugs;
    float mBackgroundColor[4];
    BOOL mNeedsToUpdateSublayersOrdering;
    BOOL mNeedsToUpdateBackgroundColor;
}

@property(readonly) NSArray *sublayers; // @synthesize sublayers=mSublayers;
- (id)_dumpLayerWithOptions:(unsigned long long)arg1;
- (id)_currentState;
- (double)phaseOutSublayerForKey:(id)arg1;
- (double)phaseInSublayerForKey:(id)arg1;
- (id)sublayerHitAtPoint:(struct CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(struct CGPoint *)arg3;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getStartTime:(double *)arg1 andDuration:(double *)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4;
- (id)currentSlideInfos;
- (id)currentSlideInfoForElement:(id)arg1;
- (void)setIsInInteractiveMode:(BOOL)arg1;
- (BOOL)isInInteractiveMode;
- (BOOL)hasSlides;
- (id)sublayerForPlugObjectID:(id)arg1 recursive:(BOOL)arg2;
- (void)removeSublayer:(id)arg1;
- (void)setSublayer:(id)arg1 forKey:(id)arg2;
- (id)sublayerForKey:(id)arg1;
- (BOOL)hasAudio;
- (void)setNeedsUpdateForPluggerOfSublayer:(id)arg1;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isInfinite;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)_isMadeOpaqueBySublayers;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)depreactivate:(BOOL)arg1;
- (void)deactivate;
- (void)preactivate;
- (void)setBackgroundColorRed:(float)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
@property const float *backgroundColor;
- (void)setDuration:(double)arg1;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)synchronizeTime;
- (BOOL)hasSomethingToRender;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (id)initWithParameters:(id)arg1;
- (id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3;
- (id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_setNeedsToRequestRebuildAudio:(BOOL)arg1;
- (void)_unobservePlugOnDepreactivate;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlug;
- (void)_observePlug;
- (void)_unobserveSublayerOnDepreactivate:(id)arg1;
- (void)_observeSublayerOnPreactivate:(id)arg1;
- (void)_unobserveSublayer:(id)arg1;
- (void)_observeSublayer:(id)arg1;
- (void)_deleteSublayer:(id)arg1;
- (id)_createSublayerForPlug:(id)arg1;
- (void)_updateSublayersOrdering;
- (void)_executeLayerCommandQueue;

@end

