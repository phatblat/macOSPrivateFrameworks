//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOBaseMapItem.h>

#import "GEOMapItem.h"

@class GEOAddress, GEOAddressObject, GEOAssociatedApp, GEOFeatureStyleAttributes, GEOMapItemClientAttributes, GEOMapItemContainedPlace, GEOMapItemDetourInfo, GEOMapItemIdentifier, GEOMapItemPhotosAttribution, GEOMapItemPlaceAttribution, GEOMapItemReviewsAttribution, GEOMapRegion, GEOMessageLink, GEOPDBusinessClaim, GEOPDFlyover, GEOPDPlace, GEOPlace, GEOPlaceResult, GEOPriceDescription, GEORestaurantFeaturesLink, NSArray, NSData, NSDate, NSDictionary, NSString, NSTimeZone, NSURL;

__attribute__((visibility("hidden")))
@interface _GEOPlaceItem : GEOBaseMapItem <GEOMapItem>
{
    GEOPlaceResult *_placeResult;
    GEOPlace *_place;
    GEOAddressObject *_addressObject;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_priceDescription) GEOPriceDescription *priceDescription;
@property(readonly, nonatomic, getter=_parsecSectionType) int parsecSectionType;
@property(readonly, nonatomic, getter=_associatedApp) GEOAssociatedApp *associatedApp;
@property(readonly, nonatomic) GEOMapItemDetourInfo *detourInfo;
@property(readonly, nonatomic, getter=_quickLinks) NSArray *quickLinks;
@property(readonly, nonatomic, getter=_messageLink) GEOMessageLink *messageLink;
@property(readonly, nonatomic, getter=_featureLink) GEORestaurantFeaturesLink *featureLink;
@property(readonly, nonatomic, getter=_hasFeatureLink) BOOL hasFeatureLink;
@property(readonly, nonatomic) NSArray *spatialMappedCategories;
@property(readonly, nonatomic, getter=_businessClaim) GEOPDBusinessClaim *businessClaim;
@property(readonly, nonatomic, getter=_hasBusinessClaim) BOOL hasBusinessClaim;
- (id)_mapItemByStrippingOptionalData;
@property(readonly, nonatomic, getter=_photos) NSArray *photos;
@property(readonly, nonatomic, getter=_reviews) NSArray *reviews;
- (id)_asPlaceInfo;
@property(readonly, nonatomic, getter=_additionalPlaceInfos) NSArray *additionalPlaceInfos;
@property(readonly, nonatomic, getter=_customIconID) unsigned long long customIconID;
@property(readonly, nonatomic, getter=_styleAttributes) GEOFeatureStyleAttributes *styleAttributes;
@property(readonly, nonatomic, getter=_reviewsAttribution) GEOMapItemReviewsAttribution *reviewsAttribution;
@property(readonly, nonatomic, getter=_photosAttribution) GEOMapItemPhotosAttribution *photosAttribution;
@property(readonly, nonatomic, getter=_attribution) GEOMapItemPlaceAttribution *attribution;
- (id)_yelpID;
@property(readonly, nonatomic, getter=_poiPinpointURLString) NSString *poiPinpointURLString;
@property(readonly, nonatomic, getter=_poiSurveyURLString) NSString *poiSurveyURLString;
- (id)_urlForWritingAReview;
- (id)_urlForReview:(id)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
@property(readonly, copy, nonatomic, getter=_vendorID) NSString *vendorID;
@property(readonly, copy, nonatomic, getter=_providerURL) NSURL *providerURL;
@property(readonly, copy, nonatomic, getter=_webURL) NSURL *webURL;
@property(readonly, nonatomic, getter=_needsAttribution) BOOL needsAttribution;
@property(readonly, nonatomic, getter=_encyclopedicInfo) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property(readonly, nonatomic, getter=_hasEncyclopedicInfo) BOOL hasEncyclopedicInfo;
@property(readonly, nonatomic, getter=_openingHoursOptions) unsigned long long openingHoursOptions;
@property(readonly, nonatomic, getter=_disambiguationName) NSString *disambiguationName;
@property(readonly, nonatomic, getter=_telephone) NSString *telephone;
@property(readonly, nonatomic, getter=_optsOutOfTelephoneAds) BOOL optsOutOfTelephoneAds;
@property(readonly, nonatomic, getter=_hasTelephone) BOOL hasTelephone;
@property(readonly, nonatomic, getter=_completeOperatingHours) NSArray *completeOperatingHours;
@property(readonly, nonatomic, getter=_operatingHours) NSArray *operatingHours;
@property(readonly, nonatomic, getter=_hasCurrentOperatingHours) BOOL hasCurrentOperatingHours;
@property(readonly, nonatomic, getter=_hasOperatingHours) BOOL hasOperatingHours;
@property(readonly, nonatomic, getter=_acceptsApplePay) BOOL acceptsApplePay;
@property(readonly, nonatomic, getter=_hasAcceptsApplePayAmenity) BOOL hasAcceptsApplePayAmenity;
@property(readonly, nonatomic, getter=_takesReservations) BOOL takesReservations;
@property(readonly, nonatomic, getter=_hasTakesReservationsAmenity) BOOL hasTakesReservationsAmenity;
@property(readonly, nonatomic, getter=_goodForKids) BOOL goodForKids;
@property(readonly, nonatomic, getter=_hasGoodForKidsAmenity) BOOL hasGoodForKidsAmenity;
@property(readonly, nonatomic, getter=_hasDelivery) BOOL hasDelivery;
@property(readonly, nonatomic, getter=_hasDeliveryAmenity) BOOL hasDeliveryAmenity;
@property(readonly, nonatomic, getter=_hasAnyAmenities) BOOL hasAnyAmenities;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
@property(readonly, nonatomic, getter=_childPlaces) NSArray *childPlaces;
@property(readonly, nonatomic, getter=_resultSnippetDistanceDisplayThreshold) unsigned int resultSnippetDistanceDisplayThreshold;
@property(readonly, nonatomic, getter=_resultSnippetLocationString) NSString *resultSnippetLocationString;
@property(readonly, nonatomic, getter=_priceRange) unsigned int priceRange;
@property(readonly, nonatomic, getter=_hasPriceRange) BOOL hasPriceRange;
@property(readonly, nonatomic, getter=_normalizedUserRatingScore) float normalizedUserRatingScore;
@property(readonly, nonatomic, getter=_sampleSizeForUserRatingScore) unsigned int sampleSizeForUserRatingScore;
@property(readonly, nonatomic, getter=_hasUserRatingScore) BOOL hasUserRatingScore;
@property(readonly, nonatomic, getter=_businessURL) NSString *businessURL;
@property(readonly, nonatomic, getter=_areaInMeters) double areaInMeters;
@property(readonly, nonatomic, getter=_hasAreaInMeters) BOOL hasAreaInMeters;
@property(readonly, nonatomic, getter=_identifier) GEOMapItemIdentifier *identifier;
@property(readonly, nonatomic, getter=_muid) unsigned long long muid;
@property(readonly, nonatomic, getter=_hasMUID) BOOL hasMUID;
@property(readonly, nonatomic, getter=_flyoverAnnouncementMessage) NSString *flyoverAnnouncementMessage;
@property(readonly, nonatomic, getter=_flyover) GEOPDFlyover *flyover;
@property(readonly, nonatomic, getter=_hasFlyover) BOOL hasFlyover;
@property(readonly, nonatomic, getter=_transitAttribution) id <GEOTransitAttribution> transitAttribution;
@property(readonly, nonatomic, getter=_transitInfo) id <GEOMapItemTransitInfo> transitInfo;
@property(readonly, nonatomic, getter=_hasTransit) BOOL hasTransit;
@property(readonly, nonatomic, getter=_resultProviderID) int resultProviderID;
@property(readonly, nonatomic, getter=_hasResultProviderID) BOOL hasResultProviderID;
@property(readonly, nonatomic, getter=_roadAccessPoints) NSArray *roadAccessPoints;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (BOOL)_hasTravelTimeForTransportType:(int)arg1;
- (int)_recommendedTransportType;
- (id)_spokenAddressForLocale:(id)arg1;
@property(readonly, nonatomic, getter=_addressGeocodeAccuracy) int addressGeocodeAccuracy;
@property(readonly, nonatomic) NSData *externalTransitStationCode;
- (id)weatherDisplayName;
- (id)addressObject;
@property(readonly, nonatomic) BOOL hasExpiredComponents;
@property(readonly, nonatomic, getter=_tips) NSArray *tips;
@property(readonly, nonatomic) GEOAddress *geoAddress;
@property(readonly, nonatomic, getter=_placeDataAsData) NSData *placeDataAsData;
@property(readonly, nonatomic, getter=_clientAttributes) GEOMapItemClientAttributes *clientAttributes;
@property(readonly, nonatomic, getter=_place) GEOPlace *place;
@property(readonly, nonatomic, getter=_placeType) int placeType;
@property(readonly, nonatomic, getter=_responseStatusIsIncomplete) BOOL responseStatusIncomplete;
@property(readonly, nonatomic, getter=_hasResolvablePartialInformation) BOOL hasResolvablePartialInformation;
@property(readonly, nonatomic, getter=_placeData) GEOPDPlace *placeData;
@property(readonly, nonatomic) BOOL isEventAllDay;
@property(readonly, nonatomic) NSDate *eventDate;
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) BOOL contactIsMe;
@property(readonly, nonatomic) NSString *contactSpokenName;
@property(readonly, nonatomic) NSString *contactName;
@property(readonly, nonatomic) int contactAddressType;
@property(readonly, nonatomic) NSTimeZone *timezone;
@property(readonly, nonatomic) NSArray *areasOfInterest;
@property(readonly, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) GEOMapRegion *geoFenceMapRegion;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegionOrNil;
@property(readonly, nonatomic) GEOMapRegion *displayMapRegion;
@property(readonly, nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, nonatomic, getter=isDisputed) BOOL disputed;
@property(readonly, nonatomic) NSData *encodedData;
- (id)spokenNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) int referenceFrame;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (BOOL)isEqualToMapItem:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlaceResult:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=_browseCategories) NSArray *browseCategories;
@property(readonly, nonatomic, getter=_containedPlace) GEOMapItemContainedPlace *containedPlace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) float displayMaxZoom;
@property(readonly, nonatomic) float displayMinZoom;
@property(readonly, nonatomic) BOOL hasDisplayMaxZoom;
@property(readonly, nonatomic) BOOL hasDisplayMinZoom;
@property(readonly, nonatomic, getter=_hasVenueFeatureType) BOOL hasVenueFeatureType;
@property(readonly, nonatomic, getter=_hasWifiFingerprintConfidence) BOOL hasWifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelStatusCode) BOOL hasWifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_hasWifiFingerprintLabelType) BOOL hasWifiFingerprintLabelType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=_isInLinkedPlaceRelationship) BOOL inLinkedPlaceRelationship;
@property(readonly, nonatomic, getter=_isStandaloneBrand) BOOL isStandAloneBrand;
@property(readonly, nonatomic, getter=_isTransitDisplayFeature) BOOL isTransitDisplayFeature;
@property(readonly, nonatomic, getter=_placeDisplayStyle) int placeDisplayStyle;
@property(readonly, nonatomic, getter=_placeDisplayType) int placeDisplayType;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=_venueFeatureType) int venueFeatureType;
@property(readonly, nonatomic, getter=_venueInfo) id <GEOMapItemVenueInfo> venueInfo;
@property(readonly, nonatomic, getter=_wifiFingerprintConfidence) unsigned int wifiFingerprintConfidence;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelStatusCode) int wifiFingerprintLabelStatusCode;
@property(readonly, nonatomic, getter=_wifiFingerprintLabelType) int wifiFingerprintLabelType;

@end

