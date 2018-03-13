//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields;

@interface _INPBDataString : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_alternatives;
    NSString *_localizedValue;
    NSString *_vocabularyIdentifier;
}

+ (Class)alternativesType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *alternatives; // @synthesize alternatives=_alternatives;
@property(retain, nonatomic) NSString *vocabularyIdentifier; // @synthesize vocabularyIdentifier=_vocabularyIdentifier;
@property(retain, nonatomic) NSString *localizedValue; // @synthesize localizedValue=_localizedValue;
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
- (id)alternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternativesCount;
- (void)addAlternatives:(id)arg1;
- (void)clearAlternatives;
@property(readonly, nonatomic) BOOL hasVocabularyIdentifier;
@property(readonly, nonatomic) BOOL hasLocalizedValue;

@end

