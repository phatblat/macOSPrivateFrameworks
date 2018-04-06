//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOTouristInfo;

@interface GEOLogMsgStateMapViewLocation : PBCodable <NSCopying>
{
    int _locationBucket;
    GEOTouristInfo *_touristInfo;
    BOOL _isCurrentLocationInViewport;
    struct {
        unsigned int locationBucket:1;
        unsigned int isCurrentLocationInViewport:1;
    } _has;
}

@property(retain, nonatomic) GEOTouristInfo *touristInfo; // @synthesize touristInfo=_touristInfo;
@property(nonatomic) BOOL isCurrentLocationInViewport; // @synthesize isCurrentLocationInViewport=_isCurrentLocationInViewport;
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
@property(readonly, nonatomic) BOOL hasTouristInfo;
@property(nonatomic) BOOL hasIsCurrentLocationInViewport;
- (int)StringAsLocationBucket:(id)arg1;
- (id)locationBucketAsString:(int)arg1;
@property(nonatomic) BOOL hasLocationBucket;
@property(nonatomic) int locationBucket; // @synthesize locationBucket=_locationBucket;

@end
