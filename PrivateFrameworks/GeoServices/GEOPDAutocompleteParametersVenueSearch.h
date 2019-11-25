//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDViewportInfo, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteParametersVenueSearch : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _buildingId;
    NSMutableArray *_categorys;
    unsigned long long _levelId;
    NSString *_query;
    unsigned long long _sectionId;
    unsigned long long _venueId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxResults;
    BOOL _highlightDiff;
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_levelId:1;
        unsigned int has_sectionId:1;
        unsigned int has_venueId:1;
        unsigned int has_maxResults:1;
        unsigned int has_highlightDiff:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categorys:1;
        unsigned int read_query:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_buildingId:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_levelId:1;
        unsigned int wrote_query:1;
        unsigned int wrote_sectionId:1;
        unsigned int wrote_venueId:1;
        unsigned int wrote_viewportInfo:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_highlightDiff:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)categoryType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)_addNoFlagsCategory:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;
@property(retain, nonatomic) NSMutableArray *categorys;
- (void)_readCategorys;
@property(nonatomic) BOOL hasBuildingId;
@property(nonatomic) unsigned long long buildingId;
@property(nonatomic) BOOL hasSectionId;
@property(nonatomic) unsigned long long sectionId;
@property(nonatomic) BOOL hasLevelId;
@property(nonatomic) unsigned long long levelId;
@property(nonatomic) BOOL hasVenueId;
@property(nonatomic) unsigned long long venueId;
@property(nonatomic) BOOL hasHighlightDiff;
@property(nonatomic) BOOL highlightDiff;
@property(nonatomic) BOOL hasMaxResults;
@property(nonatomic) int maxResults;
@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property(readonly, nonatomic) BOOL hasViewportInfo;
- (void)_readViewportInfo;
@property(retain, nonatomic) NSString *query;
@property(readonly, nonatomic) BOOL hasQuery;
- (void)_readQuery;
- (id)initWithData:(id)arg1;
- (id)init;

@end

