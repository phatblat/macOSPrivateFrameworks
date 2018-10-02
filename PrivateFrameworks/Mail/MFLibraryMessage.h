//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

#import "IMAPPersistedMessage.h"

@class MFLibraryCalendarEvent, MFLibraryStore, MFMailAccount, MFMailbox, NSDate, NSString;

@interface MFLibraryMessage : MCMessage <IMAPPersistedMessage>
{
    long long _libraryID;
    MFLibraryStore *_dataSource;
    NSString *_remoteID;
    unsigned int _uid;
    BOOL _hasSetCalendarEvent;
    BOOL _hasSetReferences;
    BOOL _isCompacted;
    BOOL _isBeingChanged;
    int _conversationPosition;
    unsigned int _primitiveOptions;
    long long _conversationID;
    unsigned long long _messageSize;
    long long _mailboxID;
}

+ (id)messageWithPersistentID:(id)arg1;
+ (id)messageWithLibraryID:(long long)arg1;
+ (id)messageWithURL:(id)arg1;
+ (id)messagesWithURL:(id)arg1;
+ (id)messageIDFromMessageURL:(id)arg1;
+ (BOOL)isValidMessageID:(id)arg1;
+ (id)_residentMessageForLibraryID:(long long)arg1;
+ (void)_removeMessageFromResidentMessagesWithLibraryID:(long long)arg1;
+ (void)_removeMessagesFromResidentMessages:(id)arg1;
+ (id)_addMessageToResidentMessages:(id)arg1 overridingPreviousMessage:(BOOL)arg2;
+ (id)residentMessages;
+ (void)initialize;
@property unsigned int primitiveOptions; // @synthesize primitiveOptions=_primitiveOptions;
@property BOOL isBeingChanged; // @synthesize isBeingChanged=_isBeingChanged;
@property BOOL isCompacted; // @synthesize isCompacted=_isCompacted;
@property long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property int conversationPosition; // @synthesize conversationPosition=_conversationPosition;
@property unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property long long conversationID; // @synthesize conversationID=_conversationID;
- (void).cxx_destruct;
- (id)searchableItemWithHTML:(id)arg1 messageBody:(id)arg2 updatableAttributesOnly:(BOOL)arg3;
- (void)appendMimeData:(id)arg1 partNumber:(id)arg2;
@property(readonly) BOOL shouldIndexAttachmentsForSpotlight;
@property(readonly, nonatomic) BOOL shouldSnipAttachmentData;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
- (void)setAttachmentFilenames:(id)arg1;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
- (void)setRemoteID:(const char *)arg1 documentID:(id)arg2 flags:(long long)arg3 size:(unsigned long long)arg4 mailboxID:(long long)arg5 color:(CDStruct_f4b747e6)arg6 conversationID:(long long)arg7 conversationPosition:(int)arg8;
@property(readonly, nonatomic) MFMailAccount *account;
- (id)path;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)reload;
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)beginChanging;
- (void)_commitLater;
- (void)commit;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;
@property CDStruct_f4b747e6 messageColor;
- (void)setColor:(id)arg1;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)setFlags:(long long)arg1;
- (void)setMessageFlags:(long long)arg1 mask:(long long)arg2;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property BOOL partsHaveBeenCached;
- (BOOL)isPartialMessageBodyAvailable;
- (BOOL)isMessageContentLocallyAvailable;
@property BOOL isPartial;
- (BOOL)loadOptionsSuffice:(unsigned int)arg1;
@property unsigned int options;
@property unsigned int uid;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(copy) NSString *remoteID;
- (void)_setRemoteID:(id)arg1;
- (void)_updateUID;
@property(readonly, nonatomic) MFMailbox *mailbox;
- (id)primitiveDataSource;
- (void)setDataSource:(id)arg1;
@property(readonly) id <IMAPMessageDataSource> dataSource;
- (id)_unlockedMessageStore;
- (id)inReplyToHeaderDigest;
- (id)messageIDHeaderDigest;
- (id)cc;
- (id)to;
- (id)sender;
@property(readonly, copy) NSString *subject;
@property(retain) MFLibraryCalendarEvent *calendarEvent;
- (void)setReferences:(id)arg1;
- (id)references;
- (BOOL)type;
- (id)documentID;
@property(readonly, nonatomic) long long libraryID;
- (id)persistentID;
@property(readonly, copy, nonatomic) NSString *messageID;
- (void)dealloc;
- (id)init;
- (id)initWithLibraryID:(long long)arg1;

// Remaining properties
@property(readonly) NSDate *dateReceived;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly) Class superclass;

@end

