//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitNamedItem.h"
#import "NSCopying.h"

@class GEOPBTransitArtwork, GEOStyleAttributes, NSString, PBUnknownFields;

@interface GEOPBTransitSystem : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    GEOPBTransitArtwork *_artwork;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _systemIndex;
    NSString *_website;
    struct {
        unsigned int muid:1;
        unsigned int systemIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) GEOPBTransitArtwork *artwork; // @synthesize artwork=_artwork;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(retain, nonatomic) NSString *website; // @synthesize website=_website;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(nonatomic) unsigned int systemIndex; // @synthesize systemIndex=_systemIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasNameDisplayString;
@property(readonly, nonatomic) BOOL hasArtwork;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
@property(readonly, nonatomic) BOOL hasWebsite;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) BOOL hasSystemIndex;
- (id)identifier;
- (id)geoTransitSystem;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

