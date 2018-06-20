//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSError, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NURenderContext, NUSourceNode;

@interface NUCacheNode : NURenderNode
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NURenderContext *_renderContext;
    NUSourceNode *_sourceNode;
    NSError *_sourceError;
    long long _subsampleFactor;
    NSString *_cachedCacheIdentifier;
}

+ (void)clearCacheDirectory;
+ (long long)_maxCacheDirectorySize;
+ (void)_pruneCacheDirectory:(id)arg1 toSize:(long long)arg2;
+ (void)_ensureCacheDirectoryURL:(id)arg1;
+ (id)cacheDirectoryURL;
+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
+ (id)registry;
@property(retain) NSString *cachedCacheIdentifier; // @synthesize cachedCacheIdentifier=_cachedCacheIdentifier;
@property(readonly, nonatomic) long long subsampleFactor; // @synthesize subsampleFactor=_subsampleFactor;
- (void).cxx_destruct;
- (BOOL)requiresAudioMix;
- (BOOL)requiresVideoComposition;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (void)resolveSourceWithResponse:(struct NUResponse *)arg1;
- (BOOL)installTemporaryURL:(id)arg1 intoPersistentURL:(id)arg2 error:(out id *)arg3;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (id)persistentURL;
- (id)temporaryURLPrefix;
- (id)persistentURLPrefix;
@property(readonly, nonatomic) NSString *cacheIdentifier;
- (id)resolvedSourceNode:(out id *)arg1;
- (void)_resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (void)resolveWithSourceNode:(id)arg1 error:(id)arg2;
- (BOOL)isResolved;
- (id)evaluateRenderDependenciesWithRequest:(id)arg1 error:(out id *)arg2;
- (BOOL)tryLoadPersistentURL:(id)arg1 error:(out id *)arg2;
- (long long)sampleMode;
- (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (BOOL)isEqualToRenderNode:(id)arg1;
- (void)nu_updateDigest:(id)arg1;
- (unsigned long long)_hash;
@property(readonly, nonatomic) NURenderNode *inputNode;
- (id)descriptionSubClassHook;
- (id)initWithInput:(id)arg1 settings:(id)arg2 subsampleFactor:(long long)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

