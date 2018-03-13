//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDObject.h>

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface ASDBox : ASDObject
{
    NSMutableArray *_audioDevices;
    NSMutableArray *_clockDevices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSString *_boxName;
    BOOL _acquired;
    int _acquisitionFailure;
    BOOL _identify;
    NSObject<OS_dispatch_queue> *_acquireQueue;
    BOOL _hasVideo;
    BOOL _hasAudio;
    BOOL _hasMIDI;
    BOOL _requiresAuthentication;
    BOOL _supportsIdentify;
    BOOL _canSetIdentify;
    BOOL _acquirable;
    BOOL _canChangeBoxName;
    NSString *_boxUID;
    NSString *_modelUID;
    NSString *_manufacturerName;
    NSString *_modelName;
    NSString *_serialNumber;
    NSString *_firmwareVersion;
}

+ (id)keyPathsForValuesAffectingAcquireable;
@property(readonly, retain, nonatomic) NSArray *clockDevices; // @synthesize clockDevices=_clockDevices;
@property(nonatomic) BOOL canChangeBoxName; // @synthesize canChangeBoxName=_canChangeBoxName;
@property(nonatomic, getter=isAcquirable) BOOL acquirable; // @synthesize acquirable=_acquirable;
@property(nonatomic) BOOL canSetIdentify; // @synthesize canSetIdentify=_canSetIdentify;
@property(nonatomic) BOOL supportsIdentify; // @synthesize supportsIdentify=_supportsIdentify;
@property(nonatomic) BOOL requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(nonatomic) BOOL hasMIDI; // @synthesize hasMIDI=_hasMIDI;
@property(nonatomic) BOOL hasAudio; // @synthesize hasAudio=_hasAudio;
@property(nonatomic) BOOL hasVideo; // @synthesize hasVideo=_hasVideo;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *modelUID; // @synthesize modelUID=_modelUID;
@property(readonly, copy, nonatomic) NSString *boxUID; // @synthesize boxUID=_boxUID;
- (void).cxx_destruct;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
@property(nonatomic, getter=isAcquireable) BOOL acquireable; // @dynamic acquireable;
- (void)systemHasPoweredOn;
- (void)systemWillSleep;
@property(readonly, retain, nonatomic) NSArray *audioDevices;
@property(readonly, retain, nonatomic) NSArray *devices; // @dynamic devices;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *acquireQueue; // @dynamic acquireQueue;
- (void)identifyBox:(BOOL)arg1;
- (BOOL)acquireBox:(BOOL)arg1 fromHAL:(BOOL)arg2;
@property(nonatomic) BOOL identify;
@property(nonatomic) int acquisitionFailure;
@property(nonatomic) BOOL acquired;
- (BOOL)changeBoxName:(id)arg1;
@property(copy, nonatomic) NSString *boxName; // @dynamic boxName;
- (void)removeDevicesFromPlugin;
- (void)addDevicesToPlugin;
- (void)removeAllClockDevices;
- (void)removeAllAudioDevices;
- (void)removeAllDevices;
- (void)removeClockDevice:(id)arg1;
- (void)removeAudioDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)addClockDevice:(id)arg1;
- (void)addAudioDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
@property(readonly, nonatomic) unsigned int transportType; // @dynamic transportType;
- (unsigned int)objectClass;
- (id)initWithBoxUID:(id)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;

@end

