//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPFeedbackJSONObject.h"
#import "_CPStruct.h"

@class NSData, NSDictionary, NSString;

@interface _CPStruct : PBCodable <_CPFeedbackJSONObject, _CPStruct, NSSecureCoding>
{
    NSDictionary *_stringKeyFields;
    NSDictionary *_intKeyFields;
}

@property(copy, nonatomic) NSDictionary *intKeyFields; // @synthesize intKeyFields=_intKeyFields;
@property(copy, nonatomic) NSDictionary *stringKeyFields; // @synthesize stringKeyFields=_stringKeyFields;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIntKeyFields:(id)arg1 forKey:(int)arg2;
- (BOOL)getIntKeyFields:(id *)arg1 forKey:(int)arg2;
- (void)setStringKeyFields:(id)arg1 forKey:(id)arg2;
- (BOOL)getStringKeyFields:(id *)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) id feedbackJSON;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

