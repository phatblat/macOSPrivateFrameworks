//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

#import "CDPDRemoteDeviceSecretValidatorDelegate.h"

@class NSString;

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>
{
}

- (void)_showAccountResetConfirmationWithoutRecovery:(CDUnknownBlockType)arg1;
- (id)_resetProtectedDataErrorUnrecoverable;
- (id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)arg1;
- (void)_showAccountResetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_infoDictionaryWithTitle:(id)arg1 andBody:(id)arg2;
- (id)_entryLimitRecoveryKeyAvailableBodyForDevice:(id)arg1;
- (id)_entryLimitResetAvailableBodyForDevice:(id)arg1;
- (id)_entryLimitNoResetForRepairForDevice:(id)arg1;
- (id)_entryLimitSignInBodyForDevice:(id)arg1;
- (id)_entryLimitTitleForDevice:(id)arg1;
- (id)_softLimitErrorBodyForDevice:(id)arg1;
- (id)_hardLimitErrorBodyWithDevice:(id)arg1;
- (void)_showEntryLimitError:(id)arg1 withRecoveryOptionHandlers:(id)arg2 defaultIndex:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_cancelRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_accountResetRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_skipSignInRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_fallbackRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_hardLimitUserInfoForDevice:(id)arg1;
- (id)_userInfoForLimit:(unsigned long long)arg1 withDevice:(id)arg2;
- (void)_populateUserInfo:(id)arg1 recoveryIndexHandlers:(id)arg2 withRecoveryOption:(id)arg3;
- (void)_handleLimit:(unsigned long long)arg1 forDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleHardLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id *)arg2;
- (void)secretValidatorWillAttemptRecovery;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)arg1;
- (void)remoteSecretValidator:(id)arg1 applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg2;
- (void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(BOOL)arg2 usingValidator:(id)arg3;
- (unsigned long long)_escapeOfferForDevices:(id)arg1 remoteApproval:(BOOL)arg2 forMultipleICSC:(BOOL)arg3;
- (id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

