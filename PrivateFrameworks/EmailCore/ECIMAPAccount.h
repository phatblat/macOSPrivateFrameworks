//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailCore/ECAccount.h>

@class NSDate;

@interface ECIMAPAccount : ECAccount
{
    NSDate *_dateOfLastSync;
}

+ (id)standardSSLPorts;
+ (id)standardPorts;
@property(copy, nonatomic) NSDate *dateOfLastSync; // @synthesize dateOfLastSync=_dateOfLastSync;
- (void).cxx_destruct;
- (id)usesSSLObject;
- (id)portNumberObject;
- (id)_hostnameFromParentAccount:(id)arg1;
- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;
@property(nonatomic) BOOL ignoreServerDefinedTrashMailbox;
@property(nonatomic) BOOL ignoreServerDefinedSentMailbox;
@property(nonatomic) BOOL ignoreServerDefinedJunkMailbox;
@property(nonatomic) BOOL ignoreServerDefinedDraftsMailbox;
@property(nonatomic) BOOL ignoreServerDefinedArchiveMailbox;
@property(nonatomic) BOOL hasServerDefinedTrashMailbox;
@property(nonatomic) BOOL hasServerDefinedSentMailbox;
@property(nonatomic) BOOL hasServerDefinedJunkMailbox;
@property(nonatomic) BOOL hasServerDefinedDraftsMailbox;
@property(nonatomic) BOOL hasServerDefinedArchiveMailbox;
@property(nonatomic) BOOL hasServerDefinedAllMailMailbox;
@property(nonatomic) BOOL needsGmailLablesCleanup;
@property(readonly, nonatomic) BOOL shouldUseGmailLabelStoresIsSet;
@property(nonatomic) BOOL shouldUseGmailLabelStores;
- (void)clearQueriedUserToSetPathPrefix;
@property(nonatomic) BOOL queriedUserToSetPathPrefix;
- (void)clearDaysBetweenSyncs;
@property(nonatomic) long long daysBetweenSyncs;
@property(nonatomic) BOOL compactWhenClosingMailboxes;

@end

