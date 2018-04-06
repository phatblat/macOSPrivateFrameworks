//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "GEOTransitNamedItem.h"
#import "NSCopying.h"

@class GEOPBTransitArtwork, GEOPBTransitLineDisplayHints, GEOStyleAttributes, NSString, PBUnknownFields;

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _muid;
    struct GEOPBTransitTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    GEOPBTransitArtwork *_alternateArtwork;
    GEOPBTransitArtwork *_artwork;
    GEOPBTransitLineDisplayHints *_displayHints;
    int _guidanceSnappingType;
    NSString *_lineColor;
    unsigned int _lineIndex;
    GEOPBTransitArtwork *_modeArtwork;
    NSString *_nameDisplayString;
    int _placeDisplayStyle;
    int _preferredDepartureTimeStyle;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _systemIndex;
    int _transitType;
    struct {
        unsigned int muid:1;
        unsigned int guidanceSnappingType:1;
        unsigned int lineIndex:1;
        unsigned int placeDisplayStyle:1;
        unsigned int preferredDepartureTimeStyle:1;
        unsigned int systemIndex:1;
        unsigned int transitType:1;
    } _has;
}

@property(retain, nonatomic) NSString *nameDisplayString; // @synthesize nameDisplayString=_nameDisplayString;
@property(retain, nonatomic) GEOPBTransitLineDisplayHints *displayHints; // @synthesize displayHints=_displayHints;
@property(retain, nonatomic) GEOStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property(nonatomic) int transitType; // @synthesize transitType=_transitType;
@property(nonatomic) unsigned int systemIndex; // @synthesize systemIndex=_systemIndex;
@property(retain, nonatomic) NSString *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) GEOPBTransitArtwork *alternateArtwork; // @synthesize alternateArtwork=_alternateArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *modeArtwork; // @synthesize modeArtwork=_modeArtwork;
@property(retain, nonatomic) GEOPBTransitArtwork *artwork; // @synthesize artwork=_artwork;
@property(nonatomic) unsigned int lineIndex; // @synthesize lineIndex=_lineIndex;
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
- (int)StringAsPlaceDisplayStyle:(id)arg1;
- (id)placeDisplayStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceDisplayStyle;
@property(nonatomic) int placeDisplayStyle; // @synthesize placeDisplayStyle=_placeDisplayStyle;
@property(readonly, nonatomic) BOOL hasNameDisplayString;
@property(readonly, nonatomic) BOOL hasDisplayHints;
- (void)setOperatingHours:(struct GEOPBTransitTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPBTransitTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPBTransitTimeRange)arg1;
- (void)clearOperatingHours;
@property(readonly, nonatomic) struct GEOPBTransitTimeRange *operatingHours;
@property(readonly, nonatomic) unsigned long long operatingHoursCount;
@property(readonly, nonatomic) BOOL hasStyleAttributes;
- (int)StringAsPreferredDepartureTimeStyle:(id)arg1;
- (id)preferredDepartureTimeStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasPreferredDepartureTimeStyle;
@property(nonatomic) int preferredDepartureTimeStyle; // @synthesize preferredDepartureTimeStyle=_preferredDepartureTimeStyle;
@property(nonatomic) BOOL hasTransitType;
@property(nonatomic) BOOL hasSystemIndex;
@property(readonly, nonatomic) BOOL hasLineColor;
- (int)StringAsGuidanceSnappingType:(id)arg1;
- (id)guidanceSnappingTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasGuidanceSnappingType;
@property(nonatomic) int guidanceSnappingType; // @synthesize guidanceSnappingType=_guidanceSnappingType;
@property(nonatomic) BOOL hasMuid;
@property(readonly, nonatomic) BOOL hasAlternateArtwork;
@property(readonly, nonatomic) BOOL hasModeArtwork;
@property(readonly, nonatomic) BOOL hasArtwork;
@property(nonatomic) BOOL hasLineIndex;
- (void)dealloc;
- (id)identifier;
- (id)geoTransitLineWithSystem:(id)arg1;
- (id)bestName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
