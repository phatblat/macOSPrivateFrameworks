//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStartCallIntentResponse.h"

@class NSString;

@interface _INPBStartCallIntentResponse : PBCodable <_INPBStartCallIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int confirmationReason:1;
        unsigned int shouldDoEmergencyCountdown:1;
    } _has;
    BOOL _shouldDoEmergencyCountdown;
    BOOL __encodeLegacyGloryData;
    int _confirmationReason;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) BOOL shouldDoEmergencyCountdown; // @synthesize shouldDoEmergencyCountdown=_shouldDoEmergencyCountdown;
@property(nonatomic) int confirmationReason; // @synthesize confirmationReason=_confirmationReason;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasShouldDoEmergencyCountdown;
- (int)StringAsConfirmationReason:(id)arg1;
- (id)confirmationReasonAsString:(int)arg1;
@property(nonatomic) BOOL hasConfirmationReason;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

