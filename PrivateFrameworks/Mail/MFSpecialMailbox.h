//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFMailbox.h>

@interface MFSpecialMailbox : MFMailbox
{
}

+ (void)readFlagMailboxesFromDiskForFlagMailboxes:(id)arg1;
+ (id)visibleFlagMailboxes;
+ (void)updateVisibleFlagMailboxes;
+ (id)flagMailboxes;
+ (id)VIPSendersMailbox;
+ (id)flagsMailbox;
+ (id)archiveMailbox;
+ (id)trashMailbox;
+ (id)outboxMailbox;
+ (id)junkMailbox;
+ (id)draftsMailbox;
+ (id)sentMessagesMailbox;
+ (id)inboxMailbox;
+ (id)specialMailboxForMailboxType:(int)arg1;
+ (id)specialMailboxWithIdentifier:(id)arg1;
+ (id)appleScriptNameForMailboxType:(int)arg1;
- (void)_updateDontIndexFlagFile;
- (void)saveUserInfo;
- (id)_loadUserInfo;
- (id)_viewerAttributesKey;
- (id)persistentUIIdentifier;
- (id)_specialMailboxIdentifier;
- (void)setAllCriteriaMustBeSatisfied:(BOOL)arg1;
- (BOOL)allCriteriaMustBeSatisfied;
- (void)setCriteria:(id)arg1;
- (id)criteria;
- (unsigned long long)displayCount;
- (unsigned long long)indexToInsertChildMailbox:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)sortedChildAtIndex:(unsigned long long)arg1 hidingGmail:(BOOL)arg2;
- (unsigned long long)numberOfSortedChildrenHidingGmail:(BOOL)arg1;
- (unsigned long long)numberOfVisibleChildrenHidingGmail:(BOOL)arg1;
- (unsigned long long)numberOfChildren;
- (id)visibleChildAtIndex:(unsigned long long)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (id)mutableCopyOfChildrenIncludingHiddenChildren:(BOOL)arg1 hidingGmail:(BOOL)arg2;
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)arg1;
- (id)children;
- (BOOL)hasMessages;
- (id)account;
- (id)displayName;
- (id)criterion;
- (id)_initWithName:(id)arg1 type:(int)arg2 uuid:(id)arg3;
- (id)messages;
- (id)objectSpecifier;
- (id)appleScriptKey;

@end

