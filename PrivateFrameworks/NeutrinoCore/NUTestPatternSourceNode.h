//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@interface NUTestPatternSourceNode : NUSourceNode
{
    CDStruct_d58201db _size;
    long long _orientation;
    CDStruct_1e2b2e48 _scale;
}

- (BOOL)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (CDStruct_912cb5d2)pixelSize;
- (long long)sourceOrientation;
- (id)initWithSettings:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2 scale:(CDStruct_912cb5d2)arg3;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2;

@end

