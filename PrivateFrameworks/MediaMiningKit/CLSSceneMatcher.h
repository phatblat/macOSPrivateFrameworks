//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject
{
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;
}

+ (id)confidenceThresholdTypeBySceneLabel;
+ (id)sceneNameBySceneLabel;
+ (id)whiteboardSceneNames;
+ (id)interestingSceneNames;
+ (id)childTeenAndAdultSceneNames;
+ (id)babyAndPetSceneNames;
+ (id)babyChildTeenAdultAndPetSceneNames;
+ (id)junkSceneNamesLegacy;
+ (id)junkSceneNames;
+ (id)sharedSceneMatcher;
- (void).cxx_destruct;
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1;

@end
