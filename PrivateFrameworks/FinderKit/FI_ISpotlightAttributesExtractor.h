//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyDictionaryExtractor.h>

__attribute__((visibility("hidden")))
@interface FI_ISpotlightAttributesExtractor : FI_IPropertyDictionaryExtractor
{
    struct TNSRef<NSArray<NSString *>, void> _attributeNames;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)mergeAttributes:(id)arg1 withNewAttributes:(id)arg2 forNode:(const struct TFENode *)arg3;
- (id)whichAttributeValues;
- (void)flush;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (id)attributeNamesForNodes:(const struct TFENodeVector *)arg1;
-     // Error parsing type: v32@0:8r^{TFENodeVector=^{TFENode}^{TFENode}{__compressed_pair<TFENode *, std::__1::allocator<TFENode> >=^{TFENode}}}16r^{atomic<bool>=AB}24, name: prefetchValueOnSecondaryThread:cancelled:
- (id)attributeNamesForNode:(const struct TFENode *)arg1;
- (id)defaultValue;
- (id)init;

@end
