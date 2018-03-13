//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CLPMeta, NSMutableArray;

@interface CLPWtwCollectionRequest : PBRequest <NSCopying>
{
    CLPMeta *_meta;
    NSMutableArray *_wtwLocations;
}

+ (Class)wtwLocationType;
@property(retain, nonatomic) NSMutableArray *wtwLocations; // @synthesize wtwLocations=_wtwLocations;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)wtwLocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)wtwLocationsCount;
- (void)addWtwLocation:(id)arg1;
- (void)clearWtwLocations;

@end

