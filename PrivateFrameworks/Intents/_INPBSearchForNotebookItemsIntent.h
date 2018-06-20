//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchForNotebookItemsIntent.h"

@class INCodableAttribute, NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@interface _INPBSearchForNotebookItemsIntent : PBCodable <_INPBSearchForNotebookItemsIntent, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct {
        unsigned int dateSearchType:1;
        unsigned int itemType:1;
        unsigned int locationSearchType:1;
        unsigned int status:1;
    } _has;
    int _dateSearchType;
    int _itemType;
    int _locationSearchType;
    int _status;
    NSString *_content;
    _INPBDateTimeRange *_dateTime;
    _INPBIntentMetadata *_intentMetadata;
    _INPBLocation *_location;
    NSString *_notebookItemIdentifier;
    _INPBDataString *_title;
    INCodableAttribute *_associatedCodableAttribute;
}

@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(retain, nonatomic) _INPBDataString *title; // @synthesize title=_title;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *notebookItemIdentifier; // @synthesize notebookItemIdentifier=_notebookItemIdentifier;
@property(nonatomic) int locationSearchType; // @synthesize locationSearchType=_locationSearchType;
@property(retain, nonatomic) _INPBLocation *location; // @synthesize location=_location;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime; // @synthesize dateTime=_dateTime;
@property(nonatomic) int dateSearchType; // @synthesize dateSearchType=_dateSearchType;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTitle;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasNotebookItemIdentifier;
- (int)StringAsLocationSearchType:(id)arg1;
- (id)locationSearchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasLocationSearchType;
@property(readonly, nonatomic) BOOL hasLocation;
- (int)StringAsItemType:(id)arg1;
- (id)itemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasItemType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasDateTime;
- (int)StringAsDateSearchType:(id)arg1;
- (id)dateSearchTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasDateSearchType;
@property(readonly, nonatomic) BOOL hasContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
