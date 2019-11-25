//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBAirportGate.h"

@class NSString, _INPBAirport;

@interface _INPBAirportGate : PBCodable <_INPBAirportGate, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBAirport *_airport;
    NSString *_gate;
    NSString *_terminal;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *terminal; // @synthesize terminal=_terminal;
@property(copy, nonatomic) NSString *gate; // @synthesize gate=_gate;
@property(retain, nonatomic) _INPBAirport *airport; // @synthesize airport=_airport;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTerminal;
@property(readonly, nonatomic) BOOL hasGate;
@property(readonly, nonatomic) BOOL hasAirport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

