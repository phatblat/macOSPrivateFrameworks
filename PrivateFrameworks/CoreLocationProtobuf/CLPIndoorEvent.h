//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CLPIndoorCMAttitude, CLPIndoorCMPedometer, CLPIndoorMotionActivity, CLPIndoorPressure, CLPIndoorWifiScan, CLPLocation;

@interface CLPIndoorEvent : PBCodable <NSCopying>
{
    CLPIndoorCMAttitude *_cmAttitude;
    CLPIndoorCMPedometer *_cmPedometer;
    CLPLocation *_location;
    CLPIndoorMotionActivity *_motionActivity;
    CLPIndoorPressure *_pressure;
    int _type;
    CLPIndoorWifiScan *_wifiScan;
    struct {
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) CLPIndoorWifiScan *wifiScan; // @synthesize wifiScan=_wifiScan;
@property(retain, nonatomic) CLPIndoorPressure *pressure; // @synthesize pressure=_pressure;
@property(retain, nonatomic) CLPIndoorMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLPIndoorCMPedometer *cmPedometer; // @synthesize cmPedometer=_cmPedometer;
@property(retain, nonatomic) CLPIndoorCMAttitude *cmAttitude; // @synthesize cmAttitude=_cmAttitude;
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
@property(readonly, nonatomic) BOOL hasWifiScan;
@property(readonly, nonatomic) BOOL hasPressure;
@property(readonly, nonatomic) BOOL hasMotionActivity;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasCmPedometer;
@property(readonly, nonatomic) BOOL hasCmAttitude;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

