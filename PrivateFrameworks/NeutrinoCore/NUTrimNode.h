//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUTrimNode : NURenderNode
{
    CDStruct_e83c9415 _range;
}

+ (CDStruct_e83c9415)conformRange:(CDStruct_e83c9415)arg1 inRange:(CDStruct_e83c9415)arg2;
@property(readonly) CDStruct_e83c9415 range; // @synthesize range=_range;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 input:(id)arg2;

@end

