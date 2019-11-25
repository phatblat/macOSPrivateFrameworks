//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _restrictedToSectionIndexs;
    int _sectionOptionIndex;
    struct {
        unsigned int has_sectionOptionIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
- (void)setRestrictedToSectionIndexs:(int *)arg1 count:(unsigned long long)arg2;
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1;
- (void)addRestrictedToSectionIndex:(int)arg1;
- (void)clearRestrictedToSectionIndexs;
@property(readonly, nonatomic) int *restrictedToSectionIndexs;
@property(readonly, nonatomic) unsigned long long restrictedToSectionIndexsCount;
@property(nonatomic) BOOL hasSectionOptionIndex;
@property(nonatomic) int sectionOptionIndex;
- (void)dealloc;

@end

