//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class NUCGAuxiliaryImageProperties, NUCGImageSourceNode;

@interface NUCGImageDepthSourceNode : NUSourceNode
{
    NUCGAuxiliaryImageProperties *_depthImageProperties;
    NUCGImageSourceNode *_sourceNode;
    BOOL _needsAspectRatioCorrection;
    struct CGAffineTransform _aspectTransform;
    CDStruct_d58201db _aspectMatchedPixelSize;
}

@property(retain) NUCGImageSourceNode *sourceNode; // @synthesize sourceNode=_sourceNode;
- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (BOOL)canPropagateOriginalDepthData;
- (id)_evaluateDepthData:(out id *)arg1;
- (long long)sourceOrientation;
- (CDStruct_912cb5d2)pixelSize;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)initWithSourceNode:(id)arg1 depthImageProperties:(id)arg2;
- (id)initWithSettings:(id)arg1;

@end

