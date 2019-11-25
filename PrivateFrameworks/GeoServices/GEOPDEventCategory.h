//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEventCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_localizedCategorys;
    int _eventLookupCategory;
    struct {
        unsigned int has_eventLookupCategory:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)localizedCategoryType;
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
- (id)localizedCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategorysCount;
- (void)addLocalizedCategory:(id)arg1;
- (void)clearLocalizedCategorys;
@property(retain, nonatomic) NSMutableArray *localizedCategorys;
- (int)StringAsEventLookupCategory:(id)arg1;
- (id)eventLookupCategoryAsString:(int)arg1;
@property(nonatomic) BOOL hasEventLookupCategory;
@property(nonatomic) int eventLookupCategory;

@end

