//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_categorys;
    NSMutableArray *_zeroKeywordEntrys;
}

+ (Class)zeroKeywordEntryType;
+ (Class)categoryType;
@property(retain, nonatomic) NSMutableArray *zeroKeywordEntrys; // @synthesize zeroKeywordEntrys=_zeroKeywordEntrys;
@property(retain, nonatomic) NSMutableArray *categorys; // @synthesize categorys=_categorys;
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
- (id)zeroKeywordEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)zeroKeywordEntrysCount;
- (void)addZeroKeywordEntry:(id)arg1;
- (void)clearZeroKeywordEntrys;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)categorysCount;
- (void)addCategory:(id)arg1;
- (void)clearCategorys;

@end

