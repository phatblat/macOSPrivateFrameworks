//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CPLMemoryAssetFlag : PBCodable <NSCopying>
{
    BOOL _isCurated;
    BOOL _isExtendedCurated;
    BOOL _isKeyAsset;
    BOOL _isMovieCurated;
    BOOL _isRepresentative;
    struct {
        unsigned int isCurated:1;
        unsigned int isExtendedCurated:1;
        unsigned int isKeyAsset:1;
        unsigned int isMovieCurated:1;
        unsigned int isRepresentative:1;
    } _has;
}

@property(nonatomic) BOOL isExtendedCurated; // @synthesize isExtendedCurated=_isExtendedCurated;
@property(nonatomic) BOOL isKeyAsset; // @synthesize isKeyAsset=_isKeyAsset;
@property(nonatomic) BOOL isMovieCurated; // @synthesize isMovieCurated=_isMovieCurated;
@property(nonatomic) BOOL isCurated; // @synthesize isCurated=_isCurated;
@property(nonatomic) BOOL isRepresentative; // @synthesize isRepresentative=_isRepresentative;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsExtendedCurated;
@property(nonatomic) BOOL hasIsKeyAsset;
@property(nonatomic) BOOL hasIsMovieCurated;
@property(nonatomic) BOOL hasIsCurated;
@property(nonatomic) BOOL hasIsRepresentative;

@end

