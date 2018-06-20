//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookups;
    NSMutableArray *_spatialPlaceLookups;
}

+ (Class)spatialEventLookupType;
+ (Class)spatialPlaceLookupType;
@property(retain, nonatomic) NSMutableArray *spatialEventLookups; // @synthesize spatialEventLookups=_spatialEventLookups;
@property(retain, nonatomic) NSMutableArray *spatialPlaceLookups; // @synthesize spatialPlaceLookups=_spatialPlaceLookups;
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
- (id)spatialEventLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialEventLookupsCount;
- (void)addSpatialEventLookup:(id)arg1;
- (void)clearSpatialEventLookups;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialPlaceLookupsCount;
- (void)addSpatialPlaceLookup:(id)arg1;
- (void)clearSpatialPlaceLookups;

@end

