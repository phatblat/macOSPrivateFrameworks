//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBContactList.h"

@class NSArray, NSString, _INPBCondition;

@interface _INPBContactList : PBCodable <_INPBContactList, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBCondition *_condition;
    NSArray *_contacts;
}

+ (Class)contactType;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)contactAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contactsCount;
- (void)addContact:(id)arg1;
- (void)clearContacts;
@property(readonly, nonatomic) BOOL hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

