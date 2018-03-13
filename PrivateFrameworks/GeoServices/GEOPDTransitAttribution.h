//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOPDTransitAttribution : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_providerNames;
}

+ (Class)providerNameType;
+ (id)transitAttributionForPlaceData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *providerNames; // @synthesize providerNames=_providerNames;
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
- (id)providerNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)providerNamesCount;
- (void)addProviderName:(id)arg1;
- (void)clearProviderNames;

@end

