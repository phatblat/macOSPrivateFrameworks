//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@class HMSettingValue, NSString;

@interface HMDSettingAttachedSettingUpdate : HMFObject
{
    NSString *_keyPath;
    HMSettingValue *_settingValue;
}

@property(readonly) HMSettingValue *settingValue; // @synthesize settingValue=_settingValue;
@property(readonly) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)initWithKeyPath:(id)arg1 settingValue:(id)arg2;

@end

