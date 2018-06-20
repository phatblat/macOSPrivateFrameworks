//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACC2SVTrustedDeviceObject, NSString;

@protocol ACC2SVAuthenticationUIControllerDelegate <NSObject>
- (void)uiControllerSetup:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerHideViewAnimated:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerCancelGettingImages:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiController:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1 getImageWithURL:(NSString *)arg2 completion:(void (^)(NSData *))arg3;
- (void)uiControllerUserIsUnableToReceiveVerificationCode:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiController:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1 resendVerificationCodeWithCompletion:(void (^)(BOOL))arg2;
- (void)uiControllerRefreshDeviceList:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;

@optional
- (int)uiControllerRequestSenderProcessID:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (ACC2SVTrustedDeviceObject *)uiControllerSelectedDevice:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (NSString *)uiControllerRealm:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (NSString *)uiControllerTitle:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (void)uiControllerUserNeedsToAddTrustedDevices:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
- (NSString *)uiControllerMyAppleConnectURL:(id <ACC2SVAuthenticationUIControllerProtocol>)arg1;
@end
