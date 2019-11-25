//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBContactHandle.h"

@class NSString;

@interface _INPBContactHandle : PBCodable <_INPBContactHandle, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int emergencyType:1;
        unsigned int type:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _emergencyType;
    int _type;
    NSString *_label;
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int emergencyType; // @synthesize emergencyType=_emergencyType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValue;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(readonly, nonatomic) BOOL hasLabel;
- (int)StringAsEmergencyType:(id)arg1;
- (id)emergencyTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEmergencyType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

