//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MROutputContextDataSource.h>

@class MRAVOutputContext, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MROutputContextController : MROutputContextDataSource
{
    MRAVOutputContext *_outputContext;
    float _masterVolume;
    unsigned int _masterVolumeControlCapabilities;
    BOOL _localVolumeInitialized;
    BOOL _localVolumeControlCapabilitiesInitialized;
    NSMutableDictionary *_outputDeviceVolume;
    NSObject<OS_dispatch_queue> *_serialQueue;
    float _localVolume;
    unsigned int _localVolumeControlCapabilities;
}

+ (id)sharedOutputContextController;
@property(nonatomic) unsigned int localVolumeControlCapabilities; // @synthesize localVolumeControlCapabilities=_localVolumeControlCapabilities;
@property(nonatomic) float localVolume; // @synthesize localVolume=_localVolume;
- (void).cxx_destruct;
- (void)_registerNotifications;
- (void)_inititalizeVolume;
- (id)_onSerialQueue_localOutputDevice;
- (BOOL)_onSerialQueue_isLocalOutputDevice:(id)arg1;
- (void)_onSerialQueue_reevaluateMasterVolumeControlCapabilities;
- (unsigned int)_onSerialQueue_calculateMasterVolumeCapabilities;
- (void)_onSerialQueue_reevaluateMasterVolume;
- (float)_onSerialQueue_calculateMasterVolume;
- (void)_handleOutputDeviceRemovedNotification:(id)arg1;
- (void)_handleOutputDeviceAddedNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1;
- (id)setVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1;
- (float)volumeForOutputDeviceUID:(id)arg1;
- (id)uniqueIdentifier;
- (id)outputDevices;
@property(readonly, nonatomic) NSString *localDeviceUID;
- (unsigned int)volumeControlCapabilities;
- (float)volume;
- (id)description;
- (void)dealloc;
- (id)initWithOutputContext:(id)arg1;

@end

