//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOSearchSubstring : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _beginIndex;
    int _endIndex;
    NSMutableArray *_spanDatas;
    int _stringType;
}

+ (Class)spanDataType;
@property(retain, nonatomic) NSMutableArray *spanDatas; // @synthesize spanDatas=_spanDatas;
@property(nonatomic) int endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) int beginIndex; // @synthesize beginIndex=_beginIndex;
@property(nonatomic) int stringType; // @synthesize stringType=_stringType;
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
- (id)spanDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)spanDatasCount;
- (void)addSpanData:(id)arg1;
- (void)clearSpanDatas;
- (int)StringAsStringType:(id)arg1;
- (id)stringTypeAsString:(int)arg1;

@end

