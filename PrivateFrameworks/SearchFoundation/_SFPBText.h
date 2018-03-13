//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBText.h"

@class NSData, NSString;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding>
{
    CDStruct_6afdaceb _has;
    unsigned int _maxLines;
    NSString *_text;
}

@property(nonatomic) unsigned int maxLines; // @synthesize maxLines=_maxLines;
@property(copy) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasMaxLines;
@property(readonly, nonatomic) BOOL hasText;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

