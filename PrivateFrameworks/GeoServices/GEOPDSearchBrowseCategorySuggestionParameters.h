//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDVenueIdentifier, GEOPDViewportInfo, PBUnknownFields;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    double _requestLocalTimestamp;
    int _minimumNumberOfCategories;
    int _suggestionType;
    GEOPDVenueIdentifier *_venueFilter;
    GEOPDViewportInfo *_viewportInfo;
    BOOL _isCarplayRequest;
    struct {
        unsigned int requestLocalTimestamp:1;
        unsigned int minimumNumberOfCategories:1;
        unsigned int suggestionType:1;
        unsigned int isCarplayRequest:1;
    } _has;
}

@property(retain, nonatomic) GEOPDVenueIdentifier *venueFilter; // @synthesize venueFilter=_venueFilter;
@property(nonatomic) BOOL isCarplayRequest; // @synthesize isCarplayRequest=_isCarplayRequest;
@property(nonatomic) double requestLocalTimestamp; // @synthesize requestLocalTimestamp=_requestLocalTimestamp;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
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
@property(readonly, nonatomic) BOOL hasVenueFilter;
- (int)StringAsEngineTypes:(id)arg1;
- (id)engineTypesAsString:(int)arg1;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
@property(readonly, nonatomic) int *engineTypes;
@property(readonly, nonatomic) unsigned long long engineTypesCount;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSuggestionType;
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
@property(nonatomic) BOOL hasIsCarplayRequest;
@property(nonatomic) BOOL hasMinimumNumberOfCategories;
@property(nonatomic) int minimumNumberOfCategories; // @synthesize minimumNumberOfCategories=_minimumNumberOfCategories;
@property(nonatomic) BOOL hasRequestLocalTimestamp;
@property(readonly, nonatomic) BOOL hasViewportInfo;
- (void)dealloc;

@end

