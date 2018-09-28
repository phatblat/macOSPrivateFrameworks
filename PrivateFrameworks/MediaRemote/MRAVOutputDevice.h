//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRAVEndpoint, MRAVOutputDeviceSourceInfo, NSData, NSDictionary, NSString, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVOutputDevice : NSObject
{
    BOOL _canAccessRemoteAssets;
    BOOL _canAccessAppleMusic;
    BOOL _canAccessiCloudMusicLibrary;
    BOOL _canPlayEncryptedProgressiveDownloadAssets;
    BOOL _canFetchMediaDataFromSender;
    BOOL _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    BOOL _remoteControllable;
    BOOL _groupLeader;
    BOOL _groupContainsGroupLeader;
    BOOL _airPlayReceiverSessionActive;
    BOOL _groupable;
    BOOL _proxyGroupPlayer;
    BOOL _canRelayCommunicationChannel;
    BOOL _supportsBufferedAirPlay;
    BOOL _deviceGroupable;
    BOOL _pickedOnPairedDevice;
    BOOL _hasBatteryLevel;
    BOOL _localDevice;
    BOOL _supportsExternalScreen;
    BOOL _requiresAuthorization;
    BOOL _parentGroupContainsDiscoverableLeader;
    BOOL _volumeControlAvailable;
    unsigned int _deviceType;
    unsigned int _deviceSubtype;
    float _batteryLevel;
    float _volume;
    NSString *_name;
    NSString *_uid;
    NSString *_modelID;
    NSString *_firmwareVersion;
    NSString *_groupID;
    NSString *_logicalDeviceID;
    NSData *_MACAddress;
    NSDictionary *_modelSpecificInfo;
    NSString *_playingPairedDeviceName;
    NSString *_parentGroupIdentifier;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    MRAVEndpoint *_endpoint;
}

+ (id)localDeviceLocalizedName;
+ (id)localDeviceUID;
@property(nonatomic) __weak MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) MRAVOutputDeviceSourceInfo *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable; // @synthesize volumeControlAvailable=_volumeControlAvailable;
@property(copy, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
@property(readonly, nonatomic) BOOL parentGroupContainsDiscoverableLeader; // @synthesize parentGroupContainsDiscoverableLeader=_parentGroupContainsDiscoverableLeader;
@property(readonly, nonatomic) BOOL requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(readonly, nonatomic) BOOL supportsExternalScreen; // @synthesize supportsExternalScreen=_supportsExternalScreen;
@property(readonly, nonatomic, getter=isLocalDevice) BOOL localDevice; // @synthesize localDevice=_localDevice;
@property(readonly, nonatomic) BOOL hasBatteryLevel; // @synthesize hasBatteryLevel=_hasBatteryLevel;
@property(readonly, nonatomic) float batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) unsigned int deviceSubtype; // @synthesize deviceSubtype=_deviceSubtype;
@property(readonly, nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic, getter=isPickedOnPairedDevice) BOOL pickedOnPairedDevice; // @synthesize pickedOnPairedDevice=_pickedOnPairedDevice;
@property(readonly, nonatomic, getter=isDeviceGroupable) BOOL deviceGroupable; // @synthesize deviceGroupable=_deviceGroupable;
@property(readonly, nonatomic) BOOL supportsBufferedAirPlay; // @synthesize supportsBufferedAirPlay=_supportsBufferedAirPlay;
@property(readonly, nonatomic) BOOL canRelayCommunicationChannel; // @synthesize canRelayCommunicationChannel=_canRelayCommunicationChannel;
@property(readonly, nonatomic, getter=isProxyGroupPlayer) BOOL proxyGroupPlayer; // @synthesize proxyGroupPlayer=_proxyGroupPlayer;
@property(readonly, nonatomic, getter=isGroupable) BOOL groupable; // @synthesize groupable=_groupable;
@property(readonly, nonatomic, getter=isAirPlayReceiverSessionActive) BOOL airPlayReceiverSessionActive; // @synthesize airPlayReceiverSessionActive=_airPlayReceiverSessionActive;
@property(readonly, nonatomic) BOOL groupContainsGroupLeader; // @synthesize groupContainsGroupLeader=_groupContainsGroupLeader;
@property(readonly, nonatomic, getter=isGroupLeader) BOOL groupLeader; // @synthesize groupLeader=_groupLeader;
@property(readonly, nonatomic, getter=isRemoteControllable) BOOL remoteControllable; // @synthesize remoteControllable=_remoteControllable;
@property(readonly, nonatomic) BOOL presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets; // @synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(readonly, nonatomic) BOOL canFetchMediaDataFromSender; // @synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender;
@property(readonly, nonatomic) BOOL canPlayEncryptedProgressiveDownloadAssets; // @synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets;
@property(readonly, nonatomic) BOOL canAccessiCloudMusicLibrary; // @synthesize canAccessiCloudMusicLibrary=_canAccessiCloudMusicLibrary;
@property(readonly, nonatomic) BOOL canAccessAppleMusic; // @synthesize canAccessAppleMusic=_canAccessAppleMusic;
@property(readonly, nonatomic) BOOL canAccessRemoteAssets; // @synthesize canAccessRemoteAssets=_canAccessRemoteAssets;
@property(readonly, nonatomic) NSString *playingPairedDeviceName; // @synthesize playingPairedDeviceName=_playingPairedDeviceName;
@property(readonly, nonatomic) NSDictionary *modelSpecificInfo; // @synthesize modelSpecificInfo=_modelSpecificInfo;
@property(readonly, nonatomic) NSData *MACAddress; // @synthesize MACAddress=_MACAddress;
@property(readonly, nonatomic) NSString *logicalDeviceID; // @synthesize logicalDeviceID=_logicalDeviceID;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *modelID; // @synthesize modelID=_modelID;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property(readonly, nonatomic) NSString *roleDescription;
@property(readonly, nonatomic) NSString *composedTypeDescription;
@property(readonly, nonatomic) NSString *capabilitiesDescription;
@property(readonly, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *descriptor;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end

