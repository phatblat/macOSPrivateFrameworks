//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPlaceRequestParameters;

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying>
{
    GEOPDPlaceRequestParameters *_placeRequestParameters;
    int _requestType;
    CDStruct_7c66fec0 _has;
}

@property(retain, nonatomic) GEOPDPlaceRequestParameters *placeRequestParameters; // @synthesize placeRequestParameters=_placeRequestParameters;
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
@property(readonly, nonatomic) BOOL hasPlaceRequestParameters;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;

@end

