//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentAuthorizationChildViewController.h>

#import "NSTextFieldDelegate.h"
#import "PKContactLabelMenuControllerDelegate.h"

@class CNContact, NSArray, NSButton, NSComboBox, NSImageView, NSPopUpButton, NSResponder, NSSet, NSStackView, NSString, NSTextField, PKContactLabelMenuController, PKContactTextField;

@interface PKContactEditorViewController : PKPaymentAuthorizationChildViewController <PKContactLabelMenuControllerDelegate, NSTextFieldDelegate>
{
    id <PKContactEditorViewControllerDelegate> _delegate;
    unsigned long long _mode;
    CNContact *_contact;
    NSArray *_errors;
    NSSet *_requiredFields;
    NSImageView *_paymentLogoImageView;
    NSStackView *_fieldsStackView;
    NSTextField *_titleLabel;
    NSStackView *_namesStackView;
    PKContactTextField *_givenNameTextField;
    PKContactTextField *_familyNameTextField;
    NSStackView *_phoneticNamesStackView;
    PKContactTextField *_phoneticGivenNameTextField;
    PKContactTextField *_phoneticFamilyNameTextField;
    NSPopUpButton *_labelPopUpButton;
    NSComboBox *_labelComboBox;
    PKContactTextField *_emailTextField;
    PKContactTextField *_phoneTextField;
    NSButton *_cancelButton;
    NSButton *_saveButton;
    NSResponder *_initialFirstResponder;
    PKContactLabelMenuController *_labelMenuController;
}

@property(retain, nonatomic) PKContactLabelMenuController *labelMenuController; // @synthesize labelMenuController=_labelMenuController;
@property(retain, nonatomic) NSResponder *initialFirstResponder; // @synthesize initialFirstResponder=_initialFirstResponder;
@property(retain, nonatomic) NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) PKContactTextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) PKContactTextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(retain, nonatomic) NSComboBox *labelComboBox; // @synthesize labelComboBox=_labelComboBox;
@property(retain, nonatomic) NSPopUpButton *labelPopUpButton; // @synthesize labelPopUpButton=_labelPopUpButton;
@property(retain, nonatomic) PKContactTextField *phoneticFamilyNameTextField; // @synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField;
@property(retain, nonatomic) PKContactTextField *phoneticGivenNameTextField; // @synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField;
@property(retain, nonatomic) NSStackView *phoneticNamesStackView; // @synthesize phoneticNamesStackView=_phoneticNamesStackView;
@property(retain, nonatomic) PKContactTextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property(retain, nonatomic) PKContactTextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property(retain, nonatomic) NSStackView *namesStackView; // @synthesize namesStackView=_namesStackView;
@property(retain) NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) NSStackView *fieldsStackView; // @synthesize fieldsStackView=_fieldsStackView;
@property(retain) NSImageView *paymentLogoImageView; // @synthesize paymentLogoImageView=_paymentLogoImageView;
@property(retain, nonatomic) NSSet *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <PKContactEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_shouldShowPhoneticName;
- (void)_applyErrors:(id)arg1;
- (void)_applyContact:(id)arg1;
- (id)_controlsForError:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)contactLabelMenuController:(id)arg1 didShowControl:(id)arg2;
- (void)contactLabelMenuController:(id)arg1 didHideControl:(id)arg2;
- (void)saveButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
@property(readonly, nonatomic) CNContact *editedContact;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)resetSubviewsOfView:(id)arg1;
- (void)reset;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

