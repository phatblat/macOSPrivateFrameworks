//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPDNearestTransitParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    BOOL _isTransitOnly;
    struct {
        unsigned int lineMuid:1;
        unsigned int isTransitOnly:1;
    } _has;
}

@property(nonatomic) BOOL isTransitOnly; // @synthesize isTransitOnly=_isTransitOnly;
@property(nonatomic) unsigned long long lineMuid; // @synthesize lineMuid=_lineMuid;
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
@property(nonatomic) BOOL hasIsTransitOnly;
@property(nonatomic) BOOL hasLineMuid;

@end

