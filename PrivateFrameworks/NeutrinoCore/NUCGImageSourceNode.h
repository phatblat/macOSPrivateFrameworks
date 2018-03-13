//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface NUCGImageSourceNode : NUSourceNode
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loaded;
    NSURL *_URL;
    NSString *_UTI;
    struct CGImageSource *_imageSource;
    NSDictionary *_imageProperties;
    long long _orientation;
    struct CGColorSpace *_colorSpace;
    long long _alphaInfo;
    long long _componentInfo;
    NSArray *_depthImagesProperties;
    CDStruct_d58201db _size;
}

@property(retain) NSArray *depthImagesProperties; // @synthesize depthImagesProperties=_depthImagesProperties;
@property long long componentInfo; // @synthesize componentInfo=_componentInfo;
@property long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property(retain, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property long long orientation; // @synthesize orientation=_orientation;
@property CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(retain, nonatomic) NSDictionary *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(retain, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property BOOL loaded; // @synthesize loaded=_loaded;
@property(readonly) NSString *UTI; // @synthesize UTI=_UTI;
@property(readonly) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImage:(out id *)arg1;
- (id)_finalizeSourceOptions:(id)arg1 subsampleFactor:(long long)arg2;
- (void)_addDefaultFinalizedSourceOptions:(id)arg1;
- (CDStruct_912cb5d2)pixelSize;
- (BOOL)load:(out id *)arg1;
- (BOOL)_load:(out id *)arg1;
- (BOOL)_setDepthInformationFromProperties:(id)arg1 error:(out id *)arg2;
- (BOOL)_setGeometryFromProperties:(id)arg1 error:(out id *)arg2;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (id)resolvedDepthNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (BOOL)pipelineStateIsForDepthImage:(id)arg1;
- (id)depthImagePropertiesForDepthType:(long long)arg1;
- (BOOL)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)initWithURL:(id)arg1 UTI:(id)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1 identifier:(id)arg2;
- (void)_init;

@end

