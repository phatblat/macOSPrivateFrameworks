//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/PreferencesModule.h>

@class NSButton, NSPopUpButton, NSTextField, WebsiteSpecificSearchEditor;

__attribute__((visibility("hidden")))
@interface SearchPreferences : PreferencesModule
{
    WebsiteSpecificSearchEditor *_websiteSpecificSearchEditor;
    NSPopUpButton *_defaultSearchEnginePopUpButton;
    NSButton *_enableParsecCheckbox;
    NSButton *_showFavoritesCheckbox;
    NSTextField *_searchEngineLabel;
    NSTextField *_smartSearchFieldLabel;
}

@property(nonatomic) __weak NSTextField *smartSearchFieldLabel; // @synthesize smartSearchFieldLabel=_smartSearchFieldLabel;
@property(nonatomic) __weak NSTextField *searchEngineLabel; // @synthesize searchEngineLabel=_searchEngineLabel;
@property(nonatomic) __weak NSButton *showFavoritesCheckbox; // @synthesize showFavoritesCheckbox=_showFavoritesCheckbox;
@property(nonatomic) __weak NSButton *enableParsecCheckbox; // @synthesize enableParsecCheckbox=_enableParsecCheckbox;
@property(nonatomic) __weak NSPopUpButton *defaultSearchEnginePopUpButton; // @synthesize defaultSearchEnginePopUpButton=_defaultSearchEnginePopUpButton;
@property(retain, nonatomic) WebsiteSpecificSearchEditor *websiteSpecificSearchEditor; // @synthesize websiteSpecificSearchEditor=_websiteSpecificSearchEditor;
- (void).cxx_destruct;
- (void)_updateParsecCheckboxState;
- (void)changeDefaultSearchEngine:(id)arg1;
- (void)_updateDefaultSearchEngineMenu;
- (void)suppressSearchSuggestionsPreferenceDidChange:(id)arg1;
- (void)toggleParsecEnabled:(id)arg1;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)initializeFromDefaults;
- (id)safariHelpAnchor;
- (id)imageForPreferenceNamed:(id)arg1;

@end

