//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "MMCSCProgressIndicatorProtocol.h"
#import "MMLinkTextFieldDelegate.h"
#import "MMPinFieldViewDelegate.h"
#import "NSTouchBarProvider.h"

@class MMLinkTextField, MMPinFieldView, NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSTouchBar, NSView, iCloudTouchBarController;

@interface MMCSCSMSTargetRecoveryViewController : NSViewController <NSTouchBarProvider, MMPinFieldViewDelegate, MMLinkTextFieldDelegate, MMCSCProgressIndicatorProtocol>
{
    MMPinFieldView *_smsTargetPinFieldView;
    NSString *_smsTargetCountryCode;
    NSString *_smsTarget;
    NSString *_smsVerificationToken;
    id <MMCSCSMSTargetRecoveryViewControllerDelegate> _delegate;
    NSImageView *_smsTargetImageView;
    NSTextField *_smsTargetTitle;
    MMLinkTextField *_smsTargetMessage;
    NSView *_smsTargetPinFieldPlaceholder;
    NSLayoutConstraint *_smsTargetPinFieldWidthConstraint;
    NSButton *_smsTargetConfirmButton;
    NSButton *_smsTargetCancelButton;
    NSButton *_smsTargetHelpButton;
    NSProgressIndicator *_smsTargetProgressIndicator;
    iCloudTouchBarController *_touchBarController;
}

@property(retain) iCloudTouchBarController *touchBarController; // @synthesize touchBarController=_touchBarController;
@property(copy) NSString *smsVerificationToken; // @synthesize smsVerificationToken=_smsVerificationToken;
@property(copy) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy) NSString *smsTargetCountryCode; // @synthesize smsTargetCountryCode=_smsTargetCountryCode;
@property __weak NSProgressIndicator *smsTargetProgressIndicator; // @synthesize smsTargetProgressIndicator=_smsTargetProgressIndicator;
@property __weak NSButton *smsTargetHelpButton; // @synthesize smsTargetHelpButton=_smsTargetHelpButton;
@property __weak NSButton *smsTargetCancelButton; // @synthesize smsTargetCancelButton=_smsTargetCancelButton;
@property __weak NSButton *smsTargetConfirmButton; // @synthesize smsTargetConfirmButton=_smsTargetConfirmButton;
@property(retain) MMPinFieldView *smsTargetPinFieldView; // @synthesize smsTargetPinFieldView=_smsTargetPinFieldView;
@property __weak NSLayoutConstraint *smsTargetPinFieldWidthConstraint; // @synthesize smsTargetPinFieldWidthConstraint=_smsTargetPinFieldWidthConstraint;
@property __weak NSView *smsTargetPinFieldPlaceholder; // @synthesize smsTargetPinFieldPlaceholder=_smsTargetPinFieldPlaceholder;
@property __weak MMLinkTextField *smsTargetMessage; // @synthesize smsTargetMessage=_smsTargetMessage;
@property __weak NSTextField *smsTargetTitle; // @synthesize smsTargetTitle=_smsTargetTitle;
@property __weak NSImageView *smsTargetImageView; // @synthesize smsTargetImageView=_smsTargetImageView;
@property id <MMCSCSMSTargetRecoveryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickedOnLink:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (id)_countryPrefixForCountryCode:(id)arg1;
- (id)_passphraseFromSecureEntryView;
- (void)clearSecureEntryView;
- (void)stopCSCProgressIndicator:(id)arg1;
- (void)startCSCProgressIndicator:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)confirmButtonClicked:(id)arg1;
- (void)setupViewWithPinLength:(long long)arg1;
@property(readonly) NSTouchBar *touchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

