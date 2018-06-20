//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEntity : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _placeLookupCategorys;
    unsigned long long _brandMuid;
    NSMutableArray *_altFaxs;
    NSMutableArray *_altTelephones;
    NSMutableArray *_altUrls;
    int _capacity;
    int _displayStyle;
    NSString *_fax;
    NSMutableArray *_localizedCategorys;
    NSMutableArray *_names;
    int _placeDisplayType;
    int _searchSection;
    NSMutableArray *_spokenNames;
    NSString *_telephone;
    int _type;
    NSString *_url;
    BOOL _altTelephoneAdsOptOut;
    BOOL _isDisputed;
    BOOL _isPermanentlyClosed;
    BOOL _isStandaloneBrand;
    BOOL _telephoneAdsOptOut;
    struct {
        unsigned int brandMuid:1;
        unsigned int capacity:1;
        unsigned int displayStyle:1;
        unsigned int placeDisplayType:1;
        unsigned int searchSection:1;
        unsigned int type:1;
        unsigned int altTelephoneAdsOptOut:1;
        unsigned int isDisputed:1;
        unsigned int isPermanentlyClosed:1;
        unsigned int isStandaloneBrand:1;
        unsigned int telephoneAdsOptOut:1;
    } _has;
}

+ (Class)localizedCategoryType;
+ (Class)spokenNameType;
+ (Class)nameType;
+ (Class)altUrlType;
+ (Class)altFaxType;
+ (Class)altTelephoneType;
+ (id)entityForPlaceData:(id)arg1;
@property(nonatomic) int capacity; // @synthesize capacity=_capacity;
@property(nonatomic) unsigned long long brandMuid; // @synthesize brandMuid=_brandMuid;
@property(nonatomic) BOOL isStandaloneBrand; // @synthesize isStandaloneBrand=_isStandaloneBrand;
@property(nonatomic) BOOL altTelephoneAdsOptOut; // @synthesize altTelephoneAdsOptOut=_altTelephoneAdsOptOut;
@property(nonatomic) BOOL telephoneAdsOptOut; // @synthesize telephoneAdsOptOut=_telephoneAdsOptOut;
@property(retain, nonatomic) NSMutableArray *localizedCategorys; // @synthesize localizedCategorys=_localizedCategorys;
@property(retain, nonatomic) NSMutableArray *spokenNames; // @synthesize spokenNames=_spokenNames;
@property(retain, nonatomic) NSMutableArray *names; // @synthesize names=_names;
@property(nonatomic) BOOL isDisputed; // @synthesize isDisputed=_isDisputed;
@property(nonatomic) BOOL isPermanentlyClosed; // @synthesize isPermanentlyClosed=_isPermanentlyClosed;
@property(retain, nonatomic) NSMutableArray *altUrls; // @synthesize altUrls=_altUrls;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableArray *altFaxs; // @synthesize altFaxs=_altFaxs;
@property(retain, nonatomic) NSString *fax; // @synthesize fax=_fax;
@property(retain, nonatomic) NSMutableArray *altTelephones; // @synthesize altTelephones=_altTelephones;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
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
- (int)StringAsPlaceLookupCategorys:(id)arg1;
- (id)placeLookupCategorysAsString:(int)arg1;
- (void)setPlaceLookupCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (int)placeLookupCategoryAtIndex:(unsigned long long)arg1;
- (void)addPlaceLookupCategory:(int)arg1;
- (void)clearPlaceLookupCategorys;
@property(readonly, nonatomic) int *placeLookupCategorys;
@property(readonly, nonatomic) unsigned long long placeLookupCategorysCount;
@property(nonatomic) BOOL hasCapacity;
@property(nonatomic) BOOL hasBrandMuid;
- (int)StringAsPlaceDisplayType:(id)arg1;
- (id)placeDisplayTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceDisplayType;
@property(nonatomic) int placeDisplayType; // @synthesize placeDisplayType=_placeDisplayType;
- (int)StringAsSearchSection:(id)arg1;
- (id)searchSectionAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchSection;
@property(nonatomic) int searchSection; // @synthesize searchSection=_searchSection;
- (int)StringAsDisplayStyle:(id)arg1;
- (id)displayStyleAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayStyle;
@property(nonatomic) int displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) BOOL hasIsStandaloneBrand;
@property(nonatomic) BOOL hasAltTelephoneAdsOptOut;
@property(nonatomic) BOOL hasTelephoneAdsOptOut;
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
- (id)spokenNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNamesCount;
- (void)addSpokenName:(id)arg1;
- (void)clearSpokenNames;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (void)addName:(id)arg1;
- (void)clearNames;
@property(nonatomic) BOOL hasIsDisputed;
@property(nonatomic) BOOL hasIsPermanentlyClosed;
- (id)altUrlAtIndex:(unsigned long long)arg1;
- (unsigned long long)altUrlsCount;
- (void)addAltUrl:(id)arg1;
- (void)clearAltUrls;
@property(readonly, nonatomic) BOOL hasUrl;
- (id)altFaxAtIndex:(unsigned long long)arg1;
- (unsigned long long)altFaxsCount;
- (void)addAltFax:(id)arg1;
- (void)clearAltFaxs;
@property(readonly, nonatomic) BOOL hasFax;
- (id)altTelephoneAtIndex:(unsigned long long)arg1;
- (unsigned long long)altTelephonesCount;
- (void)addAltTelephone:(id)arg1;
- (void)clearAltTelephones;
@property(readonly, nonatomic) BOOL hasTelephone;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)dealloc;
- (id)bestLocalizedName;

@end

