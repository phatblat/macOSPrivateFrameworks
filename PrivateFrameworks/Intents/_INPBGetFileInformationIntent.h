//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBGetFileInformationIntent.h"

@class NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBGetFileInformationIntent : PBCodable <_INPBGetFileInformationIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int entityType:1;
        unsigned int propertyName:1;
        unsigned int qualifier:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _entityType;
    int _propertyName;
    int _qualifier;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property(nonatomic) int propertyName; // @synthesize propertyName=_propertyName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(retain, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsQualifier:(id)arg1;
- (id)qualifierAsString:(int)arg1;
@property(nonatomic) BOOL hasQualifier;
- (int)StringAsPropertyName:(id)arg1;
- (id)propertyNameAsString:(int)arg1;
@property(nonatomic) BOOL hasPropertyName;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsEntityType:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasEntityType;
@property(readonly, nonatomic) BOOL hasEntityName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

