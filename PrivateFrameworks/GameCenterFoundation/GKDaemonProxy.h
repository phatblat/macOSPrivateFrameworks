//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKServiceProxy.h>

#import "GKClientProtocol.h"
#import "NSXPCConnectionDelegate.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCConnection;

@interface GKDaemonProxy : GKServiceProxy <NSXPCConnectionDelegate, GKClientProtocol>
{
    int _hostPID;
    NSXPCConnection *_connection;
    NSDictionary *_interfaceLookup;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
    id <GKDaemonProxyDataUpdateDelegate> _dataUpdateDelegate;
    id <GKDaemonProxyNetworkActivityIndicatorDelegate> _networkActivityIndicatorDelegate;
}

+ (id)proxyForPlayer:(id)arg1;
+ (void)removeProxyForPlayer:(id)arg1;
+ (id)daemonProxy;
@property(nonatomic) int hostPID; // @synthesize hostPID=_hostPID;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (id)replyQueueForRequestSelector:(SEL)arg1;
- (oneway void)setLogBits:(int)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;
@property(nonatomic) id <GKDaemonProxyDataUpdateDelegate> dataUpdateDelegate; // @synthesize dataUpdateDelegate=_dataUpdateDelegate;
@property(nonatomic) id <GKDaemonProxyNetworkActivityIndicatorDelegate> networkActivityIndicatorDelegate; // @synthesize networkActivityIndicatorDelegate=_networkActivityIndicatorDelegate;
- (void)resetLoginCancelCount;
- (void)loadRemoteImageDataForClientForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2;
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;
- (oneway void)didReceiveData:(id)arg1 reliably:(BOOL)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;
- (oneway void)didConnectToParticipantWithID:(id)arg1;
- (oneway void)relayPushNotification:(id)arg1;
- (oneway void)cancelGameInvite:(id)arg1;
- (oneway void)declineInviteWithNotification:(id)arg1;
- (oneway void)acceptInviteWithNotification:(id)arg1;
- (oneway void)acceptMultiplayerGameInvite;
- (oneway void)fetchTurnBasedData;
- (oneway void)challengeCompleted:(id)arg1;
- (oneway void)challengeReceived:(id)arg1;
- (oneway void)completedChallengeSelected:(id)arg1;
- (void)dispatchCompletedChallenge:(id)arg1;
- (oneway void)achievementSelected:(id)arg1;
- (oneway void)scoreSelected:(id)arg1;
- (oneway void)receivedChallengeSelected:(id)arg1;
- (oneway void)friendRequestSelected:(id)arg1;
- (oneway void)respondedToNearbyInvite:(id)arg1;
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)setPreferencesValues:(id)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;
- (id)authenticatedLocalPlayersWithStatus:(unsigned long long)arg1;
- (id)authenticatedPlayerInfo;
- (BOOL)hasAuthenticatedAccount;
- (id)accountName;
- (id)authenticatedPlayerID;
- (void)dealloc;
- (id)init;
- (oneway void)setTestGame:(id)arg1;
- (void)buildInterfaceLookup;
- (id)interfaceLookup;
- (void)addInterface:(id)arg1 toLookup:(id)arg2;
- (void)resetServiceLookup;
- (void)_resetServiceLookup;
- (id)concurrentRequestSemaphore;
- (id)invocationQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
