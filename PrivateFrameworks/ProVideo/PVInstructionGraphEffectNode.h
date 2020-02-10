//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PVInstructionGraphNode.h>

@class PVEffect;

@interface PVInstructionGraphEffectNode : PVInstructionGraphNode
{
    struct map<unsigned int, PVInstructionGraphNode *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PVInstructionGraphNode *>>> _inputMap;
    BOOL _bypassOutOfRangeEffects;
    PVEffect *_effect;
}

+ (id)newEffectNodeToAddTitle:(id)arg1 effect:(id)arg2;
+ (id)newEffectNodeToOverlayInputs:(id)arg1 inputIDs:(id)arg2 effect:(id)arg3;
+ (id)newEffectNodeToTransitionFrom:(id)arg1 to:(id)arg2 effect:(id)arg3;
+ (id)newEffectNodeToFilterInput:(id)arg1 effect:(id)arg2;
@property(nonatomic) BOOL bypassOutOfRangeEffects; // @synthesize bypassOutOfRangeEffects=_bypassOutOfRangeEffects;
@property(retain, nonatomic) PVEffect *effect; // @synthesize effect=_effect;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDotTreeLinks:(HGRef_6bae45d3)arg1;
- (id)instructionGraphNodeDescription;
- (id)dotTreeLabel:(HGRef_6bae45d3)arg1;
- (struct PVIGHGNodeCacheKey)contextHGNodeCacheKeyAtTime:(CDStruct_1b6d18a9)arg1;
- (PCMatrix44Tmpl_93ed1289)pixelTransformForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (PCRect_3a266109)inputSizeForPVEffect:(id)arg1 igContext:(HGRef_6bae45d3)arg2;
- (HGRef_265f9e4c)internalHGNodeForTime:(CDStruct_1b6d18a9)arg1 trackInputs:(const PVInputHGNodeMap_cba5f928 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (void)unloadIGNode;
- (void)loadIGNode:(HGRef_6bae45d3)arg1 returnLoadedEffects:(id)arg2;
- (id)getAllSourceNodes;
- (id)requiredSourceTrackIDs;
- (void)setInputNode:(id)arg1 forInputID:(unsigned int)arg2;
- (id)init;

@end
