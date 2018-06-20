//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MROutputContextDataSource : NSObject
{
    float _volume;
    unsigned int _volumeControlCapabilities;
    id <MROutputContextDataSourceDelegate> _delegate;
    NSArray *_outputDevices;
    NSString *_uniqueIdentifier;
}

@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly, nonatomic) unsigned int volumeControlCapabilities; // @synthesize volumeControlCapabilities=_volumeControlCapabilities;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) __weak id <MROutputContextDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyVolumeCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;
- (void)notifyVolumeDidChange:(float)arg1 outputDevice:(id)arg2;
- (void)notifyOutputDeviceRemoved:(id)arg1;
- (void)notifyOutputDeviceAdded:(id)arg1;
- (id)outputDeviceForUID:(id)arg1;
@property(readonly, nonatomic) BOOL isAirPlaying;
- (id)description;

@end

