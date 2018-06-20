//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSaveProfileInCarIntent.h"

@class INCodableAttribute, NSString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@interface _INPBSaveProfileInCarIntent : PBCodable <_INPBSaveProfileInCarIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    _INPBString *_profileName;
    _INPBInteger *_profileNumber;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBInteger *profileNumber; // @synthesize profileNumber=_profileNumber;
@property(retain, nonatomic) _INPBString *profileName; // @synthesize profileName=_profileName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasProfileNumber;
@property(readonly, nonatomic) BOOL hasProfileName;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

