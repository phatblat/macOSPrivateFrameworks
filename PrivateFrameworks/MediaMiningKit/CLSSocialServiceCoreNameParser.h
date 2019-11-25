//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaMiningKit/CLSSocialService.h>

@class NPNameParser, NSCharacterSet, NSDictionary, NSMutableDictionary;

@interface CLSSocialServiceCoreNameParser : CLSSocialService
{
    NPNameParser *_nameParser;
    NSMutableDictionary *_genderHintByCNIdentifier;
    NSDictionary *_vocabularyByRelationshipByLocale;
    NSMutableDictionary *_regularExpressionByRelationshipByLocale;
    NSCharacterSet *_nonLetterCharacterSet;
}

+ (unsigned long long)_personRelationshipFromString:(id)arg1;
+ (id)_dictionaryKeyForPersonRelationship:(unsigned long long)arg1;
@property(retain, nonatomic) NSCharacterSet *nonLetterCharacterSet; // @synthesize nonLetterCharacterSet=_nonLetterCharacterSet;
@property(retain, nonatomic) NSMutableDictionary *regularExpressionByRelationshipByLocale; // @synthesize regularExpressionByRelationshipByLocale=_regularExpressionByRelationshipByLocale;
@property(retain, nonatomic) NSDictionary *vocabularyByRelationshipByLocale; // @synthesize vocabularyByRelationshipByLocale=_vocabularyByRelationshipByLocale;
@property(retain, nonatomic) NSMutableDictionary *genderHintByCNIdentifier; // @synthesize genderHintByCNIdentifier=_genderHintByCNIdentifier;
@property(retain) NPNameParser *nameParser; // @synthesize nameParser=_nameParser;
- (void).cxx_destruct;
- (id)_regularExpressionForRelationship:(unsigned long long)arg1 languageCode:(id)arg2;
- (id)_parentRelationships;
- (unsigned long long)relationshipHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (id)_normalizeName:(id)arg1;
- (unsigned long long)_genderHintForRelationship:(unsigned long long)arg1;
- (unsigned long long)genderHintForPerson:(id)arg1 usingLocales:(id)arg2;
- (void)invalidateMemoryCaches;
- (id)init;

@end

