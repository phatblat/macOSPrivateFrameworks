//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, TPPBDictionaryMatchingRuleFieldExists, TPPBDictionaryMatchingRuleFieldRegexMatch;

@interface TPPBDictionaryMatchingRule : PBCodable <NSCopying>
{
    NSMutableArray *_ands;
    TPPBDictionaryMatchingRuleFieldExists *_exists;
    TPPBDictionaryMatchingRuleFieldRegexMatch *_match;
    TPPBDictionaryMatchingRule *_not;
    NSMutableArray *_ors;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

+ (Class)orType;
+ (Class)andType;
@property(retain, nonatomic) TPPBDictionaryMatchingRuleFieldExists *exists; // @synthesize exists=_exists;
@property(retain, nonatomic) TPPBDictionaryMatchingRuleFieldRegexMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) TPPBDictionaryMatchingRule *not; // @synthesize not=_not;
@property(retain, nonatomic) NSMutableArray *ors; // @synthesize ors=_ors;
@property(retain, nonatomic) NSMutableArray *ands; // @synthesize ands=_ands;
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
@property(readonly, nonatomic) BOOL hasExists;
@property(readonly, nonatomic) BOOL hasMatch;
@property(readonly, nonatomic) BOOL hasNot;
- (id)orAtIndex:(unsigned long long)arg1;
- (unsigned long long)orsCount;
- (void)addOr:(id)arg1;
- (void)clearOrs;
- (id)andAtIndex:(unsigned long long)arg1;
- (unsigned long long)andsCount;
- (void)addAnd:(id)arg1;
- (void)clearAnds;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
- (BOOL)invertMatch:(id)arg1 error:(id *)arg2;
- (BOOL)performOrMatch:(id)arg1 error:(id *)arg2;
- (BOOL)performAndMatch:(id)arg1 error:(id *)arg2;
- (BOOL)matches:(id)arg1 error:(id *)arg2;

@end

