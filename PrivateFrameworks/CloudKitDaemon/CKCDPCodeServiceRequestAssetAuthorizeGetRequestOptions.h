//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable <NSCopying>
{
    unsigned long long _contentRequestAuthorizeGetOptions;
    NSMutableArray *_contentRequestHeaders;
    CDStruct_3f29eb26 _has;
}

+ (Class)contentRequestHeadersType;
@property(nonatomic) unsigned long long contentRequestAuthorizeGetOptions; // @synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
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
@property(nonatomic) BOOL hasContentRequestAuthorizeGetOptions;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)addContentRequestHeaders:(id)arg1;
- (void)clearContentRequestHeaders;

@end

