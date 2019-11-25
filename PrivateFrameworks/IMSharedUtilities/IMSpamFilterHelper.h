//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSpamFilterHelper : NSObject
{
}

+ (id)mapID:(id)arg1 usingKey:(id)arg2;
+ (BOOL)receivedResponseForChat:(id)arg1;
+ (BOOL)repliedToChat:(id)arg1;
+ (id)internationalSpamFilterLearnMoreURL;
+ (BOOL)isFilterUnknownSendersEnabled;
+ (BOOL)isChineseSpamFilteringEnabled;
+ (BOOL)isInternationalSpamFilteringEnabled;
+ (BOOL)anyParticipantIsKnownContact:(id)arg1;
+ (BOOL)senderIsKnownContact:(id)arg1;
+ (id)_cnRecordForAliases:(id)arg1;
+ (BOOL)senderIsCandidateForBlackhole:(id)arg1 withReceiver:(id)arg2;
+ (BOOL)senderIsCandidateForSMSDowngrade:(id)arg1;
+ (BOOL)accountRegionIsCandidateForSpamFiltering:(id)arg1;
+ (BOOL)receiverIsCandidateForSpamFiltering:(id)arg1;
+ (BOOL)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 otherRecipients:(id)arg3 forRegion:(id)arg4 givenHistory:(BOOL)arg5;
+ (BOOL)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 forRegion:(id)arg3 givenHistory:(BOOL)arg4;
+ (BOOL)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(BOOL)arg3;
+ (BOOL)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(BOOL)arg3 withConversationDowngradeState:(BOOL)arg4 andConversationHistoryState:(BOOL)arg5;

@end

