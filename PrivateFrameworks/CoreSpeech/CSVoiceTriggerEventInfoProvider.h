//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface CSVoiceTriggerEventInfoProvider : NSObject
{
    NSDictionary *_voiceTriggerInfo;
    NSDictionary *_rtsTriggerInfo;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *rtsTriggerInfo; // @synthesize rtsTriggerInfo=_rtsTriggerInfo;
@property(copy, nonatomic) NSDictionary *voiceTriggerInfo; // @synthesize voiceTriggerInfo=_voiceTriggerInfo;
- (void).cxx_destruct;

@end
