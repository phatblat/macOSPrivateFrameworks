//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPDCircleProxy.h"

@class CDPContext, NSString, OTClique;

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy>
{
    OTClique *_clique;
    CDPContext *_cdpContext;
}

@property(readonly, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
- (void).cxx_destruct;
- (id)_pairingChannelContext;
- (id)pairingChannelAcceptor:(id *)arg1;
- (id)pairingChannelInitiator:(id *)arg1;
- (BOOL)canAuthenticate;
- (BOOL)tryRegisteringCredentials;
- (BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)arg1;
- (BOOL)registerCredentials;
- (BOOL)registerCredentialsIfMissing;
- (BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (BOOL)isLastBackupMakingPeer:(id *)arg1;
- (BOOL)removeNonViewAwarePeers:(id *)arg1;
- (BOOL)hasNonViewAwarePeers;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id *)arg2;
- (BOOL)viewMemberForAutofillPasswords:(id *)arg1;
- (BOOL)requestToResetCloudKitDataForReason:(id)arg1 error:(id *)arg2;
- (BOOL)requestToResetCircle:(id *)arg1;
- (BOOL)requestToJoinCircleAfterRestore:(id *)arg1;
- (BOOL)requestToJoinCircle:(id *)arg1;
- (BOOL)removeThisDeviceFromCircle:(id *)arg1;
- (BOOL)synchronizeCircleViews;
- (BOOL)waitForInitialSync:(id *)arg1;
- (id)generateVerifierWithRecoveryKey:(id)arg1 error:(id *)arg2;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (id)peerDeviceNamesByPeerID;
- (unsigned long long)peerCount;
- (id)peerId;
- (int)_sos_circleStatus:(id *)arg1;
- (int)_sos_authenticatedCircleStatus:(id *)arg1;
- (int)sos_circleStatus:(id *)arg1;
- (long long)_authenticatedCircleStatus:(id *)arg1;
- (long long)_circleStatus:(id *)arg1;
- (unsigned long long)cdpStatusFromOT:(long long)arg1;
- (unsigned long long)cdpStatusFromSOS:(int)arg1;
- (id)contextType;
- (void)reportFailure:(id)arg1;
- (void)reportSuccess;
- (void)waitForUpdate;
- (unsigned long long)circleStatus:(id *)arg1;
- (int)cachedCircleStatus:(id *)arg1;
- (unsigned long long)cachedCliqueStatus:(id *)arg1;
- (void)didJoinCircleAfterRecovery:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
