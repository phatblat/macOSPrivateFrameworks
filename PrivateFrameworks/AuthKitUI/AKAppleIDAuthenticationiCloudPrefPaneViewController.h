//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSButton, NSProgressIndicator, NSString, NSTextField;

@interface AKAppleIDAuthenticationiCloudPrefPaneViewController : NSViewController
{
    BOOL _isUsernameEditable;
    NSButton *_loginButton;
    NSButton *_forgotButton;
    NSButton *_createButton;
    NSButton *_learnMoreButton;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
    NSString *_initialUsername;
    NSString *_loginButtonString;
    long long _selectedButton;
    CDUnknownBlockType _loginButtonAction;
    CDUnknownBlockType _forgotButtonAction;
    CDUnknownBlockType _createButtonAction;
    NSProgressIndicator *_progressIndicator;
}

@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(copy) CDUnknownBlockType createButtonAction; // @synthesize createButtonAction=_createButtonAction;
@property(copy) CDUnknownBlockType forgotButtonAction; // @synthesize forgotButtonAction=_forgotButtonAction;
@property(copy) CDUnknownBlockType loginButtonAction; // @synthesize loginButtonAction=_loginButtonAction;
@property long long selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain) NSString *loginButtonString; // @synthesize loginButtonString=_loginButtonString;
@property(retain) NSString *initialUsername; // @synthesize initialUsername=_initialUsername;
@property(setter=setUsernameEditable:) BOOL isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property(retain) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain) NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain) NSButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain) NSButton *createButton; // @synthesize createButton=_createButton;
@property(retain) NSButton *forgotButton; // @synthesize forgotButton=_forgotButton;
@property(retain) NSButton *loginButton; // @synthesize loginButton=_loginButton;
- (void).cxx_destruct;
- (void)learnMorePressed:(id)arg1;
- (void)createPasswordPressed:(id)arg1;
- (void)forgotPasswordPressed:(id)arg1;
- (void)defaultButtonPressed:(id)arg1;
- (void)disableUserInteractionAndStartSpinner;
- (void)_disableUserInteraction;
- (void)allowUserInteraction;
- (void)showError:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)awakeFromNib;
- (id)init;

@end
