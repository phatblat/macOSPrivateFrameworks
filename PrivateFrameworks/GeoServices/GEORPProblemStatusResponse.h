//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEORPProblemStatusResponse : PBCodable <NSCopying>
{
    NSMutableArray *_problemStatus;
    int _statusCode;
    CDStruct_bcb1eac0 _has;
}

+ (Class)problemStatusType;
@property(retain, nonatomic) NSMutableArray *problemStatus; // @synthesize problemStatus=_problemStatus;
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
- (id)problemStatusAtIndex:(unsigned long long)arg1;
- (unsigned long long)problemStatusCount;
- (void)addProblemStatus:(id)arg1;
- (void)clearProblemStatus;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

@end

