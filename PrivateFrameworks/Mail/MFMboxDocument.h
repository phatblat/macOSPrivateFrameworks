//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCMessageDataSource.h"

@class NSArray, NSData, NSDateFormatter, NSMutableSet, NSString;

@interface MFMboxDocument : NSObject <MCMessageDataSource>
{
    NSMutableSet *_uniqueStrings;
    NSData *_fromSpace;
    NSData *_space;
    NSData *_newline;
    NSData *_headersSeparator;
    NSDateFormatter *_ctimeDateFormatter;
    NSData *_mboxData;
    NSData *_newlineFromSpace;
    unsigned long long _fromSpaceStaticLength;
    NSArray *_messagesToExport;
    CDStruct_a3227609 _fromSpaceRegularExpression;
}

+ (BOOL)isValidItem:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *messagesToExport; // @synthesize messagesToExport=_messagesToExport;
@property(readonly, nonatomic) unsigned long long fromSpaceStaticLength; // @synthesize fromSpaceStaticLength=_fromSpaceStaticLength;
@property(readonly, copy, nonatomic) NSData *newlineFromSpace; // @synthesize newlineFromSpace=_newlineFromSpace;
@property(readonly, copy, nonatomic) NSData *mboxData; // @synthesize mboxData=_mboxData;
@property(readonly, nonatomic) CDStruct_a3227609 fromSpaceRegularExpression; // @synthesize fromSpaceRegularExpression=_fromSpaceRegularExpression;
@property(readonly, nonatomic) NSDateFormatter *ctimeDateFormatter; // @synthesize ctimeDateFormatter=_ctimeDateFormatter;
@property(readonly, nonatomic) NSData *headersSeparator; // @synthesize headersSeparator=_headersSeparator;
@property(readonly, copy, nonatomic) NSData *newline; // @synthesize newline=_newline;
@property(readonly, copy, nonatomic) NSData *space; // @synthesize space=_space;
@property(readonly, copy, nonatomic) NSData *fromSpace; // @synthesize fromSpace=_fromSpace;
- (void).cxx_destruct;
- (id)_escapedMessageDataForMessage:(id)arg1;
- (id)emptyFileForWritingToURL:(id)arg1 error:(id *)arg2;
- (BOOL)exportMessagesToURL:(id)arg1 error:(id *)arg2 shouldExport:(CDUnknownBlockType)arg3;
- (BOOL)exportMessagesToURL:(id)arg1 error:(id *)arg2;
- (id)initWithMessages:(id)arg1;
- (id)uniquedString:(id)arg1;
- (void)flushAllCaches;
- (void)invalidateMessage:(id)arg1;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)routeMessages:(id)arg1 fetchingBodies:(BOOL)arg2 messagesNeedingBodies:(id)arg3;
- (void)doCompact;
@property(readonly, nonatomic) BOOL canCompact;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (void)saveSnippetsForMessages:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (void)setColor:(id)arg1 highlightTextOnly:(BOOL)arg2 forMessages:(id)arg3;
- (id)setJunkMailLevel:(long long)arg1 forMessages:(id)arg2 trainJunkMailDatabase:(BOOL)arg3 userRecorded:(BOOL)arg4;
- (id)_flagChangeDictionaryForJunkMailLevel:(long long)arg1 forMessages:(id)arg2 userRecorded:(BOOL)arg3 changedMessages:(id)arg4;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (void)setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (void)async_setFlagWithKey:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)async_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)bodyDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headerDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 fetchIfNotAvailable:(BOOL)arg5 updateFlags:(BOOL)arg6 allowPartial:(BOOL)arg7;
- (id)messageForMessageID:(id)arg1;
@property(readonly, nonatomic) id <MCMailbox> mailbox;
@property(readonly, nonatomic) id <MCMailAccount> account;
@property(readonly) BOOL isReadOnly;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dateFromRange:(struct _NSRange)arg1;
- (struct _NSRange)_rangeOfSeparatorLineInRange:(struct _NSRange)arg1;
@property(readonly, copy, nonatomic) NSArray *messagesForImporter;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)_mfMboxDocumentCommonInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

