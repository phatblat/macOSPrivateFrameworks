//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NURenderRequest.h"

@class NSArray, NSError, VNSaliencyImageObservation;

@interface PICompositionFinalizer : NURenderRequest
{
    unsigned long long _candidacy;
    NSError *_finalizerError;
    unsigned long long _performedActions;
    double _rollAngleDegrees;
    double _pitchAngleDegrees;
    double _yawAngleDegrees;
    NSArray *_keyframes;
    VNSaliencyImageObservation *_saliencyObservation;
    NSArray *_ANODSubjects;
    struct CGRect _reframeRect;
    CDStruct_996ac03c _stabCropRect;
}

+ (id)descriptionForCandidacy:(unsigned long long)arg1;
@property(copy, nonatomic) NSArray *ANODSubjects; // @synthesize ANODSubjects=_ANODSubjects;
@property(retain, nonatomic) VNSaliencyImageObservation *saliencyObservation; // @synthesize saliencyObservation=_saliencyObservation;
@property(nonatomic) CDStruct_996ac03c stabCropRect; // @synthesize stabCropRect=_stabCropRect;
@property(copy, nonatomic) NSArray *keyframes; // @synthesize keyframes=_keyframes;
@property(nonatomic) double yawAngleDegrees; // @synthesize yawAngleDegrees=_yawAngleDegrees;
@property(nonatomic) double pitchAngleDegrees; // @synthesize pitchAngleDegrees=_pitchAngleDegrees;
@property(nonatomic) double rollAngleDegrees; // @synthesize rollAngleDegrees=_rollAngleDegrees;
@property(nonatomic) struct CGRect reframeRect; // @synthesize reframeRect=_reframeRect;
@property(nonatomic) unsigned long long performedActions; // @synthesize performedActions=_performedActions;
@property(retain, nonatomic) NSError *finalizerError; // @synthesize finalizerError=_finalizerError;
@property(nonatomic) unsigned long long candidacy; // @synthesize candidacy=_candidacy;
- (void).cxx_destruct;
- (void)processPerspectiveResult:(id)arg1;
- (void)processHorizonResult:(id)arg1;
- (void)processVideoReframeResult:(id)arg1;
- (void)processStillReframeResult:(id)arg1;
- (void)performPerspectiveCorrectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)performHorizonCorrectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)performReframeWithCompletion:(CDUnknownBlockType)arg1;
- (void)markActionAsPerformed:(unsigned long long)arg1;
- (BOOL)hasPerformedAction:(unsigned long long)arg1;
- (BOOL)shouldPerformAction:(unsigned long long)arg1;
- (void)performNextActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)initWithComposition:(id)arg1;

@end
