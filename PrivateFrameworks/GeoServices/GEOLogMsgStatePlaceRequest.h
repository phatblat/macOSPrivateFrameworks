//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying>
{
    GEOPDPlaceRequest *_placeDataRequest;
    int _placeRequestType;
    struct {
        unsigned int has_placeRequestType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDPlaceRequest *placeDataRequest;
@property(readonly, nonatomic) BOOL hasPlaceDataRequest;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceRequestType;
@property(nonatomic) int placeRequestType;

@end

