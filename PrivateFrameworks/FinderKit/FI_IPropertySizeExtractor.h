//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyValueExtractor.h>

__attribute__((visibility("hidden")))
@interface FI_IPropertySizeExtractor : FI_IPropertyValueExtractor
{
    struct TFENodeVector _nodesToSize;
    struct map<TFENode, TNSRef<NSMutableDictionary, void>, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<NSMutableDictionary, void>>>> _nodesAndSizeMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)flush;
- (_Bool)updateNeededWithUpdateList:(const struct TFENodeUpdateList *)arg1;
- (_Bool)updateNeededWithChangedMap:(const struct TCoalescedNodesChangedMap *)arg1;
- (id)value;
- (_Bool)isWaitingForPendingNode:(const struct TFENode *)arg1;
- (_Bool)isWaitingForPendingNodes;
- (long long)sumValueForProperty:(unsigned int)arg1;
- (long long)valueForProperty:(unsigned int)arg1 ofNode:(const struct TFENode *)arg2;
- (void)setValue:(long long)arg1 forProperty:(unsigned int)arg2 ofNode:(const struct TFENode *)arg3;
- (id)computeValue;
- (int)extractValueFromNode:(const struct TFENode *)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
-     // Error parsing type: v32@0:8r^{TFENodeVector=^{TFENode}^{TFENode}{__compressed_pair<TFENode *, std::__1::allocator<TFENode> >=^{TFENode}}}16r^{atomic<bool>=AB}24, name: prefetchValueOnSecondaryThread:cancelled:
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)init;

@end

