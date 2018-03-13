//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, GEOPDNearestTransitParameters, GEOPDViewportInfo, NSString, PBUnknownFields;

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxResults;
    GEOPDNearestTransitParameters *_nearestTransitParameters;
    GEOLatLng *_searchLocation;
    NSString *_searchString;
    int _searchType;
    int _sortOrder;
    GEOPDViewportInfo *_viewportInfo;
    struct {
        unsigned int maxResults:1;
        unsigned int searchType:1;
        unsigned int sortOrder:1;
    } _has;
}

@property(retain, nonatomic) GEOPDNearestTransitParameters *nearestTransitParameters; // @synthesize nearestTransitParameters=_nearestTransitParameters;
@property(retain, nonatomic) GEOLatLng *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
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
@property(readonly, nonatomic) BOOL hasNearestTransitParameters;
- (int)StringAsSearchType:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchType;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
@property(readonly, nonatomic) BOOL hasSearchLocation;
@property(readonly, nonatomic) BOOL hasViewportInfo;
@property(readonly, nonatomic) BOOL hasSearchString;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) unsigned int maxResults; // @synthesize maxResults=_maxResults;
- (int)StringAsSortOrder:(id)arg1;
- (id)sortOrderAsString:(int)arg1;
@property(nonatomic) BOOL hasSortOrder;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;

@end

