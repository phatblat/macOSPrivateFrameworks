//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDAutocompleteFilter, GEOPDAutocompleteParametersAddressOnly, GEOPDAutocompleteParametersAllEntries, GEOPDAutocompleteParametersAllEntriesWithBrowse, GEOPDAutocompleteParametersBrandProfileSearch, GEOPDAutocompleteParametersFullEntriesOnly, GEOPDAutocompleteParametersLocalitiesAndLandmarks, GEOPDAutocompleteParametersOfflineRegionSearch, GEOPDAutocompleteParametersPoiAddressOnly, GEOPDAutocompleteParametersSiriSearch, GEOPDAutocompleteParametersVenueSearch, GEOPDAutocompleteSessionData, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAutocompleteParametersAddressOnly *_addressOnly;
    GEOPDAutocompleteParametersAllEntriesWithBrowse *_allEntriesWithBrowse;
    GEOPDAutocompleteParametersAllEntries *_allEntries;
    GEOPDAutocompleteFilter *_autocompleteFilter;
    GEOPDAutocompleteSessionData *_autocompleteSessionData;
    GEOPDAutocompleteParametersBrandProfileSearch *_brandProfileSearch;
    GEOPDAutocompleteParametersFullEntriesOnly *_fullEntries;
    GEOPDAutocompleteParametersLocalitiesAndLandmarks *_localitiesAndLandmarks;
    GEOPDAutocompleteParametersOfflineRegionSearch *_offlineRegionSearch;
    GEOPDAutocompleteParametersPoiAddressOnly *_poiAddressOnly;
    GEOPDAutocompleteParametersSiriSearch *_siriSearch;
    GEOPDAutocompleteParametersVenueSearch *_venueSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _requestType;
    BOOL _shouldPopulateMapsIdentifier;
    BOOL _supportAutocompleteSessionData;
    struct {
        unsigned int has_requestType:1;
        unsigned int has_shouldPopulateMapsIdentifier:1;
        unsigned int has_supportAutocompleteSessionData:1;
        unsigned int read_unknownFields:1;
        unsigned int read_addressOnly:1;
        unsigned int read_allEntriesWithBrowse:1;
        unsigned int read_allEntries:1;
        unsigned int read_autocompleteFilter:1;
        unsigned int read_autocompleteSessionData:1;
        unsigned int read_brandProfileSearch:1;
        unsigned int read_fullEntries:1;
        unsigned int read_localitiesAndLandmarks:1;
        unsigned int read_offlineRegionSearch:1;
        unsigned int read_poiAddressOnly:1;
        unsigned int read_siriSearch:1;
        unsigned int read_venueSearch:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addressOnly:1;
        unsigned int wrote_allEntriesWithBrowse:1;
        unsigned int wrote_allEntries:1;
        unsigned int wrote_autocompleteFilter:1;
        unsigned int wrote_autocompleteSessionData:1;
        unsigned int wrote_brandProfileSearch:1;
        unsigned int wrote_fullEntries:1;
        unsigned int wrote_localitiesAndLandmarks:1;
        unsigned int wrote_offlineRegionSearch:1;
        unsigned int wrote_poiAddressOnly:1;
        unsigned int wrote_siriSearch:1;
        unsigned int wrote_venueSearch:1;
        unsigned int wrote_requestType:1;
        unsigned int wrote_shouldPopulateMapsIdentifier:1;
        unsigned int wrote_supportAutocompleteSessionData:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOPDAutocompleteSessionData *autocompleteSessionData;
@property(readonly, nonatomic) BOOL hasAutocompleteSessionData;
- (void)_readAutocompleteSessionData;
@property(nonatomic) BOOL hasSupportAutocompleteSessionData;
@property(nonatomic) BOOL supportAutocompleteSessionData;
@property(nonatomic) BOOL hasShouldPopulateMapsIdentifier;
@property(nonatomic) BOOL shouldPopulateMapsIdentifier;
@property(retain, nonatomic) GEOPDAutocompleteFilter *autocompleteFilter;
@property(readonly, nonatomic) BOOL hasAutocompleteFilter;
- (void)_readAutocompleteFilter;
@property(retain, nonatomic) GEOPDAutocompleteParametersPoiAddressOnly *poiAddressOnly;
@property(readonly, nonatomic) BOOL hasPoiAddressOnly;
- (void)_readPoiAddressOnly;
@property(retain, nonatomic) GEOPDAutocompleteParametersOfflineRegionSearch *offlineRegionSearch;
@property(readonly, nonatomic) BOOL hasOfflineRegionSearch;
- (void)_readOfflineRegionSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersBrandProfileSearch *brandProfileSearch;
@property(readonly, nonatomic) BOOL hasBrandProfileSearch;
- (void)_readBrandProfileSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersVenueSearch *venueSearch;
@property(readonly, nonatomic) BOOL hasVenueSearch;
- (void)_readVenueSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersAddressOnly *addressOnly;
@property(readonly, nonatomic) BOOL hasAddressOnly;
- (void)_readAddressOnly;
@property(retain, nonatomic) GEOPDAutocompleteParametersSiriSearch *siriSearch;
@property(readonly, nonatomic) BOOL hasSiriSearch;
- (void)_readSiriSearch;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntriesWithBrowse *allEntriesWithBrowse;
@property(readonly, nonatomic) BOOL hasAllEntriesWithBrowse;
- (void)_readAllEntriesWithBrowse;
@property(retain, nonatomic) GEOPDAutocompleteParametersLocalitiesAndLandmarks *localitiesAndLandmarks;
@property(readonly, nonatomic) BOOL hasLocalitiesAndLandmarks;
- (void)_readLocalitiesAndLandmarks;
@property(retain, nonatomic) GEOPDAutocompleteParametersAllEntries *allEntries;
@property(readonly, nonatomic) BOOL hasAllEntries;
- (void)_readAllEntries;
@property(retain, nonatomic) GEOPDAutocompleteParametersFullEntriesOnly *fullEntries;
@property(readonly, nonatomic) BOOL hasFullEntries;
- (void)_readFullEntries;
- (int)StringAsRequestType:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestType;
@property(nonatomic) int requestType;
- (id)initWithData:(id)arg1;
- (id)init;

@end

