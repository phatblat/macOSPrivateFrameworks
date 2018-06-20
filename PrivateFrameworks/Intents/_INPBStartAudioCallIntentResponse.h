//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBStartAudioCallIntentResponse.h"

@class INCodableAttribute, NSArray, NSString, _INPBCallMetrics;

@interface _INPBStartAudioCallIntentResponse : PBCodable <_INPBStartAudioCallIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    CDStruct_fbf2c6cd _has;
    int _audioRoute;
    _INPBCallMetrics *_metrics;
    NSString *_status;
    NSArray *_targetContacts;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *targetContacts; // @synthesize targetContacts=_targetContacts;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBCallMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)targetContactsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long targetContactsCount;
- (void)addTargetContacts:(id)arg1;
- (void)clearTargetContacts;
@property(readonly, nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasMetrics;
- (int)StringAsAudioRoute:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
@property(nonatomic) BOOL hasAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
