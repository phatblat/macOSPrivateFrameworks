//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDAutocompleteParametersAddressOnly, GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersBrandProfileSearch, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks, GEOPDAutocompleteParametersPoiAddressOnly, GEOPDAutocompleteParametersSiriSearch, GEOPDAutocompleteParametersVenueSearch, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteParametersAddressOnly *_addressOnly;
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;
    GEOPDAutocompleteParametersBrandProfileSearch *_brandProfileSearch;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    GEOPDAutocompleteParametersPoiAddressOnly *_poiAddressOnly;
    int _requestType;
    GEOPDAutocompleteParametersSiriSearch *_siriSearch;
    GEOPDAutocompleteParametersVenueSearch *_venueSearch;
    CDStruct_7c66fec0 _has;
}

@property(retain, nonatomic) GEOPDAutocompleteParametersPoiAddressOnly *poiAddressOnly; // @synthesize poiAddressOnly=_poiAddressOnly;
@property(retain, nonatomic) GEOPDAutocompleteParametersBrandProfileSearch *brandProfileSearch; // @synthesize brandProfileSearch=_brandProfileSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersVenueSearch *venueSearch; // @synthesize venueSearch=_venueSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersAddressOnly *addressOnly; // @synthesize addressOnly=_addressOnly;
@property(retain, nonatomic) GEOPDAutocompleteParametersSiriSearch *siriSearch; // @synthesize siriSearch=_siriSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse; // @synthesize allEntriesWithBrowse=_allEntriesWithBrowse;
@property(retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks; // @synthesize localitiesAndLandmarks=_localitiesAndLandmarks;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries; // @synthesize allEntries=_allEntries;
@property(retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries; // @synthesize fullEntries=_fullEntries;
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
@property(readonly, nonatomic) BOOL hasPoiAddressOnly;
@property(readonly, nonatomic) BOOL hasBrandProfileSearch;
@property(readonly, nonatomic) BOOL hasVenueSearch;
@property(readonly, nonatomic) BOOL hasAddressOnly;
@property(readonly, nonatomic) BOOL hasSiriSearch;
@property(readonly, nonatomic) BOOL hasAllEntriesWithBrowse;
@property(readonly, nonatomic) BOOL hasLocalitiesAndLandmarks;
@property(readonly, nonatomic) BOOL hasAllEntries;
@property(readonly, nonatomic) BOOL hasFullEntries;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestType;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;

@end

