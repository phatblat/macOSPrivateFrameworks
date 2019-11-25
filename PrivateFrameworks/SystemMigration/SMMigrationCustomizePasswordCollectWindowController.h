//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSString, NSTextField, NSWindow;

@interface SMMigrationCustomizePasswordCollectWindowController : NSWindowController
{
    BOOL _passwordIsTemporary;
    NSTextField *_passwordField;
    NSString *_password;
    NSString *_verifyPassword;
    NSString *_errorText;
    NSString *_instructionText;
    NSButton *_setPasswordButton;
    NSWindow *_overWindow;
    NSString *_userShortName;
}

@property __weak NSString *userShortName; // @synthesize userShortName=_userShortName;
@property NSWindow *overWindow; // @synthesize overWindow=_overWindow;
@property NSButton *setPasswordButton; // @synthesize setPasswordButton=_setPasswordButton;
@property BOOL passwordIsTemporary; // @synthesize passwordIsTemporary=_passwordIsTemporary;
@property(retain) NSString *instructionText; // @synthesize instructionText=_instructionText;
@property(retain) NSString *errorText; // @synthesize errorText=_errorText;
@property(retain) NSString *verifyPassword; // @synthesize verifyPassword=_verifyPassword;
@property(retain) NSString *password; // @synthesize password=_password;
@property NSTextField *passwordField; // @synthesize passwordField=_passwordField;
- (void).cxx_destruct;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)pressedSetpassword:(id)arg1;
- (void)collectPasswordForUser:(id)arg1 overWindow:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (void)windowDidLoad;

@end

