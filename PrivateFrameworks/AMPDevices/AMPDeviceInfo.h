//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface AMPDeviceInfo : NSObject <NSSecureCoding>
{
    BOOL _supportsAudio;
    BOOL _supportsVideo;
    BOOL _supportsAudiobooks;
    BOOL _supportsBooks;
    BOOL _supportsMovies;
    BOOL _supportsTVShows;
    BOOL _supportsRentals;
    BOOL _supportsHDVideos;
    BOOL _supportsPlaylistFolders;
    BOOL _supportsFileSharing;
    BOOL _supportsWifiSyncing;
    BOOL _supportsAutofill;
    BOOL _supportsTranscoding;
    BOOL _supportsFlashUIForShuffle;
    BOOL _supportsSoundCheckForShuffle;
    BOOL _supportsVolumeLimitForShuffle;
    BOOL _supportsHighVolumeWarningForShuffle;
    BOOL _supportsGenius;
    BOOL _supportsGeniusMixes;
    BOOL _supportsAccessibility;
    BOOL _supportsSpeechClips;
    BOOL _supportsVoiceOverKit;
    BOOL _supportsVoiceOverLanguageMenu;
    BOOL _supportsPhotos;
    BOOL _supportsPhotoVideos;
    BOOL _supportsCameraRoll;
    BOOL _supportsMusicVideos;
    BOOL _supportsDigitalBooklets;
    BOOL _supportsVoiceMemos;
    BOOL _supportsManualMode;
    BOOL _supportsDiskMode;
    BOOL _supportsContacts;
    BOOL _supportsCalendars;
    BOOL _supportsOverTheAirSync;
    BOOL _supportsMultipleSyncSources;
    BOOL _supportsClearingSyncData;
    BOOL _syncingContactsOverTheAir;
    BOOL _syncingCalendarsOverTheAir;
    BOOL _supportsCheckedSongs;
    BOOL _supportsCheckedVideos;
    BOOL _supportsBackupRestore;
    BOOL _supportsEncryptedBackups;
    BOOL _willEncryptBackups;
    BOOL _requiresEncryptedBackups;
    BOOL _supportsCloudBackup;
    BOOL _requiresActivation;
    BOOL _disableAutomaticSync;
    BOOL _disableCheckForUpdates;
    BOOL _disableFileSharing;
    unsigned short _screenHeight;
    unsigned short _screenWidth;
    NSString *_overTheAirContactsSyncSource;
    NSString *_overTheAirCalendarsSyncSource;
    NSString *_productType;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_serialNumber;
    NSString *_uniqueChipIdentifier;
    NSString *_uniqueDeviceIdentifier;
    NSString *_internationalMobileEquipmentIdentity;
    NSString *_internationalMobileEquipmentIdentity2;
    NSString *_integratedCircuitCardIdentity;
    NSString *_integratedCircuitCardIdentity2;
    NSString *_internationalMobileSubscriberIdentity;
    NSString *_internationalMobileSubscriberIdentity2;
    NSString *_mobileEquipmentIdentifier;
    NSString *_phoneNumber;
    NSString *_phoneNumber2;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *phoneNumber2; // @synthesize phoneNumber2=_phoneNumber2;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *mobileEquipmentIdentifier; // @synthesize mobileEquipmentIdentifier=_mobileEquipmentIdentifier;
@property(retain, nonatomic) NSString *internationalMobileSubscriberIdentity2; // @synthesize internationalMobileSubscriberIdentity2=_internationalMobileSubscriberIdentity2;
@property(retain, nonatomic) NSString *internationalMobileSubscriberIdentity; // @synthesize internationalMobileSubscriberIdentity=_internationalMobileSubscriberIdentity;
@property(retain, nonatomic) NSString *integratedCircuitCardIdentity2; // @synthesize integratedCircuitCardIdentity2=_integratedCircuitCardIdentity2;
@property(retain, nonatomic) NSString *integratedCircuitCardIdentity; // @synthesize integratedCircuitCardIdentity=_integratedCircuitCardIdentity;
@property(retain, nonatomic) NSString *internationalMobileEquipmentIdentity2; // @synthesize internationalMobileEquipmentIdentity2=_internationalMobileEquipmentIdentity2;
@property(retain, nonatomic) NSString *internationalMobileEquipmentIdentity; // @synthesize internationalMobileEquipmentIdentity=_internationalMobileEquipmentIdentity;
@property(retain, nonatomic) NSString *uniqueDeviceIdentifier; // @synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier;
@property(retain, nonatomic) NSString *uniqueChipIdentifier; // @synthesize uniqueChipIdentifier=_uniqueChipIdentifier;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSString *overTheAirCalendarsSyncSource; // @synthesize overTheAirCalendarsSyncSource=_overTheAirCalendarsSyncSource;
@property(retain, nonatomic) NSString *overTheAirContactsSyncSource; // @synthesize overTheAirContactsSyncSource=_overTheAirContactsSyncSource;
@property(nonatomic) unsigned short screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) unsigned short screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) BOOL disableFileSharing; // @synthesize disableFileSharing=_disableFileSharing;
@property(nonatomic) BOOL disableCheckForUpdates; // @synthesize disableCheckForUpdates=_disableCheckForUpdates;
@property(nonatomic) BOOL disableAutomaticSync; // @synthesize disableAutomaticSync=_disableAutomaticSync;
@property(nonatomic) BOOL requiresActivation; // @synthesize requiresActivation=_requiresActivation;
@property(nonatomic) BOOL supportsCloudBackup; // @synthesize supportsCloudBackup=_supportsCloudBackup;
@property(nonatomic) BOOL requiresEncryptedBackups; // @synthesize requiresEncryptedBackups=_requiresEncryptedBackups;
@property(nonatomic) BOOL willEncryptBackups; // @synthesize willEncryptBackups=_willEncryptBackups;
@property(nonatomic) BOOL supportsEncryptedBackups; // @synthesize supportsEncryptedBackups=_supportsEncryptedBackups;
@property(nonatomic) BOOL supportsBackupRestore; // @synthesize supportsBackupRestore=_supportsBackupRestore;
@property(nonatomic) BOOL supportsCheckedVideos; // @synthesize supportsCheckedVideos=_supportsCheckedVideos;
@property(nonatomic) BOOL supportsCheckedSongs; // @synthesize supportsCheckedSongs=_supportsCheckedSongs;
@property(nonatomic) BOOL syncingCalendarsOverTheAir; // @synthesize syncingCalendarsOverTheAir=_syncingCalendarsOverTheAir;
@property(nonatomic) BOOL syncingContactsOverTheAir; // @synthesize syncingContactsOverTheAir=_syncingContactsOverTheAir;
@property(nonatomic) BOOL supportsClearingSyncData; // @synthesize supportsClearingSyncData=_supportsClearingSyncData;
@property(nonatomic) BOOL supportsMultipleSyncSources; // @synthesize supportsMultipleSyncSources=_supportsMultipleSyncSources;
@property(nonatomic) BOOL supportsOverTheAirSync; // @synthesize supportsOverTheAirSync=_supportsOverTheAirSync;
@property(nonatomic) BOOL supportsCalendars; // @synthesize supportsCalendars=_supportsCalendars;
@property(nonatomic) BOOL supportsContacts; // @synthesize supportsContacts=_supportsContacts;
@property(nonatomic) BOOL supportsDiskMode; // @synthesize supportsDiskMode=_supportsDiskMode;
@property(nonatomic) BOOL supportsManualMode; // @synthesize supportsManualMode=_supportsManualMode;
@property(nonatomic) BOOL supportsVoiceMemos; // @synthesize supportsVoiceMemos=_supportsVoiceMemos;
@property(nonatomic) BOOL supportsDigitalBooklets; // @synthesize supportsDigitalBooklets=_supportsDigitalBooklets;
@property(nonatomic) BOOL supportsMusicVideos; // @synthesize supportsMusicVideos=_supportsMusicVideos;
@property(nonatomic) BOOL supportsCameraRoll; // @synthesize supportsCameraRoll=_supportsCameraRoll;
@property(nonatomic) BOOL supportsPhotoVideos; // @synthesize supportsPhotoVideos=_supportsPhotoVideos;
@property(nonatomic) BOOL supportsPhotos; // @synthesize supportsPhotos=_supportsPhotos;
@property(nonatomic) BOOL supportsVoiceOverLanguageMenu; // @synthesize supportsVoiceOverLanguageMenu=_supportsVoiceOverLanguageMenu;
@property(nonatomic) BOOL supportsVoiceOverKit; // @synthesize supportsVoiceOverKit=_supportsVoiceOverKit;
@property(nonatomic) BOOL supportsSpeechClips; // @synthesize supportsSpeechClips=_supportsSpeechClips;
@property(nonatomic) BOOL supportsAccessibility; // @synthesize supportsAccessibility=_supportsAccessibility;
@property(nonatomic) BOOL supportsGeniusMixes; // @synthesize supportsGeniusMixes=_supportsGeniusMixes;
@property(nonatomic) BOOL supportsGenius; // @synthesize supportsGenius=_supportsGenius;
@property(nonatomic) BOOL supportsHighVolumeWarningForShuffle; // @synthesize supportsHighVolumeWarningForShuffle=_supportsHighVolumeWarningForShuffle;
@property(nonatomic) BOOL supportsVolumeLimitForShuffle; // @synthesize supportsVolumeLimitForShuffle=_supportsVolumeLimitForShuffle;
@property(nonatomic) BOOL supportsSoundCheckForShuffle; // @synthesize supportsSoundCheckForShuffle=_supportsSoundCheckForShuffle;
@property(nonatomic) BOOL supportsFlashUIForShuffle; // @synthesize supportsFlashUIForShuffle=_supportsFlashUIForShuffle;
@property(nonatomic) BOOL supportsTranscoding; // @synthesize supportsTranscoding=_supportsTranscoding;
@property(nonatomic) BOOL supportsAutofill; // @synthesize supportsAutofill=_supportsAutofill;
@property(nonatomic) BOOL supportsWifiSyncing; // @synthesize supportsWifiSyncing=_supportsWifiSyncing;
@property(nonatomic) BOOL supportsFileSharing; // @synthesize supportsFileSharing=_supportsFileSharing;
@property(nonatomic) BOOL supportsPlaylistFolders; // @synthesize supportsPlaylistFolders=_supportsPlaylistFolders;
@property(nonatomic) BOOL supportsHDVideos; // @synthesize supportsHDVideos=_supportsHDVideos;
@property(nonatomic) BOOL supportsRentals; // @synthesize supportsRentals=_supportsRentals;
@property(nonatomic) BOOL supportsTVShows; // @synthesize supportsTVShows=_supportsTVShows;
@property(nonatomic) BOOL supportsMovies; // @synthesize supportsMovies=_supportsMovies;
@property(nonatomic) BOOL supportsBooks; // @synthesize supportsBooks=_supportsBooks;
@property(nonatomic) BOOL supportsAudiobooks; // @synthesize supportsAudiobooks=_supportsAudiobooks;
@property(nonatomic) BOOL supportsVideo; // @synthesize supportsVideo=_supportsVideo;
@property(nonatomic) BOOL supportsAudio; // @synthesize supportsAudio=_supportsAudio;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
