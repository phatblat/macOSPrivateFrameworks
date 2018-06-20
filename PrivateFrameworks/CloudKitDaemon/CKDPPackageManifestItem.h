//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPPackageManifestItem : PBCodable <NSCopying>
{
    long long _size;
    NSData *_signature;
    BOOL _lastItem;
    struct {
        unsigned int size:1;
        unsigned int lastItem:1;
    } _has;
}

@property(nonatomic) BOOL lastItem; // @synthesize lastItem=_lastItem;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSData *signature; // @synthesize signature=_signature;
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
@property(nonatomic) BOOL hasLastItem;
@property(nonatomic) BOOL hasSize;
@property(readonly, nonatomic) BOOL hasSignature;

@end

