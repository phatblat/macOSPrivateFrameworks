//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionsOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _entriesType;
    int _listType;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
    BOOL _includeRankingFeatures;
    BOOL _normalizePOIs;
    struct {
        unsigned int entriesType:1;
        unsigned int listType:1;
        unsigned int includeRankingFeatures:1;
        unsigned int normalizePOIs:1;
    } _has;
}

@property(nonatomic) BOOL includeRankingFeatures; // @synthesize includeRankingFeatures=_includeRankingFeatures;
@property(nonatomic) BOOL normalizePOIs; // @synthesize normalizePOIs=_normalizePOIs;
@property(retain, nonatomic) NSData *suggestionEntryMetadata; // @synthesize suggestionEntryMetadata=_suggestionEntryMetadata;
@property(retain, nonatomic) NSData *suggestionMetadata; // @synthesize suggestionMetadata=_suggestionMetadata;
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
@property(nonatomic) BOOL hasIncludeRankingFeatures;
@property(nonatomic) BOOL hasNormalizePOIs;
@property(readonly, nonatomic) BOOL hasSuggestionEntryMetadata;
@property(readonly, nonatomic) BOOL hasSuggestionMetadata;
- (int)StringAsEntriesType:(id)arg1;
- (id)entriesTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEntriesType;
@property(nonatomic) int entriesType; // @synthesize entriesType=_entriesType;
- (int)StringAsListType:(id)arg1;
- (id)listTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasListType;
@property(nonatomic) int listType; // @synthesize listType=_listType;

@end

