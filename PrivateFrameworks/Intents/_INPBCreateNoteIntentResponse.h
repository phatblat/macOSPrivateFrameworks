//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBCreateNoteIntentResponse.h"

@class NSString, _INPBNote;

@interface _INPBCreateNoteIntentResponse : PBCodable <_INPBCreateNoteIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBNote *_createdNote;
}

@property(retain, nonatomic) _INPBNote *createdNote; // @synthesize createdNote=_createdNote;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasCreatedNote;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

