//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TScriptableWindowController.h>

#import "NSComboBoxDataSource.h"
#import "NSComboBoxDelegate.h"
#import "NSWindowDelegate.h"

@class FI_TProgressIndicator, NSComboBox, NSString, NSWindow;

__attribute__((visibility("hidden")))
@interface FI_TGotoWindowController : FI_TScriptableWindowController <NSComboBoxDelegate, NSComboBoxDataSource, NSWindowDelegate>
{
    NSComboBox *_pathComboBox;
    FI_TProgressIndicator *_progress;
    NSString *_errorMsgText;
    _Bool _isGoingToFolder;
    _Bool _isAutoCompleting;
    _Bool _isAutoCompleteUIVisible;
    _Bool _changingStringOrSelection;
    struct TFENode _relativeToNode;
    struct TGoToPathToAutoCompleteHelper _autoCompleteHelper;
    struct TriStateBool _isTabAutoCompleting;
    struct TNSRef<FI_TGoToAutoCompletionController, void> _autoCompletionController;
    struct TNSRef<FI_TGoToFieldEditor, void> _fieldEditor;
    id <TGoToWindowDelegate> _delegate;
    NSWindow *_parentWindow;
    _Bool _allowLeftoverLastPathComponent;
    _Bool _selectionChangedDuringAutoCompletion;
    function_8027184b _completionHandler;
    TNSWeakPtr_a131d41e _autoCompleteNowToken;
    struct TNotificationCenterObserver _textDidChangeObserver;
    struct TNotificationCenterObserver _didChangeSelectionObserver;
    struct TNSRef<NSTouchBar, void> _goAndCancelButtonsTouchBar;
    struct TKeyValueBinder _goTouchBarButtonBinder;
}

+ (struct TGoToPathToAutoCompleteHelper)calcPathToAutoComplete:(struct TString *)arg1 relativeToNode:(struct TFENode *)arg2 delegate:(id)arg3;
+ (id)keyPathsForValuesAffectingShowProgress;
+ (id)keyPathsForValuesAffectingEnablePathComboBox;
+ (id)keyPathsForValuesAffectingEnableGoBtn;
+ (id)showGoToWindowRelativeToNode:(const struct TFENode *)arg1 parentWindow:(id)arg2 initialPath:(const struct TString *)arg3 allowLeftoverLastPathComponent:(_Bool)arg4 completionHandler:(const function_8027184b *)arg5;
@property(nonatomic) id <TGoToWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowLeftoverLastPathComponent; // @synthesize allowLeftoverLastPathComponent=_allowLeftoverLastPathComponent;
@property(nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(nonatomic) _Bool isAutoCompleteUIVisible; // @synthesize isAutoCompleteUIVisible=_isAutoCompleteUIVisible;
@property(nonatomic) _Bool isAutoCompleting; // @synthesize isAutoCompleting=_isAutoCompleting;
@property(nonatomic) _Bool isGoingToFolder; // @synthesize isGoingToFolder=_isGoingToFolder;
@property(retain, nonatomic) NSString *errorMsgText; // @synthesize errorMsgText=_errorMsgText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)makeTouchBar;
- (id)comboBox:(id)arg1 objectValueForItemAtIndex:(long long)arg2;
- (long long)numberOfItemsInComboBox:(id)arg1;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)cancel:(id)arg1;
- (void)go:(id)arg1;
- (void)completionHandler:(const struct TFENode *)arg1 leftoverLastPathComponent:(const struct TString *)arg2;
- (void)autoCompleteWithSingleCompletionName:(const struct TString *)arg1;
- (struct TString)autoCompleteHandler:(const struct TString *)arg1;
- (_Bool)updateOrigAutoCompletePath:(const struct TString *)arg1 withAdjustedAutoCompletePath:(const struct TString *)arg2 adjustedPathIsValid:(_Bool)arg3;
- (void)updatePathHandler;
- (void)autoCompleteNowAndValidate:(_Bool)arg1;
- (void)autoCompleteNow;
- (void)autoCompleteSoon;
- (void)moveSelectionToEnd;
- (void)moveSelectionTo:(struct _NSRange)arg1;
- (struct TString)uiPath;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)aboutToTearDown;
- (void)setCompletionHandler:(const function_8027184b *)arg1;
@property(readonly, nonatomic) _Bool showProgress; // @dynamic showProgress;
@property(readonly, nonatomic) _Bool enablePathComboBox; // @dynamic enablePathComboBox;
- (void)updateEnableGoBtn;
@property(readonly, nonatomic) _Bool enableGoBtn; // @dynamic enableGoBtn;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)_initWithRelativeToNode:(const struct TFENode *)arg1 parentWindow:(id)arg2 initialPath:(const struct TString *)arg3 allowLeftoverLastPathComponent:(_Bool)arg4 completionHandler:(const function_8027184b *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

