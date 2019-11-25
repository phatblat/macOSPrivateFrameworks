//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccessory, HMDAccessorySettingTarget, HMDHome, HMDMediaSystem, NSArray, NSString, NSUUID;

@interface HMDAccessorySettingContainer : NSObject
{
    HMDMediaSystem *_mediaSystem;
    HMDAccessory *_accessory;
}

@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) __weak HMDMediaSystem *mediaSystem; // @synthesize mediaSystem=_mediaSystem;
- (void).cxx_destruct;
- (BOOL)isMediaSystemContainer;
@property(readonly) NSArray *accessories;
@property(readonly) NSArray *supportedMultiUserLanguageCodes;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSUUID *parentUUID;
- (void)auditRootSettingsGroup:(unsigned long long)arg1;
@property(readonly, nonatomic) __weak HMDAccessorySettingTarget *target;
@property(readonly, nonatomic) __weak HMDHome *home;
- (id)description;
- (id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2;

@end

