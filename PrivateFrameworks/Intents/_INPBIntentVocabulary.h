//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBIntentVocabulary.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBIntentVocabulary : PBCodable <_INPBIntentVocabulary, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_intentSlotVocabularyPolicies;
    NSArray *_intentTypePhrases;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)intentTypePhrasesType;
+ (Class)intentSlotVocabularyPoliciesType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *intentTypePhrases; // @synthesize intentTypePhrases=_intentTypePhrases;
@property(copy, nonatomic) NSArray *intentSlotVocabularyPolicies; // @synthesize intentSlotVocabularyPolicies=_intentSlotVocabularyPolicies;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)intentTypePhrasesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentTypePhrasesCount;
- (void)addIntentTypePhrases:(id)arg1;
- (void)clearIntentTypePhrases;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long intentSlotVocabularyPoliciesCount;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (void)clearIntentSlotVocabularyPolicies;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

