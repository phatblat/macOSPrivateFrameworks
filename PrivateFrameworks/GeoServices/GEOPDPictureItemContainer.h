//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPictureItemContainer : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_pictureItems;
    BOOL _allowFullScreenPhoto;
    struct {
        unsigned int allowFullScreenPhoto:1;
    } _has;
}

+ (Class)pictureItemType;
@property(retain, nonatomic) NSMutableArray *pictureItems; // @synthesize pictureItems=_pictureItems;
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
@property(nonatomic) BOOL hasAllowFullScreenPhoto;
@property(nonatomic) BOOL allowFullScreenPhoto; // @synthesize allowFullScreenPhoto=_allowFullScreenPhoto;
- (id)pictureItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)pictureItemsCount;
- (void)addPictureItem:(id)arg1;
- (void)clearPictureItems;

@end

