//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@interface NUAbstractScaleNode : NURenderNode
{
}

- (id)_scaleImage:(id)arg1 by:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
@property(readonly, nonatomic) NURenderNode *inputNode;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end
