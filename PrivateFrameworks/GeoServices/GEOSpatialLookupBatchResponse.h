//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupBatchResponse : PBCodable <NSCopying>
{
    NSMutableArray *_responses;
    int _statusCode;
    CDStruct_ade9d5f7 _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)responseType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)responseAtIndex:(unsigned long long)arg1;
- (unsigned long long)responsesCount;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
@property(retain, nonatomic) NSMutableArray *responses;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode;

@end

