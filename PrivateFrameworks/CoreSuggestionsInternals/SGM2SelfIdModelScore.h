//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface SGM2SelfIdModelScore : PBCodable <NSCopying>
{
    NSString *_key;
    int _model;
    int _supervision;
    BOOL _result;
    struct {
        unsigned int model:1;
        unsigned int supervision:1;
        unsigned int result:1;
    } _has;
}

@property(nonatomic) BOOL result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
- (int)StringAsSupervision:(id)arg1;
- (id)supervisionAsString:(int)arg1;
@property(nonatomic) BOOL hasSupervision;
@property(nonatomic) int supervision; // @synthesize supervision=_supervision;
@property(nonatomic) BOOL hasResult;
- (int)StringAsModel:(id)arg1;
- (id)modelAsString:(int)arg1;
@property(nonatomic) BOOL hasModel;
@property(nonatomic) int model; // @synthesize model=_model;
@property(readonly, nonatomic) BOOL hasKey;

@end
