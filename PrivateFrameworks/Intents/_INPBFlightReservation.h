//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBFlightReservation.h"

@class NSString, _INPBFlight, _INPBReservation, _INPBSeat;

@interface _INPBFlightReservation : PBCodable <_INPBFlightReservation, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBFlight *_flight;
    _INPBReservation *_reservation;
    _INPBSeat *_reservedSeat;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBSeat *reservedSeat; // @synthesize reservedSeat=_reservedSeat;
@property(retain, nonatomic) _INPBReservation *reservation; // @synthesize reservation=_reservation;
@property(retain, nonatomic) _INPBFlight *flight; // @synthesize flight=_flight;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasReservedSeat;
@property(readonly, nonatomic) BOOL hasReservation;
@property(readonly, nonatomic) BOOL hasFlight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
