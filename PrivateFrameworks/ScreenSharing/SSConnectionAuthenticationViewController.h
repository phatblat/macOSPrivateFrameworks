//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"

@class NSButton, NSLayoutConstraint, NSMatrix, NSObject<SSConnectionPromptObserver>, NSProgressIndicator, NSSecureTextField, NSString, NSTextField, NSView;

@interface SSConnectionAuthenticationViewController : NSViewController <NSTextFieldDelegate>
{
    NSObject<SSConnectionPromptObserver> *mPromptObserver;
    double toggleExpandAmount;
    NSTextField *mHostNameLabel;
    NSMatrix *mGuestOrUserMatrix;
    NSView *mNamePassContainer;
    NSLayoutConstraint *mNamePassTopConstraint;
    NSLayoutConstraint *mNamePassBottomConstraint;
    NSLayoutConstraint *mNamePassLeftConstraint;
    NSLayoutConstraint *mNamePassRightConstraint;
    NSTextField *mUsernameLabel;
    NSTextField *mUsernameField;
    NSTextField *mPasswordLabel;
    NSSecureTextField *mPasswordField;
    NSButton *mSaveToKeychainCheckbox;
    NSButton *mConnectButton;
    NSProgressIndicator *mConnectingProgressSpinner;
    NSTextField *mConnectingText;
    NSString *_unlocalizedKeyString;
}

@property NSString *unlocalizedKeyString; // @synthesize unlocalizedKeyString=_unlocalizedKeyString;
@property NSTextField *mConnectingText; // @synthesize mConnectingText;
@property NSProgressIndicator *mConnectingProgressSpinner; // @synthesize mConnectingProgressSpinner;
@property NSButton *mConnectButton; // @synthesize mConnectButton;
@property NSButton *mSaveToKeychainCheckbox; // @synthesize mSaveToKeychainCheckbox;
@property NSSecureTextField *mPasswordField; // @synthesize mPasswordField;
@property NSTextField *mPasswordLabel; // @synthesize mPasswordLabel;
@property NSTextField *mUsernameField; // @synthesize mUsernameField;
@property NSTextField *mUsernameLabel; // @synthesize mUsernameLabel;
@property NSLayoutConstraint *mNamePassRightConstraint; // @synthesize mNamePassRightConstraint;
@property NSLayoutConstraint *mNamePassLeftConstraint; // @synthesize mNamePassLeftConstraint;
@property NSLayoutConstraint *mNamePassBottomConstraint; // @synthesize mNamePassBottomConstraint;
@property NSLayoutConstraint *mNamePassTopConstraint; // @synthesize mNamePassTopConstraint;
@property NSView *mNamePassContainer; // @synthesize mNamePassContainer;
@property NSMatrix *mGuestOrUserMatrix; // @synthesize mGuestOrUserMatrix;
@property NSTextField *mHostNameLabel; // @synthesize mHostNameLabel;
@property id <SSConnectionPromptObserver> promptObserver; // @synthesize promptObserver=mPromptObserver;
- (void)adjustViewHeightBy:(double)arg1;
@property NSString *password;
@property NSString *username;
- (void)setHostName:(id)arg1 isVNC:(BOOL)arg2;
- (BOOL)shouldSaveCredentialsToKeychain;
- (BOOL)shouldConnectAsGuest;
- (void)setUsername:(id)arg1 andPassword:(id)arg2 fromKeychain:(BOOL)arg3;
- (void)cancelClicked:(id)arg1;
- (void)connectClicked:(id)arg1;
- (void)radioClicked:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)userPassRadiosVisible;
- (void)setIsConnecting:(BOOL)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

