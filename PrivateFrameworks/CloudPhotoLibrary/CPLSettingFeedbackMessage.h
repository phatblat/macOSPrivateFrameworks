//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage
{
    NSString *_settingName;
    NSString *_value;
}

+ (id)feedbackType;
@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *settingName; // @synthesize settingName=_settingName;
- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithSetting:(id)arg1 value:(id)arg2;

@end

