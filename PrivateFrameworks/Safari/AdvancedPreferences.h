//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class EnableDevelopMenuButtonHostViewController, NSButton, NSComboBox, NSPopUpButton, NSTextField, NSView, PlugInAutoStartData;

__attribute__((visibility("hidden")))
@interface AdvancedPreferences : PreferencesModule
{
    NSTextField *accessibilityLabel;
    NSPopUpButton *styleSheetPopUp;
    NSButton *minFontSizeCheckbox;
    NSComboBox *minFontSizeComboBox;
    NSButton *tabToAllButton;
    NSTextField *tabToAllOptionHint;
    NSTextField *proxiesLabel;
    NSButton *openProxyPreferencesButton;
    NSPopUpButton *defaultCharacterSetMenu;
    NSButton *plugInSnapshottingButton;
    NSButton *includeDevelopMenuButton;
    NSButton *helpButton;
    PlugInAutoStartData *_plugInStartDataEditor;
    NSTextField *_plugInStartTallyField;
    NSButton *_plugInStartDetailsButton;
    EnableDevelopMenuButtonHostViewController *_remoteDevelopMenuButtonViewController;
    NSView *_contentView;
    NSTextField *_smartSearchFieldSectionLabel;
    NSButton *_smartSearchFieldShowsFullURLCheckbox;
    NSButton *_saveReadingListItemsAutomaticallyCheckbox;
    NSView *_includeDevelopMenuButtonContainerView;
}

+ (void)setShowDevelopMenu:(BOOL)arg1;
@property(nonatomic) __weak NSView *includeDevelopMenuButtonContainerView; // @synthesize includeDevelopMenuButtonContainerView=_includeDevelopMenuButtonContainerView;
@property(nonatomic) __weak NSButton *saveReadingListItemsAutomaticallyCheckbox; // @synthesize saveReadingListItemsAutomaticallyCheckbox=_saveReadingListItemsAutomaticallyCheckbox;
@property(nonatomic) __weak NSButton *smartSearchFieldShowsFullURLCheckbox; // @synthesize smartSearchFieldShowsFullURLCheckbox=_smartSearchFieldShowsFullURLCheckbox;
@property(nonatomic) __weak NSTextField *smartSearchFieldSectionLabel; // @synthesize smartSearchFieldSectionLabel=_smartSearchFieldSectionLabel;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)helpAnchor;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)updateIncludeDevelopMenuButton;
- (void)toggleIncludeDevelopMenu:(id)arg1;
- (void)_updatePlugInStartViews;
- (void)_plugInAutoStartDataUpdated;
- (void)showStartingPlugInData:(id)arg1;
- (void)togglePlugInSnapshottingEnabled:(id)arg1;
- (void)toggleTabToAll:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)takeMinimumFontSizeFrom:(id)arg1;
- (void)toggleUseMinimumFontSize:(id)arg1;
- (void)toggleSmartSearchFieldShowsFullURL:(id)arg1;
- (void)updateProxiesButton;
- (void)keyboardUIModeDidChange:(id)arg1;
- (void)updatePlugInSnapshottingButton;
- (void)updateTabToAllViews;
- (void)updateMinFontSizeViews;
- (void)_updateReadingListSaveOfflineAutomaticallyCheckbox;
- (void)_updateSmartSearchFieldShowsFullURLButton;
- (long long)sanityCheckMinimumFontSize:(long long)arg1;
- (void)toggleSavingArticlesOfflineAutomatically:(id)arg1;
- (void)awakeFromNib;
- (void)_setWidthConstraintForTabToAllOptionHintTextField;
- (double)_widthOfTextField:(id)arg1 usingString:(id)arg2;
- (void)takeDefaultCharacterSetFrom:(id)arg1;
- (void)updateDefaultCharacterSetPopup;
- (void)chooseStyleSheetFromFileBrowser:(id)arg1;
- (void)choseStyleSheetFromPanel:(id)arg1 returnCode:(long long)arg2;
- (void)disableUserStyleSheet:(id)arg1;
- (void)takeStyleSheetFromMenuItem:(id)arg1;
- (void)updateStyleSheetMenu;
- (id)_styleSheetPathPreference;
- (void)_setStyleSheetPathPreference:(id)arg1;
- (BOOL)userStyleSheetEnabled;
- (void)setUserStyleSheetEnabled:(_Bool)arg1;
- (void)openProxyPreferences:(id)arg1;
- (id)imageForPreferenceNamed:(id)arg1;

@end

