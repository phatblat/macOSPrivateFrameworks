//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBGenericIntent.h"

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBGenericIntent : PBCodable <_INPBGenericIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    NSString *_domain;
    _INPBIntentMetadata *_metadata;
    NSArray *_parameters;
    NSString *_verb;
}

+ (BOOL)supportsSecureCoding;
+ (Class)parametersType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSString *verb; // @synthesize verb=_verb;
@property(copy, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) _INPBIntentMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasVerb;
- (id)parametersAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long parametersCount;
- (void)addParameters:(id)arg1;
- (void)clearParameters;
@property(readonly, nonatomic) BOOL hasMetadata;
@property(readonly, nonatomic) BOOL hasDomain;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

