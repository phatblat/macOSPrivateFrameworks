//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class AVAsset, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface NUVideoSourceNode : NUSourceNode
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loaded;
    NSURL *_URL;
    AVAsset *_asset;
    CDStruct_1b6d18a9 _duration;
    CDStruct_d58201db _size;
    CDStruct_996ac03c _cleanAperture;
    long long _orientation;
    NSArray *_metadata;
    NSDictionary *_colorProperties;
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
}

- (void).cxx_destruct;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_settingsForPipelineState:(id)arg1 ownedFrame:(BOOL)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (BOOL)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideo:(out id *)arg1;
@property(readonly) CDStruct_996ac03c cleanAperture;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
@property(readonly) CDStruct_1b6d18a9 duration;
- (id)asset:(out id *)arg1;
- (BOOL)load:(out id *)arg1;
- (BOOL)_load:(out id *)arg1;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id *)arg2;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2;

@end

