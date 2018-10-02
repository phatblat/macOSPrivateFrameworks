//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStartAudioCallIntent.h"

@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBStartAudioCallIntent : PBCodable <_INPBStartAudioCallIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int audioRoute:1;
        unsigned int destinationType:1;
        unsigned int preferredCallProvider:1;
        unsigned int ttyType:1;
    } _has;
    int _audioRoute;
    int _destinationType;
    int _preferredCallProvider;
    int _ttyType;
    NSArray *_contacts;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_targetContacts;
}

+ (Class)targetContactsType;
+ (Class)contactType;
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(copy, nonatomic) NSArray *targetContacts; // @synthesize targetContacts=_targetContacts;
@property(nonatomic) int preferredCallProvider; // @synthesize preferredCallProvider=_preferredCallProvider;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)StringAsTTYType:(id)arg1;
- (id)ttyTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTtyType;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long targetContactsCount;
- (void)addTargetContacts:(id)arg1;
- (void)clearTargetContacts;
- (int)StringAsPreferredCallProvider:(id)arg1;
- (id)preferredCallProviderAsString:(int)arg1;
@property(nonatomic) BOOL hasPreferredCallProvider;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDestinationType;
- (id)contactAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contactsCount;
- (void)addContact:(id)arg1;
- (void)clearContacts;
- (int)StringAsAudioRoute:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
@property(nonatomic) BOOL hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

