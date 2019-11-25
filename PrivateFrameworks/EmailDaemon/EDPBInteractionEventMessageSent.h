//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "EDPBBaseMessageFields.h"
#import "EDPBDataSetters.h"
#import "NSCopying.h"

@class EDPBMessageHeaders;

@interface EDPBInteractionEventMessageSent : PBCodable <EDPBDataSetters, EDPBBaseMessageFields, NSCopying>
{
    long long _accountId;
    long long _conversationId;
    long long _mailboxId;
    long long _messageId;
    EDPBMessageHeaders *_headers;
    int _mailboxType;
    CDStruct_11e5c17e _has;
}

@property(retain, nonatomic) EDPBMessageHeaders *headers; // @synthesize headers=_headers;
@property(nonatomic) long long messageId; // @synthesize messageId=_messageId;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) long long mailboxId; // @synthesize mailboxId=_mailboxId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasHeaders;
@property(nonatomic) BOOL hasMessageId;
@property(nonatomic) BOOL hasConversationId;
- (int)StringAsMailboxType:(id)arg1;
- (id)mailboxTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMailboxType;
@property(nonatomic) int mailboxType; // @synthesize mailboxType=_mailboxType;
@property(nonatomic) BOOL hasMailboxId;
@property(nonatomic) BOOL hasAccountId;
- (void)withHasher:(id)arg1 setDataFromMessage:(id)arg2 account:(id)arg3;

@end

