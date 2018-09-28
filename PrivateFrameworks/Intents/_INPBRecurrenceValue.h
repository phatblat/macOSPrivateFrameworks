//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBRecurrenceValue.h"

@class NSString;

@interface _INPBRecurrenceValue : PBCodable <_INPBRecurrenceValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int frequency:1;
        unsigned int interval:1;
        unsigned int ordinal:1;
    } _has;
    int _frequency;
    unsigned long long _interval;
    long long _ordinal;
}

@property(nonatomic) long long ordinal; // @synthesize ordinal=_ordinal;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) int frequency; // @synthesize frequency=_frequency;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasOrdinal;
@property(nonatomic) BOOL hasInterval;
- (int)StringAsFrequency:(id)arg1;
- (id)frequencyAsString:(int)arg1;
@property(nonatomic) BOOL hasFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

