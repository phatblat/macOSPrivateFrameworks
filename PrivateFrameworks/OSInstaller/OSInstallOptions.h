//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SKDisk;

@interface OSInstallOptions : NSObject
{
    BOOL _isIngenuine;
    BOOL _isAutomated;
    BOOL _isEraseInstall;
    BOOL _hadToMountBaseSystemDMG;
    BOOL _needsLongInstallSizeCheck;
    BOOL _shouldConvertToAPFS;
    BOOL _enableSUFLO;
    BOOL _didRequestEraseInstall;
    BOOL _isAppleInternal;
    BOOL _doROSVInstall;
    NSString *_alternateBlessVolumeUUID;
    NSString *_baseSystemMountPoint;
    NSString *_payloadImageMountPoint;
    SKDisk *_dataTarget;
    SKDisk *_systemTarget;
    long long _installType;
    NSString *_volumeUUIDToErase;
    NSString *_targetVolumeName;
    NSString *_localizedProductName;
    NSURL *_distributionURL;
    NSURL *_choiceChangesURL;
    NSURL *_baseSystemURL;
    NSURL *_payloadImageURL;
    NSURL *_appleDiagnosticsURL;
    NSString *_alternateBlessVolumePath;
}

+ (BOOL)isBeingInstalledInternally;
@property(retain) NSString *alternateBlessVolumePath; // @synthesize alternateBlessVolumePath=_alternateBlessVolumePath;
@property(retain) NSURL *appleDiagnosticsURL; // @synthesize appleDiagnosticsURL=_appleDiagnosticsURL;
@property(retain) NSURL *payloadImageURL; // @synthesize payloadImageURL=_payloadImageURL;
@property(retain) NSURL *baseSystemURL; // @synthesize baseSystemURL=_baseSystemURL;
@property(retain) NSURL *choiceChangesURL; // @synthesize choiceChangesURL=_choiceChangesURL;
@property(retain) NSURL *distributionURL; // @synthesize distributionURL=_distributionURL;
@property(retain) NSString *localizedProductName; // @synthesize localizedProductName=_localizedProductName;
@property(retain) NSString *targetVolumeName; // @synthesize targetVolumeName=_targetVolumeName;
@property BOOL doROSVInstall; // @synthesize doROSVInstall=_doROSVInstall;
@property(retain) NSString *volumeUUIDToErase; // @synthesize volumeUUIDToErase=_volumeUUIDToErase;
@property BOOL isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property BOOL didRequestEraseInstall; // @synthesize didRequestEraseInstall=_didRequestEraseInstall;
@property BOOL enableSUFLO; // @synthesize enableSUFLO=_enableSUFLO;
@property BOOL shouldConvertToAPFS; // @synthesize shouldConvertToAPFS=_shouldConvertToAPFS;
@property BOOL needsLongInstallSizeCheck; // @synthesize needsLongInstallSizeCheck=_needsLongInstallSizeCheck;
@property BOOL hadToMountBaseSystemDMG; // @synthesize hadToMountBaseSystemDMG=_hadToMountBaseSystemDMG;
@property BOOL isEraseInstall; // @synthesize isEraseInstall=_isEraseInstall;
@property BOOL isAutomated; // @synthesize isAutomated=_isAutomated;
@property BOOL isIngenuine; // @synthesize isIngenuine=_isIngenuine;
@property long long installType; // @synthesize installType=_installType;
@property(retain) SKDisk *systemTarget; // @synthesize systemTarget=_systemTarget;
@property(retain) SKDisk *dataTarget; // @synthesize dataTarget=_dataTarget;
@property(retain) NSString *payloadImageMountPoint; // @synthesize payloadImageMountPoint=_payloadImageMountPoint;
@property(retain) NSString *baseSystemMountPoint; // @synthesize baseSystemMountPoint=_baseSystemMountPoint;
@property(retain) NSString *alternateBlessVolumeUUID; // @synthesize alternateBlessVolumeUUID=_alternateBlessVolumeUUID;
- (void).cxx_destruct;
- (id)_fileDiskURLForPath:(id)arg1;
- (id)_mountPointForDiskWithUUID:(id)arg1;
- (id)_pathFromFileDiskURL:(id)arg1;
@property(retain) NSString *appleDiagnosticsPath;
@property(retain) NSString *payloadImagePath;
@property(retain) NSString *baseSystemPath;
@property(retain) NSString *choiceChangesPath;
@property(retain) NSString *distributionPath;
- (id)_resolveTargetWithPath:(id)arg1 name:(id)arg2 orUUID:(id)arg3;
- (id)alternateBlessTarget;
- (id)initWithDefaultSettings;
- (id)initWithFile:(id)arg1;

@end

