//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPRequestedFields;

__attribute__((visibility("hidden")))
@interface CKDPAssetsToDownload : PBCodable <NSCopying>
{
    CKDPRequestedFields *_assetFields;
    BOOL _allAssets;
    struct {
        unsigned int allAssets:1;
    } _has;
}

@property(retain, nonatomic) CKDPRequestedFields *assetFields; // @synthesize assetFields=_assetFields;
@property(nonatomic) BOOL allAssets; // @synthesize allAssets=_allAssets;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAssetFields;
@property(nonatomic) BOOL hasAllAssets;

@end

