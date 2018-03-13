//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOPDPhotoFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
}

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
- (void)setPhotoSizeFilters:(struct GEOPDPhotoSizeFilterValue *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)addPhotoSizeFilter:(struct GEOPDPhotoSizeFilterValue)arg1;
- (void)clearPhotoSizeFilters;
@property(readonly, nonatomic) struct GEOPDPhotoSizeFilterValue *photoSizeFilters;
@property(readonly, nonatomic) unsigned long long photoSizeFiltersCount;
- (void)dealloc;

@end

