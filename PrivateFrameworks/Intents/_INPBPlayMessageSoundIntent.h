//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPlayMessageSoundIntent.h"

@class NSString, _INPBIntentMetadata;

@interface _INPBPlayMessageSoundIntent : PBCodable <_INPBPlayMessageSoundIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int soundType:1;
    } _has;
    BOOL __encodeLegacyGloryData;
    int _soundType;
    _INPBIntentMetadata *_intentMetadata;
    NSString *_messageIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) int soundType; // @synthesize soundType=_soundType;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsSoundType:(id)arg1;
- (id)soundTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSoundType;
@property(readonly, nonatomic) BOOL hasMessageIdentifier;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
