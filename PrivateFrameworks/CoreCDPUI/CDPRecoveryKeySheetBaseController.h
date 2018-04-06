//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDPContext, CDPRecoveryKeyPrintController, CDPRemoteDeviceSecretValidator, NSButton, NSImage, NSImageView, NSProgressIndicator, NSString, NSTextField, NSView, NSWindow;

@interface CDPRecoveryKeySheetBaseController : NSObject
{
    BOOL _isCreation;
    NSImage *_displayImage;
    NSTextField *_title;
    NSTextField *_cdpKey;
    NSTextField *_cdpKeyEntry;
    NSTextField *_cdpKeyEntryErrorLabel;
    NSButton *_continueButton;
    NSButton *_cancelButton;
    NSButton *_otherButton;
    NSView *_containerView;
    NSView *_cdpRecoveryKeyEntryView;
    NSView *_cdpRecoveryKeyDisplayView;
    NSImageView *_cdpRecoveryKeyImageView;
    NSProgressIndicator *_spinner;
    NSTextField *_cdpKeyDisplayTitle;
    NSTextField *_cdpKeyDisplayDescription;
    CDPContext *_cdpContext;
    id <CDPRecoveryKeyValidator> _recoveryKeyValidator;
    CDPRemoteDeviceSecretValidator *_remoteDeviceSecretValidator;
    NSWindow *_parentWindow;
    long long _mode;
    CDUnknownBlockType _completionHandler;
    CDPRecoveryKeyPrintController *_printController;
    NSString *_recoveryKey;
}

@property(retain, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(retain) CDPRecoveryKeyPrintController *printController; // @synthesize printController=_printController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly) long long mode; // @synthesize mode=_mode;
@property __weak NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(retain) CDPRemoteDeviceSecretValidator *remoteDeviceSecretValidator; // @synthesize remoteDeviceSecretValidator=_remoteDeviceSecretValidator;
@property(retain) id <CDPRecoveryKeyValidator> recoveryKeyValidator; // @synthesize recoveryKeyValidator=_recoveryKeyValidator;
@property(retain) CDPContext *cdpContext; // @synthesize cdpContext=_cdpContext;
@property(retain) NSTextField *cdpKeyDisplayDescription; // @synthesize cdpKeyDisplayDescription=_cdpKeyDisplayDescription;
@property(retain) NSTextField *cdpKeyDisplayTitle; // @synthesize cdpKeyDisplayTitle=_cdpKeyDisplayTitle;
@property(retain) NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain) NSImageView *cdpRecoveryKeyImageView; // @synthesize cdpRecoveryKeyImageView=_cdpRecoveryKeyImageView;
@property(retain) NSView *cdpRecoveryKeyDisplayView; // @synthesize cdpRecoveryKeyDisplayView=_cdpRecoveryKeyDisplayView;
@property(retain) NSView *cdpRecoveryKeyEntryView; // @synthesize cdpRecoveryKeyEntryView=_cdpRecoveryKeyEntryView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSButton *otherButton; // @synthesize otherButton=_otherButton;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain) NSTextField *cdpKeyEntryErrorLabel; // @synthesize cdpKeyEntryErrorLabel=_cdpKeyEntryErrorLabel;
@property(retain) NSTextField *cdpKeyEntry; // @synthesize cdpKeyEntry=_cdpKeyEntry;
@property(retain) NSTextField *cdpKey; // @synthesize cdpKey=_cdpKey;
@property(retain) NSTextField *title; // @synthesize title=_title;
@property(retain, nonatomic) NSImage *displayImage; // @synthesize displayImage=_displayImage;
@property BOOL isCreation; // @synthesize isCreation=_isCreation;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (void)processCollectedRecoveryKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showError:(BOOL)arg1;
- (void)enableUserInteractionAndStopSpinner;
- (void)disableUserInteractionAndStartSpinner;
- (void)handleMaxAttemptReached:(id)arg1;
- (void)handleDontHaveKey:(id)arg1;
- (void)handlePrint:(id)arg1;
- (void)otherButtonPressed:(id)arg1;
- (void)continueButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)handleCompletion:(BOOL)arg1 andError:(id)arg2;
- (void)showView:(id)arg1;
- (BOOL)isUsersOnlyDevice;
- (void)setupDisplayView;
- (void)setupEntryView;
- (void)dealloc;
- (id)initWithContext:(id)arg1 deviceSecretvalidator:(id)arg2;
- (id)initWithContext:(id)arg1 validator:(id)arg2;
- (id)init;

@end
