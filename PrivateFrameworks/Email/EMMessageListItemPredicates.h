//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class NSString;

@interface EMMessageListItemPredicates : NSObject <EFLoggable>
{
}

+ (id)_keyPathsForFlagChange:(id)arg1;
+ (BOOL)predicate:(id)arg1 appliesToFlagChange:(id)arg2;
+ (id)_spotlightPredicateForPredicate:(id)arg1;
+ (id)spotlightPredicateForPredicate:(id)arg1;
+ (id)mailboxURLsForPredicate:(id)arg1;
+ (id)threadScopeForPredicate:(id)arg1;
+ (id)mailboxScopeForPredicate:(id)arg1 withMailboxTypeResolver:(id)arg2;
+ (long long)dateSortOrderFromSortDescriptors:(id)arg1;
+ (id)sortDescriptorForDateAscending:(BOOL)arg1;
+ (id)predicateFromPredicate:(id)arg1 ignoringKeyPaths:(id)arg2;
+ (id)predicateForAccount:(id)arg1;
+ (id)_predicateForMessagesInMailboxWithURL:(id)arg1;
+ (id)predicateForExcludingMessagesInMailboxWithURL:(id)arg1;
+ (id)predicateForMessagesNewerThanDate:(id)arg1;
+ (id)predicateForCCMeMessages;
+ (id)predicateForToMeMessages;
+ (id)predicateForIncludesMeMessages;
+ (id)predicateForTodayMessages;
+ (id)predicateForMuteMessages;
+ (id)predicateForNotifyMessages;
+ (id)_predicateForKeyPath:(id)arg1 value:(id)arg2;
+ (id)predicateForMessagesWithAttachments;
+ (id)predicateForReadMessages;
+ (id)predicateForUnreadMessages;
+ (id)predicateForUnflaggedMessages;
+ (id)predicateForFlaggedMessages;
+ (id)predicateForVIPMessages;
+ (id)predicateForMessagesWithThreadScope:(id)arg1;
+ (id)predicateForMessagesWithMailboxScope:(id)arg1;
+ (id)predicateForExcludingMessagesInMailboxesWithObjectIDs:(id)arg1;
+ (id)predicateForExcludingMessagesInMailboxes:(id)arg1;
+ (id)predicateForExcludingMessagesInMailboxObjectID:(id)arg1;
+ (id)predicateForExcludingMessagesInMailbox:(id)arg1;
+ (id)predicateForMessagesInMailboxesWithObjectIDs:(id)arg1;
+ (id)predicateForMessagesInMailboxes:(id)arg1;
+ (id)predicateForMessagesInMailboxWithObjectID:(id)arg1;
+ (id)predicateForMessagesInMailbox:(id)arg1;
+ (id)predicateForExcludingMessagesInMailboxesWithTypes:(id)arg1;
+ (id)predicateForExcludingMessagesInMailboxWithType:(long long)arg1;
+ (id)predicateForMessagesInMailboxesWithTypes:(id)arg1;
+ (id)_predicateForMessagesInMailboxWithType:(id)arg1;
+ (id)predicateForMessagesInMailboxWithType:(long long)arg1;
+ (id)predicateForMessagesInConversation:(long long)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
