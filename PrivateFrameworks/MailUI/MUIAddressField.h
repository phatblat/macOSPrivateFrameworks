//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

#import "CNAutocompleteFetchDelegate.h"
#import "CNAutocompleteResultWindowDelegate.h"
#import "CNContactPickerDelegate.h"
#import "NSCandidateListTouchBarItemDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTokenFieldDelegate.h"
#import "NSTouchBarDelegate.h"

@class CNAutocompleteResult, CNAutocompleteResultWindow, CNAutocompleteStore, MUITokenAddressField, NSArray, NSButton, NSLayoutConstraint, NSMapTable, NSScrollView, NSString;

@interface MUIAddressField : NSControl <CNAutocompleteResultWindowDelegate, CNAutocompleteFetchDelegate, CNContactPickerDelegate, NSTableViewDataSource, NSTableViewDelegate, NSTokenFieldDelegate, NSCandidateListTouchBarItemDelegate, NSTouchBarDelegate>
{
    SEL _action;
    id _target;
    long long _style;
    BOOL _isShowingContactPicker;
    BOOL _shouldDrawFocusRing;
    BOOL _isBoundToTokenField;
    BOOL _isShowingSelectedCompletion;
    BOOL _hideInitialEmptyCandidateList;
    BOOL _ignoreCompletionForTextChange;
    id <MUIAddressFieldContextProvider> _delegate;
    id <MUIAddressFieldSenderAddressHandler> _senderAddressHandler;
    NSString *_accountIdentifier;
    NSString *_senderAddress;
    NSString *_senderDomain;
    NSScrollView *_scrollView;
    NSButton *_addContactButton;
    CNAutocompleteResultWindow *_autocompleteResultWindow;
    CNAutocompleteStore *_autocompleteStore;
    CNAutocompleteResult *_selectedResult;
    NSString *_currentPrefix;
    id <CNCancelable> _currentSearchRequest;
    id <CNCancelable> _lastSuccessfulSearchRequest;
    long long _addressDisplayMode;
    id _tokenValue;
    NSLayoutConstraint *_addContactButtonTrailingConstraint;
    NSLayoutConstraint *_tokenFieldTrailingConstraint;
    NSLayoutConstraint *_tokenFieldBottomConstraint;
    NSMapTable *_representedObjectsCache;
    NSString *_lastSendingAddress;
    NSString *_previousPrimaryAddress;
    MUITokenAddressField *_tokenField;
    NSLayoutConstraint *_addressFieldHeightConstraint;
    id <MUITokenAddressDelegate> _tokenAddressDelegate;
    struct _NSRange _editingRange;
}

+ (id)_contactPicker;
+ (id)readablePasteboardTypes;
+ (id)keyPathsForValuesAffectingAddresses;
@property(retain, nonatomic) id <MUITokenAddressDelegate> tokenAddressDelegate; // @synthesize tokenAddressDelegate=_tokenAddressDelegate;
@property(retain, nonatomic) NSLayoutConstraint *addressFieldHeightConstraint; // @synthesize addressFieldHeightConstraint=_addressFieldHeightConstraint;
@property(nonatomic) BOOL ignoreCompletionForTextChange; // @synthesize ignoreCompletionForTextChange=_ignoreCompletionForTextChange;
@property(retain, nonatomic) MUITokenAddressField *tokenField; // @synthesize tokenField=_tokenField;
@property(nonatomic) BOOL hideInitialEmptyCandidateList; // @synthesize hideInitialEmptyCandidateList=_hideInitialEmptyCandidateList;
@property(copy, nonatomic) NSString *previousPrimaryAddress; // @synthesize previousPrimaryAddress=_previousPrimaryAddress;
@property(copy, nonatomic) NSString *lastSendingAddress; // @synthesize lastSendingAddress=_lastSendingAddress;
@property(nonatomic) BOOL isShowingSelectedCompletion; // @synthesize isShowingSelectedCompletion=_isShowingSelectedCompletion;
@property(nonatomic) BOOL isBoundToTokenField; // @synthesize isBoundToTokenField=_isBoundToTokenField;
@property(nonatomic) BOOL shouldDrawFocusRing; // @synthesize shouldDrawFocusRing=_shouldDrawFocusRing;
@property(retain, nonatomic) NSMapTable *representedObjectsCache; // @synthesize representedObjectsCache=_representedObjectsCache;
@property(nonatomic) __weak NSLayoutConstraint *tokenFieldBottomConstraint; // @synthesize tokenFieldBottomConstraint=_tokenFieldBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *tokenFieldTrailingConstraint; // @synthesize tokenFieldTrailingConstraint=_tokenFieldTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *addContactButtonTrailingConstraint; // @synthesize addContactButtonTrailingConstraint=_addContactButtonTrailingConstraint;
@property(nonatomic) BOOL isShowingContactPicker; // @synthesize isShowingContactPicker=_isShowingContactPicker;
@property(retain, nonatomic) id tokenValue; // @synthesize tokenValue=_tokenValue;
@property(nonatomic) long long addressDisplayMode; // @synthesize addressDisplayMode=_addressDisplayMode;
@property(nonatomic) struct _NSRange editingRange; // @synthesize editingRange=_editingRange;
@property(retain, nonatomic) id <CNCancelable> lastSuccessfulSearchRequest; // @synthesize lastSuccessfulSearchRequest=_lastSuccessfulSearchRequest;
@property(retain, nonatomic) id <CNCancelable> currentSearchRequest; // @synthesize currentSearchRequest=_currentSearchRequest;
@property(copy, nonatomic) NSString *currentPrefix; // @synthesize currentPrefix=_currentPrefix;
@property(retain, nonatomic) CNAutocompleteResult *selectedResult; // @synthesize selectedResult=_selectedResult;
@property(readonly, nonatomic) CNAutocompleteStore *autocompleteStore; // @synthesize autocompleteStore=_autocompleteStore;
@property(retain, nonatomic) CNAutocompleteResultWindow *autocompleteResultWindow; // @synthesize autocompleteResultWindow=_autocompleteResultWindow;
@property(retain, nonatomic) NSButton *addContactButton; // @synthesize addContactButton=_addContactButton;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *senderDomain; // @synthesize senderDomain=_senderDomain;
@property(copy, nonatomic) NSString *senderAddress; // @synthesize senderAddress=_senderAddress;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) __weak id <MUIAddressFieldSenderAddressHandler> senderAddressHandler; // @synthesize senderAddressHandler=_senderAddressHandler;
@property(nonatomic) __weak id <MUIAddressFieldContextProvider> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)setAccessibilityTitleUIElement:(id)arg1;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (BOOL)_addressFieldNeedsToBeScrollable;
- (void)_resizeFieldIfNeeded;
- (void)updateConstraints;
- (BOOL)_hasFocus;
- (void)contactPickerDidClose:(id)arg1;
- (void)contactPickerWillClose:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)_showContactPicker:(id)arg1;
- (void)_tokenFieldGainedFocus:(id)arg1;
- (void)_tokenFieldMouseAction:(id)arg1;
- (void)candidateListTouchBarItem:(id)arg1 endSelectingCandidateAtIndex:(long long)arg2;
- (void)_updateAutocompleteTouchBarButtons;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)_updateSenderAddressHandler;
- (struct CGRect)_adjustedFrameForAutocompleteResultWindow;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_windowDidResize:(id)arg1;
- (void)_completeSelection:(id)arg1;
- (void)_presentAutocompletionResultWindow;
- (id)_completionStringForSelectedRecord;
- (BOOL)_allowNextPeoplePrediction;
- (void)_displayNextPeoplePrediction;
- (BOOL)tokenField:(id)arg1 characterAtIndex:(unsigned long long)arg2 shouldTerminateString:(id)arg3;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (unsigned long long)tokenField:(id)arg1 styleForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 shouldAddObjects:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)_objectDidTriggerAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateEditingRange;
- (id)_editingStringWithRange:(struct _NSRange *)arg1;
- (BOOL)canBecomeKeyView;
- (void)setNextKeyView:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
@property(nonatomic) long long style;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (id)headerForNilPrefixResults;
- (void)selectionDidChange:(id)arg1;
- (void)selectedResult:(id)arg1;
- (void)_tokenFieldCommitedEditing:(id)arg1;
- (id)_tokensWithGroupTokensExpanded:(id)arg1;
- (void)_addAddress:(id)arg1 contact:(id)arg2;
- (id)_addressesWithTokens:(id)arg1 tokenConverter:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *rawAddresses;
@property(retain, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) NSArray *chosenRawAddresses;
- (void)_refreshAddressDisplayMode;
- (void)_sharedPreferencesChanged:(id)arg1;
- (void)_showSelectedCompletionInField;
- (void)_updateSelectedResultAndShowInField:(id)arg1;
- (void)_cancelAndCloseCompletion;
- (void)_closeCompletion;
- (void)_cancelCompletion;
- (void)_startCompleting;
- (void)_updateTrailingConstraints;
- (void)_scrollerStyleDidChange:(id)arg1;
- (void)_configureConstraints;
- (id)_addContactImage;
- (void)_configureAddContactButton;
- (void)_configureTokenField;
- (void)_configureScrollView;
- (void)_windowDidChangeKeyStatus:(id)arg1;
- (void)bindOrUnbindToTokenField:(BOOL)arg1;
- (void)viewDidMoveToSuperview;
- (void)removeFromSuperview;
- (void)viewDidMoveToWindow;
- (void)_registerForNotifications;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (void)_muiAddressFieldCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

