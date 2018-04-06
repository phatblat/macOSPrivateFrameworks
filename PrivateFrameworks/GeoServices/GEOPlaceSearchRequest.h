//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEOAdditionalEnabledMarkets, GEOAddress, GEOBusinessOptions, GEOClientCapabilities, GEOIndexQueryNode, GEOLatLng, GEOLocation, GEOMapRegion, GEOSearchSubstring, GEOSuggestionsOptions, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPlaceSearchRequest : PBRequest <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOSessionID _sessionGUID;
    CDStruct_95bda58d _additionalPlaceTypes;
    CDStruct_62a50c50 _businessIDs;
    CDStruct_95bda58d _optionalSuppressionReasons;
    long long _geoId;
    unsigned long long _intersectingGeoId;
    double _timeSinceMapEnteredForeground;
    double _timeSinceMapViewportChanged;
    double _timestamp;
    GEOAdditionalEnabledMarkets *_additionalEnabledMarkets;
    GEOAddress *_address;
    GEOBusinessOptions *_businessOptions;
    int _businessSortOrder;
    GEOClientCapabilities *_clientCapabilities;
    NSString *_deviceCountryCode;
    GEOLatLng *_deviceLocation;
    NSString *_deviceLocationCountryCode;
    NSString *_deviceTimeZone;
    NSMutableArray *_filterByBusinessCategorys;
    GEOIndexQueryNode *_indexFilter;
    NSString *_inputLanguage;
    int _knownAccuracy;
    GEOLatLng *_knownLocation;
    NSMutableArray *_limitToCountryCodeIso2s;
    int _localSearchProviderID;
    GEOLocation *_location;
    int _mapMode;
    GEOMapRegion *_mapRegion;
    int _maxBusinessReviews;
    int _maxResults;
    NSString *_phoneticLocaleIdentifier;
    int _placeTypeLimit;
    GEOAddress *_preserveFields;
    NSString *_search;
    NSString *_searchContext;
    GEOSearchSubstring *_searchContextSubstring;
    GEOLatLng *_searchLocation;
    int _searchSource;
    NSMutableArray *_searchSubstrings;
    int _sequenceNumber;
    NSMutableArray *_serviceTags;
    GEOSuggestionsOptions *_suggestionsOptions;
    NSString *_suggestionsPrefix;
    int _transportTypeForTravelTimes;
    NSString *_viewportCenterCountryCode;
    NSData *_zilchPoints;
    BOOL _excludeAddressInResults;
    BOOL _includeBusinessCategories;
    BOOL _includeBusinessRating;
    BOOL _includeEntryPoints;
    BOOL _includeFeatureSets;
    BOOL _includeGeoId;
    BOOL _includeMatchedToken;
    BOOL _includeNameForForwardGeocodingResults;
    BOOL _includePhonetics;
    BOOL _includeQuads;
    BOOL _includeRoadAccessPoints;
    BOOL _includeSpokenNames;
    BOOL _includeStatusCodeInfo;
    BOOL _includeSuggestionsOnly;
    BOOL _includeTravelDistance;
    BOOL _includeTravelTime;
    BOOL _includeUnmatchedStrings;
    BOOL _isCanonicalLocationSearch;
    BOOL _isFromAPI;
    BOOL _isPopularNearbyRequest;
    BOOL _isStrictGeocoding;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
    BOOL _suppressResultsRequiringAttribution;
    struct {
        unsigned int sessionGUID:1;
        unsigned int geoId:1;
        unsigned int intersectingGeoId:1;
        unsigned int timeSinceMapEnteredForeground:1;
        unsigned int timeSinceMapViewportChanged:1;
        unsigned int timestamp:1;
        unsigned int businessSortOrder:1;
        unsigned int knownAccuracy:1;
        unsigned int localSearchProviderID:1;
        unsigned int mapMode:1;
        unsigned int maxBusinessReviews:1;
        unsigned int maxResults:1;
        unsigned int placeTypeLimit:1;
        unsigned int searchSource:1;
        unsigned int sequenceNumber:1;
        unsigned int transportTypeForTravelTimes:1;
        unsigned int excludeAddressInResults:1;
        unsigned int includeBusinessCategories:1;
        unsigned int includeBusinessRating:1;
        unsigned int includeEntryPoints:1;
        unsigned int includeFeatureSets:1;
        unsigned int includeGeoId:1;
        unsigned int includeMatchedToken:1;
        unsigned int includeNameForForwardGeocodingResults:1;
        unsigned int includePhonetics:1;
        unsigned int includeQuads:1;
        unsigned int includeRoadAccessPoints:1;
        unsigned int includeSpokenNames:1;
        unsigned int includeStatusCodeInfo:1;
        unsigned int includeSuggestionsOnly:1;
        unsigned int includeTravelDistance:1;
        unsigned int includeTravelTime:1;
        unsigned int includeUnmatchedStrings:1;
        unsigned int isCanonicalLocationSearch:1;
        unsigned int isFromAPI:1;
        unsigned int isPopularNearbyRequest:1;
        unsigned int isStrictGeocoding:1;
        unsigned int isStrictMapRegion:1;
        unsigned int structuredSearch:1;
        unsigned int suppressResultsRequiringAttribution:1;
    } _has;
}

+ (Class)serviceTagType;
+ (Class)searchSubstringType;
+ (Class)limitToCountryCodeIso2Type;
+ (Class)filterByBusinessCategoryType;
@property(retain, nonatomic) NSString *viewportCenterCountryCode; // @synthesize viewportCenterCountryCode=_viewportCenterCountryCode;
@property(retain, nonatomic) NSString *deviceLocationCountryCode; // @synthesize deviceLocationCountryCode=_deviceLocationCountryCode;
@property(nonatomic) BOOL isPopularNearbyRequest; // @synthesize isPopularNearbyRequest=_isPopularNearbyRequest;
@property(retain, nonatomic) GEOAdditionalEnabledMarkets *additionalEnabledMarkets; // @synthesize additionalEnabledMarkets=_additionalEnabledMarkets;
@property(nonatomic) BOOL includeNameForForwardGeocodingResults; // @synthesize includeNameForForwardGeocodingResults=_includeNameForForwardGeocodingResults;
@property(retain, nonatomic) GEOLatLng *searchLocation; // @synthesize searchLocation=_searchLocation;
@property(nonatomic) BOOL includeMatchedToken; // @synthesize includeMatchedToken=_includeMatchedToken;
@property(retain, nonatomic) GEOLatLng *knownLocation; // @synthesize knownLocation=_knownLocation;
@property(nonatomic) unsigned long long intersectingGeoId; // @synthesize intersectingGeoId=_intersectingGeoId;
@property(retain, nonatomic) NSMutableArray *serviceTags; // @synthesize serviceTags=_serviceTags;
@property(nonatomic) BOOL includeFeatureSets; // @synthesize includeFeatureSets=_includeFeatureSets;
@property(retain, nonatomic) GEOIndexQueryNode *indexFilter; // @synthesize indexFilter=_indexFilter;
@property(nonatomic) BOOL includeUnmatchedStrings; // @synthesize includeUnmatchedStrings=_includeUnmatchedStrings;
@property(retain, nonatomic) GEOAddress *preserveFields; // @synthesize preserveFields=_preserveFields;
@property(nonatomic) BOOL includeStatusCodeInfo; // @synthesize includeStatusCodeInfo=_includeStatusCodeInfo;
@property(retain, nonatomic) GEOSearchSubstring *searchContextSubstring; // @synthesize searchContextSubstring=_searchContextSubstring;
@property(retain, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
@property(nonatomic) BOOL includeGeoId; // @synthesize includeGeoId=_includeGeoId;
@property(retain, nonatomic) NSMutableArray *searchSubstrings; // @synthesize searchSubstrings=_searchSubstrings;
@property(nonatomic) BOOL excludeAddressInResults; // @synthesize excludeAddressInResults=_excludeAddressInResults;
@property(nonatomic) BOOL includeQuads; // @synthesize includeQuads=_includeQuads;
@property(nonatomic) long long geoId; // @synthesize geoId=_geoId;
@property(nonatomic) BOOL isCanonicalLocationSearch; // @synthesize isCanonicalLocationSearch=_isCanonicalLocationSearch;
@property(retain, nonatomic) NSMutableArray *limitToCountryCodeIso2s; // @synthesize limitToCountryCodeIso2s=_limitToCountryCodeIso2s;
@property(nonatomic) BOOL includeRoadAccessPoints; // @synthesize includeRoadAccessPoints=_includeRoadAccessPoints;
@property(nonatomic) BOOL includeTravelDistance; // @synthesize includeTravelDistance=_includeTravelDistance;
@property(nonatomic) BOOL isStrictGeocoding; // @synthesize isStrictGeocoding=_isStrictGeocoding;
@property(retain, nonatomic) GEOSuggestionsOptions *suggestionsOptions; // @synthesize suggestionsOptions=_suggestionsOptions;
@property(nonatomic) BOOL includeTravelTime; // @synthesize includeTravelTime=_includeTravelTime;
@property(retain, nonatomic) GEOClientCapabilities *clientCapabilities; // @synthesize clientCapabilities=_clientCapabilities;
@property(retain, nonatomic) NSString *deviceTimeZone; // @synthesize deviceTimeZone=_deviceTimeZone;
@property(nonatomic) BOOL includeSpokenNames; // @synthesize includeSpokenNames=_includeSpokenNames;
@property(nonatomic) double timeSinceMapViewportChanged; // @synthesize timeSinceMapViewportChanged=_timeSinceMapViewportChanged;
@property(nonatomic) double timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(nonatomic) BOOL isFromAPI; // @synthesize isFromAPI=_isFromAPI;
@property(nonatomic) BOOL suppressResultsRequiringAttribution; // @synthesize suppressResultsRequiringAttribution=_suppressResultsRequiringAttribution;
@property(nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSString *phoneticLocaleIdentifier; // @synthesize phoneticLocaleIdentifier=_phoneticLocaleIdentifier;
@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;
@property(retain, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property(retain, nonatomic) NSString *suggestionsPrefix; // @synthesize suggestionsPrefix=_suggestionsPrefix;
@property(nonatomic) BOOL structuredSearch; // @synthesize structuredSearch=_structuredSearch;
@property(nonatomic) BOOL includeSuggestionsOnly; // @synthesize includeSuggestionsOnly=_includeSuggestionsOnly;
@property(nonatomic) int localSearchProviderID; // @synthesize localSearchProviderID=_localSearchProviderID;
@property(retain, nonatomic) GEOBusinessOptions *businessOptions; // @synthesize businessOptions=_businessOptions;
@property(nonatomic) BOOL includeEntryPoints; // @synthesize includeEntryPoints=_includeEntryPoints;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL isStrictMapRegion; // @synthesize isStrictMapRegion=_isStrictMapRegion;
@property(retain, nonatomic) NSMutableArray *filterByBusinessCategorys; // @synthesize filterByBusinessCategorys=_filterByBusinessCategorys;
@property(nonatomic) int maxBusinessReviews; // @synthesize maxBusinessReviews=_maxBusinessReviews;
@property(nonatomic) BOOL includeBusinessCategories; // @synthesize includeBusinessCategories=_includeBusinessCategories;
@property(nonatomic) BOOL includeBusinessRating; // @synthesize includeBusinessRating=_includeBusinessRating;
@property(nonatomic) struct GEOSessionID sessionGUID; // @synthesize sessionGUID=_sessionGUID;
@property(nonatomic) BOOL includePhonetics; // @synthesize includePhonetics=_includePhonetics;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(retain, nonatomic) NSString *search; // @synthesize search=_search;
@property(retain, nonatomic) GEOLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasViewportCenterCountryCode;
@property(readonly, nonatomic) BOOL hasDeviceLocationCountryCode;
@property(nonatomic) BOOL hasIsPopularNearbyRequest;
- (int)StringAsMapMode:(id)arg1;
- (id)mapModeAsString:(int)arg1;
@property(nonatomic) BOOL hasMapMode;
@property(nonatomic) int mapMode; // @synthesize mapMode=_mapMode;
@property(readonly, nonatomic) BOOL hasAdditionalEnabledMarkets;
@property(nonatomic) BOOL hasIncludeNameForForwardGeocodingResults;
@property(readonly, nonatomic) BOOL hasSearchLocation;
- (int)StringAsOptionalSuppressionReasons:(id)arg1;
- (id)optionalSuppressionReasonsAsString:(int)arg1;
- (void)setOptionalSuppressionReasons:(int *)arg1 count:(unsigned long long)arg2;
- (int)optionalSuppressionReasonAtIndex:(unsigned long long)arg1;
- (void)addOptionalSuppressionReason:(int)arg1;
- (void)clearOptionalSuppressionReasons;
@property(readonly, nonatomic) int *optionalSuppressionReasons;
@property(readonly, nonatomic) unsigned long long optionalSuppressionReasonsCount;
- (int)StringAsSearchSource:(id)arg1;
- (id)searchSourceAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchSource;
@property(nonatomic) int searchSource; // @synthesize searchSource=_searchSource;
@property(nonatomic) BOOL hasIncludeMatchedToken;
- (int)StringAsKnownAccuracy:(id)arg1;
- (id)knownAccuracyAsString:(int)arg1;
@property(nonatomic) BOOL hasKnownAccuracy;
@property(nonatomic) int knownAccuracy; // @synthesize knownAccuracy=_knownAccuracy;
@property(readonly, nonatomic) BOOL hasKnownLocation;
@property(nonatomic) BOOL hasIntersectingGeoId;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceTagsCount;
- (void)addServiceTag:(id)arg1;
- (void)clearServiceTags;
@property(nonatomic) BOOL hasIncludeFeatureSets;
@property(readonly, nonatomic) BOOL hasIndexFilter;
@property(nonatomic) BOOL hasIncludeUnmatchedStrings;
@property(readonly, nonatomic) BOOL hasPreserveFields;
@property(nonatomic) BOOL hasIncludeStatusCodeInfo;
@property(readonly, nonatomic) BOOL hasSearchContextSubstring;
@property(readonly, nonatomic) BOOL hasSearchContext;
@property(nonatomic) BOOL hasIncludeGeoId;
- (id)searchSubstringAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchSubstringsCount;
- (void)addSearchSubstring:(id)arg1;
- (void)clearSearchSubstrings;
@property(nonatomic) BOOL hasExcludeAddressInResults;
@property(nonatomic) BOOL hasIncludeQuads;
@property(nonatomic) BOOL hasGeoId;
@property(nonatomic) BOOL hasIsCanonicalLocationSearch;
- (id)limitToCountryCodeIso2AtIndex:(unsigned long long)arg1;
- (unsigned long long)limitToCountryCodeIso2sCount;
- (void)addLimitToCountryCodeIso2:(id)arg1;
- (void)clearLimitToCountryCodeIso2s;
@property(nonatomic) BOOL hasIncludeRoadAccessPoints;
@property(nonatomic) BOOL hasIncludeTravelDistance;
@property(nonatomic) BOOL hasIsStrictGeocoding;
- (int)StringAsPlaceTypeLimit:(id)arg1;
- (id)placeTypeLimitAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceTypeLimit;
@property(nonatomic) int placeTypeLimit; // @synthesize placeTypeLimit=_placeTypeLimit;
@property(readonly, nonatomic) BOOL hasSuggestionsOptions;
- (int)StringAsTransportTypeForTravelTimes:(id)arg1;
- (id)transportTypeForTravelTimesAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportTypeForTravelTimes;
@property(nonatomic) int transportTypeForTravelTimes; // @synthesize transportTypeForTravelTimes=_transportTypeForTravelTimes;
@property(nonatomic) BOOL hasIncludeTravelTime;
@property(readonly, nonatomic) BOOL hasClientCapabilities;
@property(readonly, nonatomic) BOOL hasDeviceTimeZone;
@property(nonatomic) BOOL hasIncludeSpokenNames;
@property(nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property(nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property(nonatomic) BOOL hasIsFromAPI;
@property(nonatomic) BOOL hasSuppressResultsRequiringAttribution;
@property(nonatomic) BOOL hasSequenceNumber;
@property(readonly, nonatomic) BOOL hasPhoneticLocaleIdentifier;
@property(readonly, nonatomic) BOOL hasInputLanguage;
@property(readonly, nonatomic) BOOL hasDeviceLocation;
@property(readonly, nonatomic) BOOL hasDeviceCountryCode;
@property(readonly, nonatomic) BOOL hasSuggestionsPrefix;
@property(nonatomic) BOOL hasStructuredSearch;
@property(nonatomic) BOOL hasIncludeSuggestionsOnly;
@property(nonatomic) BOOL hasLocalSearchProviderID;
@property(readonly, nonatomic) BOOL hasBusinessOptions;
@property(nonatomic) BOOL hasIncludeEntryPoints;
@property(readonly, nonatomic) BOOL hasZilchPoints;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) BOOL hasIsStrictMapRegion;
- (id)filterByBusinessCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)filterByBusinessCategorysCount;
- (void)addFilterByBusinessCategory:(id)arg1;
- (void)clearFilterByBusinessCategorys;
@property(nonatomic) BOOL hasMaxBusinessReviews;
@property(nonatomic) BOOL hasIncludeBusinessCategories;
@property(nonatomic) BOOL hasIncludeBusinessRating;
- (int)StringAsBusinessSortOrder:(id)arg1;
- (id)businessSortOrderAsString:(int)arg1;
@property(nonatomic) BOOL hasBusinessSortOrder;
@property(nonatomic) int businessSortOrder; // @synthesize businessSortOrder=_businessSortOrder;
@property(nonatomic) BOOL hasSessionGUID;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) BOOL hasIncludePhonetics;
- (int)StringAsAdditionalPlaceTypes:(id)arg1;
- (id)additionalPlaceTypesAsString:(int)arg1;
- (void)setAdditionalPlaceTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)additionalPlaceTypeAtIndex:(unsigned long long)arg1;
- (void)addAdditionalPlaceType:(int)arg1;
- (void)clearAdditionalPlaceTypes;
@property(readonly, nonatomic) int *additionalPlaceTypes;
@property(readonly, nonatomic) unsigned long long additionalPlaceTypesCount;
@property(readonly, nonatomic) BOOL hasMapRegion;
@property(readonly, nonatomic) BOOL hasSearch;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)setBusinessIDs:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)businessIDAtIndex:(unsigned long long)arg1;
- (void)addBusinessID:(unsigned long long)arg1;
- (void)clearBusinessIDs;
@property(readonly, nonatomic) unsigned long long *businessIDs;
@property(readonly, nonatomic) unsigned long long businessIDsCount;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end
