//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class EDGmailLabelPersistence, EDPersistenceDatabase, NSString;

@interface EDServerMessagePersistence : NSObject <EFLoggable>
{
    BOOL _supportsLabels;
    BOOL _useNumericSearch;
    EDPersistenceDatabase *_database;
    EDGmailLabelPersistence *_gmailLabelPersistence;
    long long _mailboxID;
}

+ (id)serverLabelsTableSchema;
+ (id)serverMessagesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)log;
@property(readonly, nonatomic) BOOL useNumericSearch; // @synthesize useNumericSearch=_useNumericSearch;
@property(readonly, nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property(readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // @synthesize gmailLabelPersistence=_gmailLabelPersistence;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) BOOL supportsLabels; // @synthesize supportsLabels=_supportsLabels;
- (void).cxx_destruct;
- (id)_remoteIDStringForRemoteIDArray:(id)arg1;
- (BOOL)_addLabels:(id)arg1 removeLabels:(id)arg2 forUID:(unsigned int)arg3 connection:(id)arg4;
- (BOOL)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesWithRemoteIDs:(id)arg3;
- (BOOL)applyFlagChange:(id)arg1 toMessagesWithRemoteIDs:(id)arg2;
- (BOOL)deleteAllServerMessagesInMailbox;
- (BOOL)deleteServerMessagesWithRemoteIDs:(id)arg1;
- (BOOL)attachMessage:(long long)arg1 toServerMessageWithRemoteID:(id)arg2;
- (BOOL)addServerMessage:(id)arg1 invalidMessage:(char *)arg2 duplicateRemoteID:(char *)arg3;
- (id)_serverMessageForRow:(id)arg1 connection:(id)arg2;
- (id)_serverMessagesWithWhereClause:(id)arg1 limitClause:(id)arg2 returnLastEntries:(BOOL)arg3;
- (id)serverMessagesInIMAPUIDRange:(struct _NSRange)arg1 limit:(unsigned long long)arg2 returnLastEntries:(BOOL)arg3;
- (id)serverMessagesForRemoteIDs:(id)arg1;
@property(readonly, nonatomic) unsigned int minimumIMAPUID;
@property(readonly, nonatomic) unsigned int maximumIMAPUID;
@property(readonly, nonatomic) unsigned long long undeletedMessageCount;
@property(readonly, nonatomic) unsigned long long unreadMessageCount;
@property(readonly, nonatomic) unsigned long long messageCount;
- (id)init;
- (id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 mailboxID:(long long)arg3 useNumericSearch:(BOOL)arg4 supportsLabels:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

