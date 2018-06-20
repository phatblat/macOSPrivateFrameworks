//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBCardSection.h"

@class NSArray, NSData, NSString, _SFPBCard, _SFPBCardSectionValue;

@interface _SFPBCardSection : PBCodable <_SFPBCardSection, NSSecureCoding>
{
    int _type;
    _SFPBCardSectionValue *_value;
    _SFPBCard *_nextCard;
    NSArray *_commands;
    NSArray *_parameterKeyPaths;
    NSString *_cardSectionId;
    NSString *_resultIdentifier;
}

@property(copy, nonatomic) NSString *resultIdentifier; // @synthesize resultIdentifier=_resultIdentifier;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(copy, nonatomic) NSArray *parameterKeyPaths; // @synthesize parameterKeyPaths=_parameterKeyPaths;
@property(copy, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property(retain, nonatomic) _SFPBCard *nextCard; // @synthesize nextCard=_nextCard;
@property(retain, nonatomic) _SFPBCardSectionValue *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)parameterKeyPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterKeyPathsCount;
- (void)addParameterKeyPaths:(id)arg1;
- (void)clearParameterKeyPaths;
- (id)commandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandsCount;
- (void)addCommands:(id)arg1;
- (void)clearCommands;
- (id)initWithSFCardSection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

