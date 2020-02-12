//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AKAppleIDAuthenticationContext.h"

#import "AKAppleIDAuthenticationUIProvider.h"
#import "AuthWebViewDelegate.h"

@class AKAuthWebTabView, AKAuthenticationPromptController, AKNativeAccountRecoveryController, AKSecondFactorCodeEntryController, NSImage, NSString, NSView, NSWindow;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AuthWebViewDelegate, AKAppleIDAuthenticationUIProvider>
{
    AKAuthenticationPromptController *_authenticationPrompt;
    AKAuthWebTabView *_webViewUI;
    AKSecondFactorCodeEntryController *_secondFactorPrompt;
    int _numberOfAttempts;
    AKNativeAccountRecoveryController *_nativeRecoveryController;
    BOOL _makeSheetCritical;
    BOOL _showRememberPasswordCheckbox;
    BOOL _rememberPassswordCheckedByDefault;
    BOOL _hideAlternativeButton;
    BOOL _hideCancelButton;
    BOOL _clientShouldHandleAlternativeButtonAction;
    BOOL _shouldPreventSignIn;
    BOOL _hideReasonString;
    BOOL _alwaysShowUsernameField;
    NSWindow *_hostWindow;
    NSView *_hostView;
    NSString *_rememberPasswordCheckboxString;
    NSString *_alternativeButtonString;
    NSString *_privacyBundleIdentifier;
    NSString *_cancelButtonString;
    long long _selectedButton;
    NSImage *_displayImage;
    NSString *_initialError;
    NSString *_windowTitle;
    id <AKAppleIDAuthenticationInAppContextAlertDelegate> _alertDelegate;
    id <CDPStateUIProvider> _cdpUiProvider;
    id <AKAppleIDAuthenticationInAppContextPasswordDelegate> __passwordDelegate;
}

@property(nonatomic, setter=_setPasswordDelegate:) __weak id <AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate; // @synthesize _passwordDelegate=__passwordDelegate;
@property(retain, setter=_setCdpUiProvider:) id <CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property(nonatomic) __weak id <AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property BOOL alwaysShowUsernameField; // @synthesize alwaysShowUsernameField=_alwaysShowUsernameField;
@property(retain) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property(retain) NSString *initialError; // @synthesize initialError=_initialError;
@property(retain) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property long long selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain) NSString *cancelButtonString; // @synthesize cancelButtonString=_cancelButtonString;
@property BOOL hideReasonString; // @synthesize hideReasonString=_hideReasonString;
@property BOOL shouldPreventSignIn; // @synthesize shouldPreventSignIn=_shouldPreventSignIn;
@property BOOL clientShouldHandleAlternativeButtonAction; // @synthesize clientShouldHandleAlternativeButtonAction=_clientShouldHandleAlternativeButtonAction;
@property(copy) NSString *privacyBundleIdentifier; // @synthesize privacyBundleIdentifier=_privacyBundleIdentifier;
@property BOOL hideCancelButton; // @synthesize hideCancelButton=_hideCancelButton;
@property BOOL hideAlternativeButton; // @synthesize hideAlternativeButton=_hideAlternativeButton;
@property(retain) NSString *alternativeButtonString; // @synthesize alternativeButtonString=_alternativeButtonString;
@property BOOL rememberPassswordCheckedByDefault; // @synthesize rememberPassswordCheckedByDefault=_rememberPassswordCheckedByDefault;
@property(retain) NSString *rememberPasswordCheckboxString; // @synthesize rememberPasswordCheckboxString=_rememberPasswordCheckboxString;
@property BOOL showRememberPasswordCheckbox; // @synthesize showRememberPasswordCheckbox=_showRememberPasswordCheckbox;
@property BOOL makeSheetCritical; // @synthesize makeSheetCritical=_makeSheetCritical;
@property(retain) NSView *hostView; // @synthesize hostView=_hostView;
@property __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void).cxx_destruct;
- (void)_setupAuthenticationPromptControllerAtMode:(long long)arg1;
- (void)_updateUI:(CDUnknownBlockType)arg1;
- (void)showCDPView:(id)arg1 modalForWindow:(id)arg2 withController:(id)arg3;
- (void)endCDPView;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)_presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissKeepUsingUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentKeepUsingUIForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setupButtonActionsForSignInController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentBasicLoginUIAlertWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)_isSatisfyingPasswordRequirements;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_contextWillBeginPresentingSecondaryUI;
- (void)_contextDidDismissLoginAlertController;
- (void)_contextWillDismissLoginAlertController;
- (void)_contextDidPresentLoginController;
- (void)dismissServerProvidedUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissNativeRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

