//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitArtworkDataSource.h"
#import "GEOTransitTextDataSource.h"
#import "NSCopying.h"

@class GEOFormattedString, NSString, PBUnknownFields;

@interface GEOTransitClusterArtworkItem : PBCodable <GEOTransitArtworkDataSource, GEOTransitTextDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_text;
    unsigned int _artworkIndex;
    struct {
        unsigned int has_artworkIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOFormattedString *text;
@property(readonly, nonatomic) BOOL hasText;
@property(nonatomic) BOOL hasArtworkIndex;
@property(nonatomic) unsigned int artworkIndex;
@property(readonly, nonatomic) NSString *accessibilityText;
@property(readonly, nonatomic) BOOL hasRoutingIncidentBadge;
@property(readonly, nonatomic) id <GEOTransitTextDataSource> textDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> iconFallbackShieldDataSource;
@property(readonly, nonatomic) id <GEOTransitIconDataSource> iconDataSource;
@property(readonly, nonatomic) id <GEOTransitShieldDataSource> shieldDataSource;
@property(readonly, nonatomic) int artworkUseType;
@property(readonly, nonatomic) int artworkSourceType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

