//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchForPhotosIntent.h"

@class NSString, _INPBActivityList, _INPBContactList, _INPBDataStringList, _INPBDateTimeRange, _INPBEventList, _INPBGeographicalFeatureList, _INPBIntentMetadata, _INPBLocation, _INPBPlaceList, _INPBString, _INPBStringList;

@interface _INPBSearchForPhotosIntent : PBCodable <_INPBSearchForPhotosIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBActivityList *_activities;
    _INPBString *_albumName;
    _INPBContactList *_contentPerson;
    _INPBDateTimeRange *_dateCreated;
    _INPBEventList *_events;
    _INPBGeographicalFeatureList *_geographicalFeatures;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataStringList *_keyword;
    _INPBStringList *_keywordString;
    _INPBLocation *_locationCreated;
    _INPBString *_memoryName;
    _INPBContactList *_peopleInPhoto;
    _INPBPlaceList *_places;
    _INPBStringList *_searchTerm;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) _INPBPlaceList *places; // @synthesize places=_places;
@property(retain, nonatomic) _INPBContactList *peopleInPhoto; // @synthesize peopleInPhoto=_peopleInPhoto;
@property(retain, nonatomic) _INPBString *memoryName; // @synthesize memoryName=_memoryName;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(retain, nonatomic) _INPBStringList *keywordString; // @synthesize keywordString=_keywordString;
@property(retain, nonatomic) _INPBDataStringList *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBGeographicalFeatureList *geographicalFeatures; // @synthesize geographicalFeatures=_geographicalFeatures;
@property(retain, nonatomic) _INPBEventList *events; // @synthesize events=_events;
@property(retain, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) _INPBContactList *contentPerson; // @synthesize contentPerson=_contentPerson;
@property(retain, nonatomic) _INPBString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) _INPBActivityList *activities; // @synthesize activities=_activities;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasSearchTerm;
@property(readonly, nonatomic) BOOL hasPlaces;
@property(readonly, nonatomic) BOOL hasPeopleInPhoto;
@property(readonly, nonatomic) BOOL hasMemoryName;
@property(readonly, nonatomic) BOOL hasLocationCreated;
@property(readonly, nonatomic) BOOL hasKeywordString;
@property(readonly, nonatomic) BOOL hasKeyword;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsIncludedAttributes:(id)arg1;
- (id)includedAttributesAsString:(int)arg1;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long includedAttributesCount;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearIncludedAttributes;
@property(readonly, nonatomic) int *includedAttributes;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasGeographicalFeatures;
- (int)StringAsExcludedAttributes:(id)arg1;
- (id)excludedAttributesAsString:(int)arg1;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long excludedAttributesCount;
- (void)addExcludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
@property(readonly, nonatomic) int *excludedAttributes;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasEvents;
@property(readonly, nonatomic) BOOL hasDateCreated;
@property(readonly, nonatomic) BOOL hasContentPerson;
@property(readonly, nonatomic) BOOL hasAlbumName;
@property(readonly, nonatomic) BOOL hasActivities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

