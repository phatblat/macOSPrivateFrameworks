//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDPRecoveryKeyUIProvider.h"

@class CDPContext, CDPLocalDeviceSecretHandler, CDPRemoteDeviceSecretValidator, NSArray, NSError, NSNumber;

@protocol CDPStateUIProvider <CDPRecoveryKeyUIProvider>
- (void)cdpContext:(CDPContext *)arg1 promptForInteractiveAuthenticationWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForAdoptionOfMultipleICSC:(void (^)(BOOL, NSError *))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(NSNumber *)arg3 isRandom:(BOOL)arg4 validator:(CDPRemoteDeviceSecretValidator *)arg5;
- (void)cdpContext:(CDPContext *)arg1 promptForRemoteSecretWithDevices:(NSArray *)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(CDPRemoteDeviceSecretValidator *)arg4;
- (void)cdpContext:(CDPContext *)arg1 promptForLocalSecretWithHandler:(CDPLocalDeviceSecretHandler *)arg2;

@optional
- (void)cdpContext:(CDPContext *)arg1 promptToInformUserOfAccountLockOutWithCompletion:(void (^)(void))arg2;
- (void)cdpContext:(CDPContext *)arg1 promptToInformUserOfAccountUnlockWithCompletion:(void (^)(void))arg2;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withDefaultIndex:(long long)arg3 withCompletion:(void (^)(long long))arg4;
- (void)cdpContext:(CDPContext *)arg1 showError:(NSError *)arg2 withCompletion:(void (^)(long long))arg3;
- (void)cdpContext:(CDPContext *)arg1 beginRemoteApprovalWithValidator:(CDPRemoteDeviceSecretValidator *)arg2;
@end
