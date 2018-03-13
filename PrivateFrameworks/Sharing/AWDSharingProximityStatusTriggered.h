//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDSharingProximityStatusTriggered : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _audioSourceCount;
    unsigned int _audioState;
    unsigned int _caseBatteryLevel;
    unsigned int _caseBatteryPercent;
    unsigned int _deviceRole;
    unsigned int _deviceSide;
    NSString *_model;
    unsigned int _myBatteryLevel;
    unsigned int _myBatteryPercent;
    unsigned int _otherBatteryLevel;
    unsigned int _otherBatteryPercent;
    unsigned int _primaryLocation;
    int _rssi;
    unsigned int _secondaryLocation;
    NSString *_sessionUUID;
    int _smoothedRSSI;
    BOOL _caseBatteryCharging;
    BOOL _myBatteryCharging;
    BOOL _otherBatteryCharging;
    BOOL _otherDeviceInCase;
    BOOL _outOfBoxMode;
    BOOL _paired;
    struct {
        unsigned int timestamp:1;
        unsigned int audioSourceCount:1;
        unsigned int audioState:1;
        unsigned int caseBatteryLevel:1;
        unsigned int caseBatteryPercent:1;
        unsigned int deviceRole:1;
        unsigned int deviceSide:1;
        unsigned int myBatteryLevel:1;
        unsigned int myBatteryPercent:1;
        unsigned int otherBatteryLevel:1;
        unsigned int otherBatteryPercent:1;
        unsigned int primaryLocation:1;
        unsigned int rssi:1;
        unsigned int secondaryLocation:1;
        unsigned int smoothedRSSI:1;
        unsigned int caseBatteryCharging:1;
        unsigned int myBatteryCharging:1;
        unsigned int otherBatteryCharging:1;
        unsigned int otherDeviceInCase:1;
        unsigned int outOfBoxMode:1;
        unsigned int paired:1;
    } _has;
}

@property(nonatomic) BOOL paired; // @synthesize paired=_paired;
@property(nonatomic) BOOL caseBatteryCharging; // @synthesize caseBatteryCharging=_caseBatteryCharging;
@property(nonatomic) unsigned int caseBatteryLevel; // @synthesize caseBatteryLevel=_caseBatteryLevel;
@property(nonatomic) BOOL otherBatteryCharging; // @synthesize otherBatteryCharging=_otherBatteryCharging;
@property(nonatomic) unsigned int otherBatteryLevel; // @synthesize otherBatteryLevel=_otherBatteryLevel;
@property(nonatomic) BOOL myBatteryCharging; // @synthesize myBatteryCharging=_myBatteryCharging;
@property(nonatomic) unsigned int myBatteryLevel; // @synthesize myBatteryLevel=_myBatteryLevel;
@property(nonatomic) BOOL otherDeviceInCase; // @synthesize otherDeviceInCase=_otherDeviceInCase;
@property(nonatomic) unsigned int audioSourceCount; // @synthesize audioSourceCount=_audioSourceCount;
@property(nonatomic) unsigned int audioState; // @synthesize audioState=_audioState;
@property(nonatomic) unsigned int caseBatteryPercent; // @synthesize caseBatteryPercent=_caseBatteryPercent;
@property(nonatomic) unsigned int otherBatteryPercent; // @synthesize otherBatteryPercent=_otherBatteryPercent;
@property(nonatomic) unsigned int myBatteryPercent; // @synthesize myBatteryPercent=_myBatteryPercent;
@property(nonatomic) BOOL outOfBoxMode; // @synthesize outOfBoxMode=_outOfBoxMode;
@property(nonatomic) unsigned int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned int deviceSide; // @synthesize deviceSide=_deviceSide;
@property(nonatomic) unsigned int secondaryLocation; // @synthesize secondaryLocation=_secondaryLocation;
@property(nonatomic) unsigned int primaryLocation; // @synthesize primaryLocation=_primaryLocation;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(nonatomic) int smoothedRSSI; // @synthesize smoothedRSSI=_smoothedRSSI;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPaired;
@property(nonatomic) BOOL hasCaseBatteryCharging;
@property(nonatomic) BOOL hasCaseBatteryLevel;
@property(nonatomic) BOOL hasOtherBatteryCharging;
@property(nonatomic) BOOL hasOtherBatteryLevel;
@property(nonatomic) BOOL hasMyBatteryCharging;
@property(nonatomic) BOOL hasMyBatteryLevel;
@property(nonatomic) BOOL hasOtherDeviceInCase;
@property(nonatomic) BOOL hasAudioSourceCount;
@property(nonatomic) BOOL hasAudioState;
@property(nonatomic) BOOL hasCaseBatteryPercent;
@property(nonatomic) BOOL hasOtherBatteryPercent;
@property(nonatomic) BOOL hasMyBatteryPercent;
@property(nonatomic) BOOL hasOutOfBoxMode;
@property(nonatomic) BOOL hasDeviceRole;
@property(nonatomic) BOOL hasDeviceSide;
@property(nonatomic) BOOL hasSecondaryLocation;
@property(nonatomic) BOOL hasPrimaryLocation;
@property(readonly, nonatomic) BOOL hasModel;
@property(nonatomic) BOOL hasSmoothedRSSI;
@property(nonatomic) BOOL hasRssi;
@property(readonly, nonatomic) BOOL hasSessionUUID;
@property(nonatomic) BOOL hasTimestamp;

@end

