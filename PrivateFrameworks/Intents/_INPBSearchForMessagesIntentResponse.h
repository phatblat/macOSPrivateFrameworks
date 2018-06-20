//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "INCodableAttributeAssociating.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBSearchForMessagesIntentResponse.h"

@class INCodableAttribute, NSArray, NSString;

@interface _INPBSearchForMessagesIntentResponse : PBCodable <_INPBSearchForMessagesIntentResponse, NSSecureCoding, NSCopying, INCodableAttributeAssociating>
{
    struct _has;
    NSArray *_messages;
    NSArray *_searchResults;
    INCodableAttribute *_associatedCodableAttribute;
}

+ (Class)searchResultsType;
+ (Class)messagesType;
@property(copy, nonatomic) INCodableAttribute *associatedCodableAttribute; // @synthesize associatedCodableAttribute=_associatedCodableAttribute;
@property(copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long searchResultsCount;
- (void)addSearchResults:(id)arg1;
- (void)clearSearchResults;
- (id)messagesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long messagesCount;
- (void)addMessages:(id)arg1;
- (void)clearMessages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
