//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapRegion, GEOPDRelatedSearchSuggestion, GEOPDSearchClientBehavior, NSMutableArray, PBUnknownFields;

@interface GEOPDCategorySearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
    struct {
        unsigned int enablePartialClientization:1;
        unsigned int isChainResultSet:1;
    } _has;
}

+ (Class)browseCategoryType;
+ (Class)resultDetourInfoType;
+ (Class)relatedSearchSuggestionType;
@property(retain, nonatomic) NSMutableArray *browseCategorys; // @synthesize browseCategorys=_browseCategorys;
@property(nonatomic) BOOL enablePartialClientization; // @synthesize enablePartialClientization=_enablePartialClientization;
@property(retain, nonatomic) GEOPDSearchClientBehavior *searchClientBehavior; // @synthesize searchClientBehavior=_searchClientBehavior;
@property(retain, nonatomic) GEOPDRelatedSearchSuggestion *defaultRelatedSearchSuggestion; // @synthesize defaultRelatedSearchSuggestion=_defaultRelatedSearchSuggestion;
@property(retain, nonatomic) NSMutableArray *resultDetourInfos; // @synthesize resultDetourInfos=_resultDetourInfos;
@property(retain, nonatomic) NSMutableArray *relatedSearchSuggestions; // @synthesize relatedSearchSuggestions=_relatedSearchSuggestions;
@property(nonatomic) BOOL isChainResultSet; // @synthesize isChainResultSet=_isChainResultSet;
@property(retain, nonatomic) GEOMapRegion *displayMapRegion; // @synthesize displayMapRegion=_displayMapRegion;
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
- (id)browseCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)browseCategorysCount;
- (void)addBrowseCategory:(id)arg1;
- (void)clearBrowseCategorys;
@property(nonatomic) BOOL hasEnablePartialClientization;
@property(readonly, nonatomic) BOOL hasSearchClientBehavior;
@property(readonly, nonatomic) BOOL hasDefaultRelatedSearchSuggestion;
- (id)resultDetourInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultDetourInfosCount;
- (void)addResultDetourInfo:(id)arg1;
- (void)clearResultDetourInfos;
- (id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedSearchSuggestionsCount;
- (void)addRelatedSearchSuggestion:(id)arg1;
- (void)clearRelatedSearchSuggestions;
@property(nonatomic) BOOL hasIsChainResultSet;
@property(readonly, nonatomic) BOOL hasDisplayMapRegion;

@end

