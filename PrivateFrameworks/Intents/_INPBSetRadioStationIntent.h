//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetRadioStationIntent.h"

@class NSString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSetRadioStationIntent : PBCodable <_INPBSetRadioStationIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int radioType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _radioType;
    _INPBString *_channel;
    _INPBDouble *_frequency;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_presetNumber;
    _INPBString *_stationName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBString *stationName; // @synthesize stationName=_stationName;
@property(nonatomic) int radioType; // @synthesize radioType=_radioType;
@property(retain, nonatomic) _INPBInteger *presetNumber; // @synthesize presetNumber=_presetNumber;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDouble *frequency; // @synthesize frequency=_frequency;
@property(retain, nonatomic) _INPBString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasStationName;
- (int)StringAsRadioType:(id)arg1;
- (id)radioTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRadioType;
@property(readonly, nonatomic) BOOL hasPresetNumber;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasFrequency;
@property(readonly, nonatomic) BOOL hasChannel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

