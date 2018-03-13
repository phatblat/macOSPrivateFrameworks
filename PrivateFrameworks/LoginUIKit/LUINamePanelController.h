//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUIPanelController.h>

#import "LUITextFieldDelegate.h"
#import "NSTextFieldDelegate.h"

@class LUIEffectsButton, LUIPopUpButton, LUISecureTextFieldView, LUISimplePopover, LUITextFieldView, NSImageView, NSString;

@interface LUINamePanelController : LUIPanelController <LUITextFieldDelegate, NSTextFieldDelegate>
{
    NSImageView *_userPictureImageView;
    LUITextFieldView *_userNameTextField;
    LUISecureTextFieldView *_userPasswordTextField;
    LUIEffectsButton *_backButton;
    LUIPopUpButton *_eapAuthenticationPopUpButton;
    CDUnknownBlockType _tmHandler;
    LUISimplePopover *_popover;
}

- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (void)setTextMovementHandler:(CDUnknownBlockType)arg1;
- (void)setFocusOn:(int)arg1 forced:(BOOL)arg2;
- (void)shake;
- (void)eapAuthenticationPopUpSelectItemAtIndex:(long long)arg1;
- (long long)eapAuthenticationPopUpIndexOfSelectedItem;
- (void)setEAPAuthenticationPopUpMenu:(id)arg1;
- (void)setEAPAuthenticationPopUpHidden:(BOOL)arg1;
- (void)setUserImageHidden:(BOOL)arg1;
- (BOOL)textField:(id)arg1 processTextMovement:(long long)arg2;
- (void)controlTextDidChange:(id)arg1;
- (void)showNetworkStatusPopover:(id)arg1;
- (void)setNetworkStatus:(int)arg1;
- (id)viewForPopover;
- (void)setSecureTextFieldUsesHint:(BOOL)arg1;
- (void)setSecureTextFieldMode:(int)arg1;
- (struct CGPoint)pointForPopover:(int)arg1;
- (struct CGRect)progressRect;
- (void)setSecurityTextFieldPlaceholderString:(id)arg1;
- (void)setNameTextFieldPlaceholderString:(id)arg1;
- (id)secureTextField;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void)setUserImage:(id)arg1;
- (void)setUIEnabled:(BOOL)arg1;
- (void)setBackButtonHidden:(BOOL)arg1;
- (void)resetNameAndPassword;
- (void)forceDrawFocusRing;
- (void)forceClearFocusRing;
- (void)_closePopover;
- (void)_setupContentView;
- (void)_textFieldButtonPressed:(id)arg1;
- (void)_goButtonPressed:(id)arg1;
- (void)_backButtonPressed:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

