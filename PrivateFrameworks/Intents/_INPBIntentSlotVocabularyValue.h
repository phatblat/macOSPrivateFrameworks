//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields;

@interface _INPBIntentSlotVocabularyValue : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_examples;
    NSString *_phrase;
    NSString *_pronunciation;
}

+ (Class)examplesType;
@property(retain, nonatomic) NSMutableArray *examples; // @synthesize examples=_examples;
@property(retain, nonatomic) NSString *pronunciation; // @synthesize pronunciation=_pronunciation;
@property(retain, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)examplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)examplesCount;
- (void)addExamples:(id)arg1;
- (void)clearExamples;
@property(readonly, nonatomic) BOOL hasPronunciation;
@property(readonly, nonatomic) BOOL hasPhrase;

@end

