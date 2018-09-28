//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBFileProperty.h"

@class NSString, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <_INPBFileProperty, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int name:1;
        unsigned int qualifier:1;
    } _has;
    int _name;
    int _qualifier;
    _INPBFilePropertyValue *_value;
}

@property(retain, nonatomic) _INPBFilePropertyValue *value; // @synthesize value=_value;
@property(nonatomic) int qualifier; // @synthesize qualifier=_qualifier;
@property(nonatomic) int name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValue;
- (int)StringAsQualifier:(id)arg1;
- (id)qualifierAsString:(int)arg1;
@property(nonatomic) BOOL hasQualifier;
- (int)StringAsName:(id)arg1;
- (id)nameAsString:(int)arg1;
@property(nonatomic) BOOL hasName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

