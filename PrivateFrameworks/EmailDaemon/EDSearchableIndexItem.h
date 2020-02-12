//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EDIndexableItem.h"
#import "EFLoggable.h"

@class CSSearchableItem, NSData, NSDate, NSString;

@interface EDSearchableIndexItem : NSObject <EFLoggable, EDIndexableItem>
{
    CSSearchableItem *_searchableItem;
    BOOL _isEncrypted;
    BOOL _includeEncryptedBody;
    BOOL _fetchBody;
    BOOL _hasCompleteData;
    NSString *_identifier;
    long long _indexingType;
    unsigned long long _itemInstantiationTime;
    id <EDIndexableMessage> _message;
    NSData *_bodyData;
}

+ (void)mailboxIdentifiersForMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)accountIdentifierForMessage:(id)arg1;
+ (id)domainIdentifierForMessage:(id)arg1;
+ (id)domainIdentifierForAccountID:(id)arg1 mailboxPersistentID:(id)arg2;
+ (long long)indexingPriorityByIndexingType:(long long)arg1;
+ (id)itemWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(BOOL)arg4;
+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(BOOL)arg3;
+ (id)log;
+ (id)csIdentifierForMailbox:(id)arg1;
@property(nonatomic) BOOL hasCompleteData; // @synthesize hasCompleteData=_hasCompleteData;
@property(readonly, nonatomic) BOOL fetchBody; // @synthesize fetchBody=_fetchBody;
@property(nonatomic) BOOL includeEncryptedBody; // @synthesize includeEncryptedBody=_includeEncryptedBody;
@property(nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, nonatomic) id <EDIndexableMessage> message; // @synthesize message=_message;
@property(readonly, nonatomic) unsigned long long itemInstantiationTime; // @synthesize itemInstantiationTime=_itemInstantiationTime;
@property(nonatomic) long long indexingType; // @synthesize indexingType=_indexingType;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL alwaysMarkAsIndexed;
- (id)searchableItem;
- (void)_addStaticAttributesToAttributeSet:(id)arg1;
- (void)addStaticAttributesToAttributeSet:(id)arg1;
- (void)addUpdatableAttributesToAttributeSet:(id)arg1;
- (void)addFlagsAttributesToAttributeSet:(id)arg1;
- (void)setNeedsAllAttributesIndexingType;
@property(retain, nonatomic) NSData *underlyingData;
- (id)fetchIndexableAttachments;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
@property(readonly, nonatomic) unsigned long long estimatedSizeInBytes;
@property(readonly, nonatomic) BOOL requiresPreprocessing;
@property(readonly, nonatomic) BOOL shouldExcludeFromIndex;
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSDate *dateReceived;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(BOOL)arg3;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

