//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSString, PBUnknownFields;

@interface GEOPDIpGeoLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_ipAddress;
    GEOLatLng *_location;
    int _status;
    NSString *_timeZome;
    struct {
        unsigned int status:1;
    } _has;
}

@property(retain, nonatomic) NSString *timeZome; // @synthesize timeZome=_timeZome;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasTimeZome;
@property(readonly, nonatomic) BOOL hasCountryCode;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasIpAddress;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;

@end

