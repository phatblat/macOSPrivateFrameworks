//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MiroAutoEditController, MiroAutoEditLogger, MiroAutoEditMultiUpController, MiroAutoEditTransitionController, MiroMemory, NSMutableArray, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditProjectPolish : NSObject
{
    Project *_project;
    MiroMemory *_activeMemory;
    NSMutableArray *_layoutClips;
    MiroAutoEditTransitionController *_transitionsController;
    MiroAutoEditMultiUpController *_multiController;
    MiroAutoEditController *_editController;
    MiroAutoEditLogger *_logger;
    NSMutableArray *_conversionNeeded;
}

@property(retain, nonatomic) NSMutableArray *conversionNeeded; // @synthesize conversionNeeded=_conversionNeeded;
@property(retain, nonatomic) MiroAutoEditLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) MiroAutoEditController *editController; // @synthesize editController=_editController;
@property(retain, nonatomic) MiroAutoEditMultiUpController *multiController; // @synthesize multiController=_multiController;
@property(retain, nonatomic) MiroAutoEditTransitionController *transitionsController; // @synthesize transitionsController=_transitionsController;
@property(retain, nonatomic) NSMutableArray *layoutClips; // @synthesize layoutClips=_layoutClips;
@property(nonatomic) MiroMemory *activeMemory; // @synthesize activeMemory=_activeMemory;
@property(retain, nonatomic) Project *project; // @synthesize project=_project;
- (void).cxx_destruct;
- (BOOL)extremeCropAllowed;
- (void)_updateSpeedRampsForClip:(id)arg1 beginningRampDurationSeconds:(double)arg2 endingRampDurationSeconds:(double)arg3;
- (void)adjustSlowMotionSpeedRamps;
- (unsigned long long)allowedBurstStylesFromBlueprint:(id)arg1;
- (void)applyBurstEffect;
- (void)removeIrisStylesFromFirstThreeClips;
- (void)applyIrisEffect;
- (void)batchConvertCompoundClipsToKenBurnsClips;
- (void)convertSpecialClipTypeToKenBurnsClip:(id)arg1;
- (void)adjustVideoPositioningBasedOnMetadata;
- (void)setVideoScaleFactorXPostitionFor:(id)arg1 boundingRect:(struct CGRect)arg2;
- (float)sideScaleOffsetForScaleFactor:(float)arg1;
- (void)setVideoScaleFactorYPostitionFor:(id)arg1 boundingRect:(struct CGRect)arg2;
- (id)videoFramingRangesFor:(id)arg1;
- (void)applyAutomaticThemeTitleToClip:(id)arg1 forPoster:(BOOL)arg2;
- (void)applyTitleToFirstClip;
- (BOOL)isPortraitSquareVideo:(id)arg1;
- (id)_everyTitleDEBUG;
- (void)cleanup;
- (void)applyClipPolish;
- (void)applyTransitions;
- (void)createTransitionControllerAndPrepare;
- (void)applyAudioPolish;
- (void)applyMultiUpTreatments;
- (void)clearAllStandardClipEffects;
- (BOOL)multiUpSupportedForAspect:(int)arg1;
- (void)createLayoutClips;
- (BOOL)clipIsViableZoomToPersonCandidate:(id)arg1;
- (void)polishProject;

@end

