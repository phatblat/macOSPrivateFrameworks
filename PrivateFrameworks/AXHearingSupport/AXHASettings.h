//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface AXHASettings : NSObject
{
    ACAccountStore *_accountStore;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
}

+ (id)sharedInstance;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableSet *synchronizePreferences; // @synthesize synchronizePreferences=_synchronizePreferences;
@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;
- (void).cxx_destruct;
- (BOOL)isDeviceIDOnCloudBlacklist:(id)arg1;
- (void)removeDeviceIDFromCloudBlacklist:(id)arg1;
- (void)addDeviceIDToCloudBlacklist:(id)arg1;
@property(nonatomic) BOOL multideviceAudioEnabled;
@property(nonatomic) BOOL multideviceSettingsEnabled;
@property(nonatomic) BOOL exportsLiveListenToFile;
@property(nonatomic) long long inputRoutingOption;
@property(nonatomic) long long mediaAudioRoute;
@property(nonatomic) long long callAudioRoute;
@property(nonatomic) BOOL shouldStreamToRightAid;
@property(nonatomic) BOOL shouldStreamToLeftAid;
@property(nonatomic) BOOL allowHearingAidControlOnLockScreen;
@property(nonatomic) BOOL independentHearingAidSettings;
@property(retain, nonatomic) NSDictionary *pairedHearingAids;
- (id)deviceIDForPairingInformation:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_registerForNotification:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (id)_notificationForPreferenceKey:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (void)pushLocalHearingAidsToiCloud;
- (void)setLocalHearingAidsFromiCloud:(id)arg1;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)icloudHearingSettingsDidChange:(id)arg1;
- (BOOL)shouldUseiCloud;
- (id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3;
- (BOOL)isiCloudPaired;
- (BOOL)isPairedWithFakeHearingAids;
- (void)dealloc;
- (id)init;

@end

