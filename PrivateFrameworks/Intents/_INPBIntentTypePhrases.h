//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentTypePhrases.h"

@class NSArray, NSString, _INPBIntentType;

@interface _INPBIntentTypePhrases : PBCodable <_INPBIntentTypePhrases, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentType *_intentType;
    NSArray *_intentVocabularyExamples;
}

@property(copy, nonatomic) NSArray *intentVocabularyExamples; // @synthesize intentVocabularyExamples=_intentVocabularyExamples;
@property(retain, nonatomic) _INPBIntentType *intentType; // @synthesize intentType=_intentType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)intentVocabularyExamplesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentVocabularyExamplesCount;
- (void)addIntentVocabularyExamples:(id)arg1;
- (void)clearIntentVocabularyExamples;
@property(readonly, nonatomic) BOOL hasIntentType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

