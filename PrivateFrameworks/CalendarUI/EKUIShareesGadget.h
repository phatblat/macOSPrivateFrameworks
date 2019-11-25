//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/EKUISingleViewGadget.h>

#import "CalAutoCompleteDelegate.h"
#import "CalUIAutocompleteFieldDelegate.h"
#import "CalUIResizingTextFieldDelegate.h"
#import "CalUISuggestionsFieldDelegate.h"
#import "EKUITokenFieldDelegate.h"

@class CalAutoCompleteOperation, CalUILabel, EKUIEditingField, EKUIPlusButton, EKUIShareeControlContainer, EKUITokenField, NSDictionary, NSLayoutConstraint, NSMenuItem, NSMutableSet, NSProgressIndicator, NSStackView, NSString, NSView;

@interface EKUIShareesGadget : EKUISingleViewGadget <CalAutoCompleteDelegate, CalUISuggestionsFieldDelegate, CalUIAutocompleteFieldDelegate, CalUIResizingTextFieldDelegate, EKUITokenFieldDelegate>
{
    BOOL _sortTokensOnNextUpdate;
    EKUIShareeControlContainer *_controlContainer;
    NSStackView *_stackView;
    EKUITokenField *_shareesField;
    NSView *_titleView;
    CalUILabel *_titleField;
    NSView *_editingView;
    EKUIEditingField *_editingField;
    NSLayoutConstraint *_editingFieldLeadingConstraint;
    NSProgressIndicator *_progressIndicator;
    NSView *_separatorView;
    EKUIPlusButton *_plusButton;
    NSMutableSet *_addedShareesForRecents;
    NSDictionary *_viewMetrics;
    CalAutoCompleteOperation *_acOperation;
    NSString *_lastCalendarID;
    NSMenuItem *_viewOnlyMenuItem;
    NSMenuItem *_viewAndEditMenuItem;
    CDUnknownBlockType _suggestionsUpdatedBlock;
}

+ (id)interestedChangeKeys;
@property(copy) CDUnknownBlockType suggestionsUpdatedBlock; // @synthesize suggestionsUpdatedBlock=_suggestionsUpdatedBlock;
@property(retain) NSMenuItem *viewAndEditMenuItem; // @synthesize viewAndEditMenuItem=_viewAndEditMenuItem;
@property(retain) NSMenuItem *viewOnlyMenuItem; // @synthesize viewOnlyMenuItem=_viewOnlyMenuItem;
@property BOOL sortTokensOnNextUpdate; // @synthesize sortTokensOnNextUpdate=_sortTokensOnNextUpdate;
@property(retain) NSString *lastCalendarID; // @synthesize lastCalendarID=_lastCalendarID;
@property(retain) CalAutoCompleteOperation *acOperation; // @synthesize acOperation=_acOperation;
@property(retain) NSDictionary *viewMetrics; // @synthesize viewMetrics=_viewMetrics;
@property(retain) NSMutableSet *addedShareesForRecents; // @synthesize addedShareesForRecents=_addedShareesForRecents;
@property(retain) EKUIPlusButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain) NSView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSLayoutConstraint *editingFieldLeadingConstraint; // @synthesize editingFieldLeadingConstraint=_editingFieldLeadingConstraint;
@property(retain) EKUIEditingField *editingField; // @synthesize editingField=_editingField;
@property(retain) NSView *editingView; // @synthesize editingView=_editingView;
@property(retain) CalUILabel *titleField; // @synthesize titleField=_titleField;
@property(retain) NSView *titleView; // @synthesize titleView=_titleView;
@property(retain) EKUITokenField *shareesField; // @synthesize shareesField=_shareesField;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) EKUIShareeControlContainer *controlContainer; // @synthesize controlContainer=_controlContainer;
- (void).cxx_destruct;
- (void)inviteAgain:(id)arg1;
- (void)removeSharee:(id)arg1;
- (void)updatedAutoComplete:(id)arg1;
- (void)didFinishNetworkActivity:(id)arg1;
- (void)didBeginNetworkActivity:(id)arg1;
- (id)autocompleteContextForCalendar;
- (void)suggestionSelected:(id)arg1;
- (void)savePendingChanges;
- (void)selectAllInEmptyField;
- (void)moveUp;
- (void)deleteInEmptyField;
- (void)selectLastToken;
- (id)subtitleForSuggestion:(id)arg1;
- (id)titleForSuggestion:(id)arg1;
- (id)viewForSuggestion:(id)arg1;
- (void)queryForString:(id)arg1 suggestionsFoundHandler:(CDUnknownBlockType)arg2;
- (id)matchWithPrefix:(id)arg1;
- (void)cancelSearch;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (id)tokenField:(id)arg1 setUpTokenAttachmentCell:(id)arg2 forRepresentedObject:(id)arg3;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (void)sharingPolicyChanged:(id)arg1;
- (BOOL)shouldSupportChangeAccess;
- (BOOL)shareeIsPreExisting:(id)arg1;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (void)doubleClickOnTokenCell:(id)arg1;
- (id)quickLookURLForSharee:(id)arg1;
- (void)addNewShareesToRecents;
- (BOOL)addPotentialShareeToCalendar:(id)arg1;
- (BOOL)addShareeForResult:(id)arg1;
- (BOOL)addShareeForEditingString:(id)arg1;
- (BOOL)_hasShareesToDisplay;
- (id)_sortedShareesPreservingCurrentOrderFromSharees:(id)arg1;
- (void)_stopProgressIndicator;
- (void)_startProgressIndicator;
- (void)_startProgressIndicatorWithTimeout;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)readFromPasteboard:(id)arg1;
- (id)tokenField:(id)arg1 readFromPasteboard:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)updateShareesFromPasteboard:(id)arg1;
- (BOOL)readPasteboard:(id)arg1;
- (id)representedObjectsFromPasteboard:(id)arg1;
- (void)addContactsFromVCardData:(id)arg1 toSet:(id)arg2;
- (id)claimedPboardTypes;
- (void)updateIntrinsicContentSizeForTokenField;
- (id)control;
- (double)horizontalPadding;
- (double)horizontalInset;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)shouldDisplay;
- (BOOL)isEditable;
- (void)updateConstraints;
- (BOOL)_shouldShowPlusButton;
- (BOOL)_shouldShowEditingField;
- (void)setObject:(id)arg1;
- (void)updateWithChanges:(id)arg1;
- (BOOL)needsExpansion;
- (BOOL)isCalendarFamilyCalendar;
- (BOOL)shouldShowShareeListAsImmutable;
- (BOOL)isCalendarMarkedImmutableSharees;
- (BOOL)isCalendarSharedToMe;
- (BOOL)calendarSupportsSharing;
- (void)selectEditingField;
- (double)maxHeight;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

