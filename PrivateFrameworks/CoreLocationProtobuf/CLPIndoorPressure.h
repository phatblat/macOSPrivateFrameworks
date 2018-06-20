//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CLPIndoorPressure : PBCodable <NSCopying>
{
    double _timestamp;
    float _pressure;
    float _temperature;
    struct {
        unsigned int timestamp:1;
        unsigned int pressure:1;
        unsigned int temperature:1;
    } _has;
}

@property(nonatomic) float temperature; // @synthesize temperature=_temperature;
@property(nonatomic) float pressure; // @synthesize pressure=_pressure;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTemperature;
@property(nonatomic) BOOL hasPressure;
@property(nonatomic) BOOL hasTimestamp;

@end
