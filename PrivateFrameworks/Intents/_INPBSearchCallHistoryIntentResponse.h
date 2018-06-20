//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchCallHistoryIntentResponse.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBSearchCallHistoryIntentResponse : PBCodable <_INPBSearchCallHistoryIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_callRecords;
    NSString *_dateCreated;
    NSString *_status;
    NSString *_targetContact;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)callRecordsType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSString *targetContact; // @synthesize targetContact=_targetContact;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(copy, nonatomic) NSArray *callRecords; // @synthesize callRecords=_callRecords;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTargetContact;
@property(readonly, nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasDateCreated;
- (id)callRecordsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long callRecordsCount;
- (void)addCallRecords:(id)arg1;
- (void)clearCallRecords;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
