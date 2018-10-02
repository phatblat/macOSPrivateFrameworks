//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSetCarLockStatusIntent.h"

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetCarLockStatusIntent : PBCodable <_INPBSetCarLockStatusIntent, NSSecureCoding, NSCopying>
{
    CDStruct_b1e20226 _has;
    BOOL _locked;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

@property(nonatomic) BOOL locked; // @synthesize locked=_locked;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasLocked;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

