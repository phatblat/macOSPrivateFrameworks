//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBShareFileIntent.h"

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBShareFileIntent : PBCodable <_INPBShareFileIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int shareMode:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _shareMode;
    NSArray *_entityNames;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_recipients;
}

+ (BOOL)supportsSecureCoding;
+ (Class)recipientsType;
+ (Class)entityNameType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entityNames; // @synthesize entityNames=_entityNames;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsShareMode:(id)arg1;
- (id)shareModeAsString:(int)arg1;
@property(nonatomic) BOOL hasShareMode;
- (id)recipientsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (id)entityNameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entityNamesCount;
- (void)addEntityName:(id)arg1;
- (void)clearEntityNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

