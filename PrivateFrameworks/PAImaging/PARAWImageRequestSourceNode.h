//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NURAWImageSourceNode.h"

@class PAImageRequestCacheHint;

@interface PARAWImageRequestSourceNode : NURAWImageSourceNode
{
    PAImageRequestCacheHint *_cacheHint;
}

@property(retain) PAImageRequestCacheHint *cacheHint; // @synthesize cacheHint=_cacheHint;
- (void).cxx_destruct;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateRawImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (BOOL)_load:(out id *)arg1;

@end

