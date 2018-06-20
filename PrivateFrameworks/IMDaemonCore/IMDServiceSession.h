//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMConnectionMonitorDelegate.h"
#import "IMServiceSessionProtocol.h"
#import "IMSystemMonitorListener.h"

@class IMConnectionMonitor, IMDAccount, IMDService, IMOneTimeCodeUtilities, IMSystemProxySettingsFetcher, IMTimer, IMTimingCollection, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, NSTimer;

@interface IMDServiceSession : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate, IMServiceSessionProtocol>
{
    NSRecursiveLock *_lock;
    IMDAccount *_account;
    NSMutableArray *_accounts;
    NSMutableDictionary *_localProperties;
    NSMutableSet *_changedBuddies;
    NSMutableSet *_registeredChats;
    NSMutableDictionary *_groupChatIdentifierToChatRoomMap;
    NSMutableDictionary *_chatRoomToGroupChatIdentifierMap;
    NSMutableDictionary *_chatSuppressionFlagMap;
    NSMutableDictionary *_chatSuppressionTimerMap;
    NSMutableDictionary *_suppressedMessages;
    IMTimer *_messageRoutingTimer;
    IMTimer *_messageExpireStateTimer;
    IMTimer *_messageWatchdogTimer;
    id <IMDAutoReplying> _messageAutoReplier;
    NSTimer *_storageTimer;
    NSMutableSet *_messagesReceivedDuringStorage;
    unsigned long long _pendingReadReceiptFromStorageCount;
    IMTimingCollection *_timingComingBackFromStorage;
    unsigned long long _messagesProcessedComingBackFromStorage;
    IMConnectionMonitor *_connectionMonitor;
    NSTimer *_reconnectTimer;
    NSString *_loginID;
    NSString *_pwRequestID;
    IMSystemProxySettingsFetcher *_systemProxySettingsFetcher;
    int _buddyChangeLevel;
    BOOL _activated;
    BOOL _saveKeychainPassword;
    IMOneTimeCodeUtilities *_otcUtilities;
    BOOL _awaitingDataContext;
    BOOL _shouldReconnect;
    BOOL _badPass;
    IMDService *_service;
    NSMutableDictionary *_buddies;
    NSString *_proxyHost;
    NSString *_proxyAccount;
    NSString *_proxyPassword;
    NSString *_password;
    NSString *_serverHost;
    long long _proxyType;
    unsigned short _proxyPort;
    BOOL _useSSL;
    unsigned short _serverPort;
}

+ (id)existingServiceSessionForService:(id)arg1;
+ (id)allServiceSessions;
+ (void)__registerNewServiceSession:(id)arg1;
+ (id)__allServiceSessionsWeakReferenceArray;
+ (id)_firewallUserNotificationForService:(id)arg1;
+ (void)initialize;
@property(readonly, retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(readonly, retain, nonatomic) IMDService *service; // @synthesize service=_service;
@property(readonly, retain, nonatomic) IMDAccount *account; // @synthesize account=_account;
@property(readonly, retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(readonly, retain, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(readonly, retain, nonatomic) NSString *proxyAccount; // @synthesize proxyAccount=_proxyAccount;
@property(readonly, nonatomic) unsigned short proxyPort; // @synthesize proxyPort=_proxyPort;
@property(readonly, retain, nonatomic) NSString *proxyHost; // @synthesize proxyHost=_proxyHost;
@property(readonly, nonatomic) long long proxyType; // @synthesize proxyType=_proxyType;
@property(readonly, nonatomic) unsigned short serverPort; // @synthesize serverPort=_serverPort;
@property(readonly, retain, nonatomic) NSString *serverHost; // @synthesize serverHost=_serverHost;
- (void)_clearDowngradeMarkersForChat:(id)arg1;
- (void)systemDidWake;
- (void)screenUnlocked;
- (void)systemWillSleep;
- (id)broadcasterForListenersWithCapabilities:(unsigned int)arg1;
- (id)broadcasterForVCConferenceListeners;
- (id)broadcasterForACConferenceListeners;
- (id)broadcasterForAVConferenceListeners;
- (id)broadcasterForChatObserverListeners;
- (id)broadcasterForChatListeners;
- (id)broadcaster;
- (void)refreshServiceCapabilities;
- (BOOL)equalID:(id)arg1 andID:(id)arg2;
- (id)canonicalFormOfChatRoom:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (void)_managedPrefsNotification:(id)arg1;
@property(readonly, nonatomic) BOOL allowedAsChild;
@property(readonly, nonatomic) BOOL networkConditionsAllowLogin;
@property(readonly, nonatomic) BOOL overrideNetworkAvailability;
- (void)_networkChanged:(id)arg1;
- (void)_callMonitorStateChanged:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)_processPotentialNetworkChange;
- (void)_setPendingConnectionMonitorUpdate;
- (void)_processConnectionMonitorUpdate;
- (void)_reconnectIfNecessaryWithAccount:(id)arg1;
- (void)_reconnectIfNecessary;
- (void)_updateConnectionMonitorFromAccountDefaultsIgnoringProxy:(BOOL)arg1;
- (void)updateConnectionMonitorWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2;
- (void)_updateConnectionMonitorWithRemoteHost:(id)arg1;
- (void)_clearConnectionMonitor;
- (void)sessionWillBecomeInactiveWithAccount:(id)arg1;
- (void)sessionDidBecomeActive;
@property(readonly, retain, nonatomic) NSDictionary *accountDefaults;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSString *accountID;
@property(readonly, nonatomic) BOOL isActive;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
@property(readonly, nonatomic) BOOL accountShouldBeAlwaysLoggedIn;
@property(readonly, nonatomic) BOOL accountNeedsPassword;
@property(readonly, nonatomic) BOOL accountNeedsLogin;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 service:(id)arg2;
- (void)scheduleTransactionLogTask:(id)arg1;
- (void)enqueReplayMessageCallback:(CDUnknownBlockType)arg1;
- (void)replayMessage:(id)arg1;
- (void)setPendingReadReceiptFromStorageCount:(unsigned long long)arg1;
- (unsigned long long)pendingReadReceiptFromStorageCount;
- (void)decrementPendingReadReceiptFromStorageCount;
- (void)incrementPendingReadReceiptFromStorageCount;
- (void)noteLastItemProcessed;
- (void)noteLastItemFromStorage:(id)arg1;
- (void)noteItemFromStorage:(id)arg1;
- (void)noteSuppressedMessageUpdate:(id)arg1;
- (BOOL)isAwaitingStorageTimer;
- (void)didReceiveBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5;
- (void)didSendBalloonPayload:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 messageGUID:(id)arg4 account:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_storageTimerFired;
- (void)_updateStorageTimerWithInterval:(double)arg1;
- (void)_checkMessageForOneTimeCodes:(id)arg1;
- (id)otcUtilities;
- (void)autoReplier:(id)arg1 receivedUrgentRequestForMessages:(id)arg2;
- (void)autoReplier:(id)arg1 generatedAutoReplyText:(id)arg2 forChat:(id)arg3;
- (id)_autoReplier;
- (void)_watchdogTimerFired;
- (void)_updateWatchdogTimerWithInterval:(double)arg1;
- (void)_updateWatchdogForMessageGUID:(id)arg1;
- (void)_handleWatchdogWithDictionary:(id)arg1;
- (void)_expireStateTimerFired;
- (void)_updateExpireStateTimerWithInterval:(double)arg1;
- (void)_updateExpireStateForMessageGUID:(id)arg1;
- (void)_handleExpireStateDictionary:(id)arg1;
- (BOOL)canMakeExpireStateChecks;
- (void)_routingTimerFired;
- (void)_updateRoutingTimerWithInterval:(double)arg1;
- (void)_updateRoutingForMessageGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 account:(id)arg4;
- (void)_handleRoutingWithDictionary:(id)arg1;
- (void)_markChatAsDowngraded:(id)arg1;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8 destinationCallerID:(id)arg9;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7 account:(id)arg8;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 fromHandle:(id)arg3 unformattedNumber:(id)arg4 countryCode:(id)arg5 forChat:(id)arg6 style:(unsigned char)arg7;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 unformattedNumber:(id)arg3 countryCode:(id)arg4 forChat:(id)arg5 style:(unsigned char)arg6;
- (void)didChangeMemberStatus:(int)arg1 forHandle:(id)arg2 forChat:(id)arg3 style:(unsigned char)arg4;
- (void)updateDisplayName:(id)arg1 fromDisplayName:(id)arg2 forChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 handleInfo:(id)arg7 account:(id)arg8 isSpam:(BOOL)arg9 spamExtensionName:(id)arg10;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7 isSpam:(BOOL)arg8 spamExtensionName:(id)arg9;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 handleInfo:(id)arg7 account:(id)arg8;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6 account:(id)arg7;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 handleInfo:(id)arg7;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 displayName:(id)arg4 groupID:(id)arg5 handleInfo:(id)arg6;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 handleInfo:(id)arg4;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (void)didUpdateChatStatus:(int)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveInvitation:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)_storeMessage:(id)arg1 chatIdentifier:(id)arg2 localChat:(id)arg3 style:(unsigned char)arg4 account:(id)arg5 messagesToPostArray:(id)arg6;
- (BOOL)testOverrideTextValidationDidFail;
- (void)didReceiveMessages:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (id)_transcodeController;
- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (void)didReceiveMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)_updateInputMessage:(id)arg1 forExistingMessage:(id)arg2;
- (void)didReceiveDisplayNameChange:(id)arg1 fromID:(id)arg2 toIdentifier:(id)arg3 forChat:(id)arg4 style:(unsigned char)arg5 account:(id)arg6;
- (void)sendDeleteCommand:(id)arg1 forChatGUID:(id)arg2;
- (void)_setSuppressedMessage:(id)arg1 inChatWithGUID:(id)arg2;
- (void)_suppresionTimerFired:(id)arg1;
- (void)_endMessageSuppressionForChatGUID:(id)arg1;
- (void)endMessageSuppression;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
- (void)notifyDidSendMessageID:(id)arg1 account:(id)arg2 shouldNotify:(BOOL)arg3;
- (void)notifyDidSendMessageID:(id)arg1 shouldNotify:(BOOL)arg2;
- (void)notifyDidSendMessageID:(id)arg1;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5 itemIsComingFromStorage:(BOOL)arg6;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4 forceDate:(id)arg5;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3 forceDate:(id)arg4;
- (void)didSendMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 useMessageSuppression:(BOOL)arg7 account:(id)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_didReceiveMessageSavedForMessageID:(id)arg1 ofType:(long long)arg2 forChat:(id)arg3 fromHandle:(id)arg4 fromMe:(BOOL)arg5 date:(id)arg6 attempts:(long long)arg7 useMessageSuppression:(BOOL)arg8 account:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didReceiveMessagePlayedReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didReceiveMessagePlayedForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didReceiveMessageReadReceiptForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 useMessageSuppression:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didReceiveMessageReadForMessageID:(id)arg1 date:(id)arg2 attempts:(long long)arg3 useMessageSuppression:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_hasSuppressedMessageID:(id)arg1 chatGUID:(id)arg2;
- (BOOL)_didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 attempts:(long long)arg2 date:(id)arg3 account:(id)arg4;
- (BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2 account:(id)arg3;
- (BOOL)didReceiveMessageDeliveryReceiptForMessageID:(id)arg1 date:(id)arg2;
- (void)didSendMessageSavedReceiptForMessageID:(id)arg1 account:(id)arg2;
- (void)didSendMessageSavedReceiptForMessageID:(id)arg1;
- (void)didSendMessagePlayedReceiptForMessageID:(id)arg1 account:(id)arg2;
- (void)didSendMessagePlayedReceiptForMessageID:(id)arg1;
- (void)didSendMessageReadReceiptForMessageID:(id)arg1 account:(id)arg2;
- (void)didSendMessageReadReceiptForMessageID:(id)arg1;
- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3 account:(id)arg4;
- (void)didReceiveError:(unsigned int)arg1 forMessageID:(id)arg2 forceError:(BOOL)arg3;
- (void)didReceiveErrorMessage:(id)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didReceiveReplaceMessageID:(int)arg1 forChat:(id)arg2 style:(unsigned char)arg3;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 isSpam:(BOOL)arg6 spamExtensionName:(id)arg7;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 handleInfo:(id)arg6;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3 account:(id)arg4;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (void)didJoinChat:(id)arg1 style:(unsigned char)arg2;
- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (void)didLeaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)sendLocationSharingInfo:(id)arg1 toID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)leaveAllChats;
- (void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendSavedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 account:(id)arg5;
- (void)sendPlayedReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 account:(id)arg4;
- (void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3;
- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 account:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)processMessageForSending:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 allowWatchdog:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3;
- (id)chatForChatIdentifier:(id)arg1 style:(unsigned char)arg2;
- (void)_mapRoomChatToGroupChat:(id *)arg1 style:(unsigned char *)arg2;
- (void)canonicalizeChatIdentifier:(id *)arg1 style:(unsigned char *)arg2;
- (void)unregisterChat:(id)arg1 style:(unsigned char)arg2;
- (BOOL)isChatRegistered:(id)arg1 style:(unsigned char)arg2;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 handleInfo:(id)arg6 account:(id)arg7;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5 account:(id)arg6;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 displayName:(id)arg3 groupID:(id)arg4 handleInfo:(id)arg5;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2 handleInfo:(id)arg3;
- (void)registerChat:(id)arg1 style:(unsigned char)arg2;
- (void)registerChat:(id)arg1 groupID:(id)arg2 style:(unsigned char)arg3;
- (id)_newHashForChat:(id)arg1 style:(unsigned char)arg2;
- (id)chatRoomForGroupChatIdentifier:(id)arg1;
- (id)groupChatIdentifierForChatRoom:(id)arg1;
- (void)useChatRoom:(id)arg1 forGroupChatIdentifier:(id)arg2;
- (void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (id)localPropertiesOfBuddy:(id)arg1;
- (void)clearLocalProperties;
- (id)localProperty:(id)arg1 ofBuddy:(id)arg2;
- (id)property:(id)arg1 ofBuddy:(id)arg2;
- (void)endBuddyChanges;
- (void)clearPropertiesOfBuddy:(id)arg1;
- (void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (void)beginBuddyChanges;
- (void)markBuddiesAsChanged:(id)arg1;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
@property(readonly, retain) NSDictionary *buddyProperties;
- (id)groups;
@property(readonly, retain, nonatomic) NSArray *allBuddies;
- (id)pictureKeyForBuddy:(id)arg1;
- (id)pictureOfBuddy:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *buddyPictures;
- (void)closeSessionChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)sendLogDumpMessageAtFilePath:(id)arg1 toRecipient:(id)arg2 shouldDeleteFile:(BOOL)arg3;
- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)removeChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)leaveiMessageChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 groupID:(id)arg5 lastAddressedHandle:(id)arg6 joinProperties:(id)arg7;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2 account:(id)arg3;
- (void)validateProfileWithAccount:(id)arg1;
- (void)unvalidateAliases:(id)arg1 account:(id)arg2;
- (void)validateAliases:(id)arg1 account:(id)arg2;
- (void)removeAliases:(id)arg1 account:(id)arg2;
- (void)addAliases:(id)arg1 account:(id)arg2;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3 toChatID:(id)arg4 identifier:(id)arg5 style:(unsigned char)arg6;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
- (void)closeSessionChat:(id)arg1 style:(unsigned char)arg2;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (struct _FZChatRoomValidity)validityOfChatRoomName:(id)arg1;
- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChat:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChat:(id)arg1 style:(unsigned char)arg2;
- (void)removePersonInfoFromiMessageChat:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)eagerUploadCancel:(id)arg1;
- (void)eagerUploadTransfer:(id)arg1;
- (void)removePersonInfo:(id)arg1 chatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)invitePersonInfoToiMessageChat:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)invitePerson:(id)arg1 withMessage:(id)arg2 toChat:(id)arg3 style:(unsigned char)arg4;
- (void)removeChat:(id)arg1 style:(unsigned char)arg2;
- (void)leaveiMessageChat:(id)arg1 style:(unsigned char)arg2;
- (void)leaveChat:(id)arg1 style:(unsigned char)arg2;
- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 lastAddressedHandle:(id)arg5 joinProperties:(id)arg6;
- (void)joinChat:(id)arg1 handleInfo:(id)arg2 style:(unsigned char)arg3 groupID:(id)arg4 joinProperties:(id)arg5;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 joinProperties:(id)arg4;
- (void)joinChat:(id)arg1 style:(unsigned char)arg2 joinProperties:(id)arg3;
- (BOOL)shouldImitateGroupChatUsingChatRooms;
- (id)defaultChatSuffix;
- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;
- (void)stopWatchingBuddy:(id)arg1;
- (void)startWatchingBuddy:(id)arg1;
- (void)requestSubscriptionTo:(id)arg1;
- (void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)changeGroup:(id)arg1 changes:(id)arg2;
- (void)changeGroups:(id)arg1;
- (void)requestGroups;
- (void)setIdleTime:(unsigned int)arg1;
- (void)changeMyStatus:(id)arg1 changedKeys:(id)arg2;
- (BOOL)blockIdleStatus;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (id)blockList;
- (void)setBlockList:(id)arg1;
- (id)allowList;
- (void)setAllowList:(id)arg1;
- (unsigned int)blockingMode;
- (void)setBlockingMode:(unsigned int)arg1;
- (unsigned long long)capabilities;
- (void)loginServiceSessionWithAccount:(id)arg1;
- (void)passwordUpdatedWithAccount:(id)arg1;
- (void)accountDefaultsChanged:(id)arg1;
- (void)_abandonSystemProxySettingsFetcher;
- (void)_abandonPWFetcher;
- (void)noteBadPassword;
- (id)loginID;
- (id)loginIDForAccount:(id)arg1;
@property(readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property(readonly, nonatomic) int registrationError;
@property(readonly, nonatomic) int registrationStatus;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)unregisterAccount:(id)arg1;
- (void)registerAccount:(id)arg1;
- (void)authenticateAccount:(id)arg1;
- (id)server;
- (BOOL)hasCapability:(unsigned long long)arg1;
- (void)userNotificationDidFinish:(id)arg1;
- (void)_handleFirewallUserNotificationDidFinish:(id)arg1;
- (BOOL)warnIfPortBlocked:(int)arg1 forAction:(id)arg2;
- (void)_clearAutoReconnectTimer;
- (void)_autoReconnectTimer:(id)arg1;
- (void)_setAutoReconnectTimer;
- (void)__forceSetLoginStatus:(unsigned int)arg1 oldStatus:(unsigned int)arg2 message:(id)arg3 reason:(int)arg4 properties:(id)arg5 account:(id)arg6;
- (void)_wentOfflineWithAccount:(id)arg1;
- (void)serviceSessionDidLogoutWithMessage:(id)arg1 reason:(int)arg2 properties:(id)arg3 account:(id)arg4;
- (void)serviceSessionDidLogoutWithAccount:(id)arg1;
- (void)serviceSessionDidLoginWithAccount:(id)arg1;
- (void)logoutWithAccount:(id)arg1;
- (void)logout;
- (void)logoutServiceSessionWithAccount:(id)arg1;
- (void)loginWithAccount:(id)arg1;
- (void)login;
- (void)autoLogin;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedAccount:(id)arg2 password:(id)arg3;
- (void)systemProxySettingsFetcher:(id)arg1 retrievedHost:(id)arg2 port:(unsigned short)arg3 protocol:(long long)arg4;
- (void)_login_checkUsernameAndPasswordWithAccount:(id)arg1;
- (void)_login_usernameAndPasswordReadyWithAccount:(id)arg1;
- (void)_data_connection_readyWithAccount:(id)arg1;
- (void)_login_serverSettingsReadyWithAccount:(id)arg1;
- (void)_doLoginIgnoringProxy:(BOOL)arg1 withAccount:(id)arg2;
- (void)_doLoginIgnoringProxy:(BOOL)arg1;
- (void)autoReconnectWithAccount:(id)arg1;
- (void)autoReconnect;
- (void)disallowReconnection;

@end

