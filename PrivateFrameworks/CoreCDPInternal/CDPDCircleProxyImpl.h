//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPDCircleProxy.h"

@class CDPContext, NSString;

@interface CDPDCircleProxyImpl : NSObject <CDPDCircleProxy>
{
    CDPContext *_cdpContext;
}

+ (BOOL)canAuthenticate;
+ (BOOL)tryRegisteringCredentialsFromContext:(id)arg1;
+ (BOOL)registerCredentialsFromContext:(id)arg1 force:(BOOL)arg2;
+ (BOOL)registerCredentialsFromContext:(id)arg1;
@property(retain, nonatomic) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
- (void).cxx_destruct;
- (BOOL)_performSOSCBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)setViewsWithEnableSet:(id)arg1 disableSet:(id)arg2;
- (BOOL)isLastBackupMakingPeer:(id *)arg1;
- (BOOL)removeNonViewAwarePeers:(id *)arg1;
- (BOOL)hasNonViewAwarePeers;
- (BOOL)anyPeerHasEnabledViewsInSet:(id)arg1 error:(id *)arg2;
- (BOOL)_viewMemberForView:(struct __CFString *)arg1 error:(id *)arg2;
- (BOOL)viewMemberForAutofillPasswords:(id *)arg1;
- (BOOL)viewMemberForPCSMaster:(id *)arg1;
- (BOOL)requestToResetCloudKitData:(id *)arg1;
- (BOOL)requestToResetCircle:(id *)arg1;
- (BOOL)requestToJoinCircleAfterRestore:(id *)arg1;
- (BOOL)requestToJoinCircle:(id *)arg1;
- (BOOL)removeThisDeviceFromCircle:(id *)arg1;
- (BOOL)synchronizeCircleViews;
- (id)generateVerifierWithRcoveryKey:(id)arg1 error:(id *)arg2;
- (id)generateRecoveryKeyWithInfo:(id)arg1 error:(id *)arg2;
- (id)peerDeviceNamesByPeerID;
- (unsigned long long)peerCount;
- (id)peerId;
- (int)_authenticatedCircleStatus:(id *)arg1;
- (int)_circleStatus:(id *)arg1;
- (int)circleStatus:(id *)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

