//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AXMPhotoVisionSupport : NSObject
{
}

+ (id)localizedLabelForClassificationObservation:(id)arg1;
+ (id)processSceneClassifications:(id)arg1 withOptions:(unsigned int)arg2;
+ (id)_blacklistedVoiceOverClassificationLabels;
+ (id)nonLeafNodeLabels;
+ (id)leafNodeLabels;
+ (id)buildGraphStatisticsDescription;
+ (id)_collectLabelsIncludingLeafNodes:(BOOL)arg1 nonLeafNodes:(BOOL)arg2;
+ (id)buildParentChainDescriptionForAllNodes;
+ (void)_addNode:(id)arg1 toDescription:(id)arg2 atLevel:(long long)arg3;
+ (id)buildTaxonomyDescription;
+ (BOOL)_validatePhotoVisionSoftLinkSymbols;

@end

