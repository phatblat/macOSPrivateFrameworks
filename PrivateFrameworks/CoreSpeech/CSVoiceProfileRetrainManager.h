//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSVoiceProfileRetrainManager : NSObject
{
}

+ (id)sharedInstance;
- (void)triggerVoiceProfileRetrainingWithAsset:(id)arg1;
- (void)analyzeImplicitUtterance:(id)arg1 withVoiceTriggerContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)init;

@end
