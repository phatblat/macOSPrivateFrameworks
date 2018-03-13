//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>
{
    NSData *_authCopyResponse;
    NSData *_authPutResponse;
    NSMutableArray *_contentResponseHeaders;
    NSMutableArray *_uploadTokens;
}

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;
@property(retain, nonatomic) NSData *authCopyResponse; // @synthesize authCopyResponse=_authCopyResponse;
@property(retain, nonatomic) NSMutableArray *contentResponseHeaders; // @synthesize contentResponseHeaders=_contentResponseHeaders;
@property(retain, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property(retain, nonatomic) NSMutableArray *uploadTokens; // @synthesize uploadTokens=_uploadTokens;
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
@property(readonly, nonatomic) BOOL hasAuthCopyResponse;
- (id)contentResponseHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentResponseHeadersCount;
- (void)addContentResponseHeaders:(id)arg1;
- (void)clearContentResponseHeaders;
@property(readonly, nonatomic) BOOL hasAuthPutResponse;
- (id)uploadTokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)uploadTokensCount;
- (void)addUploadTokens:(id)arg1;
- (void)clearUploadTokens;

@end

