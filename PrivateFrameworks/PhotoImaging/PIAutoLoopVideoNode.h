//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NURenderNode.h"

@interface PIAutoLoopVideoNode : NURenderNode
{
    int _loopStart;
    int _loopPeriod;
    int _fadeLength;
    CDStruct_1b6d18a9 _frameDuration;
}

+ (int)fadeLengthForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
+ (int)loopPeriodForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
+ (int)loopStartForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
+ (id)loopParamsForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) CDStruct_1b6d18a9 frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, nonatomic) int fadeLength; // @synthesize fadeLength=_fadeLength;
@property(readonly, nonatomic) int loopPeriod; // @synthesize loopPeriod=_loopPeriod;
@property(readonly, nonatomic) int loopStart; // @synthesize loopStart=_loopStart;
- (id)_evaluateAudioMix:(out id *)arg1;
- (BOOL)requiresAudioMix;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (BOOL)requiresVideoComposition;
- (id)_evaluateVideo:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 fadeStartTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 fadeDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 startTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 loopDuration;
@property(readonly, nonatomic) NURenderNode *input;
- (id)initWithInput:(id)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 trimRange:(CDStruct_5c5366e1)arg3 settings:(id)arg4;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

