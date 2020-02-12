//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PCSManateePrivateKey;

__attribute__((visibility("hidden")))
@interface PCSManateeShareableIdentity : PBCodable <NSCopying>
{
    PCSManateePrivateKey *_encryptionPrivateKey;
    PCSManateePrivateKey *_signingPrivateKey;
}

@property(retain, nonatomic) PCSManateePrivateKey *signingPrivateKey; // @synthesize signingPrivateKey=_signingPrivateKey;
@property(retain, nonatomic) PCSManateePrivateKey *encryptionPrivateKey; // @synthesize encryptionPrivateKey=_encryptionPrivateKey;
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
@property(readonly, nonatomic) BOOL hasSigningPrivateKey;
@property(readonly, nonatomic) BOOL hasEncryptionPrivateKey;

@end
