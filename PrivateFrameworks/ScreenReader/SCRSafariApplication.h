//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRApplication.h>

@class NSString, SCRCTargetSelectorTimer, SCRElement, SCRTextMarkerRange;

__attribute__((visibility("hidden")))
@interface SCRSafariApplication : SCRApplication
{
    SCRElement *_pageAddressTextField;
    NSString *_lastURL;
    BOOL _wasLastActionInWebPage;
    SCRTextMarkerRange *_lastSearchSelectedMarkerRange;
    SCRTextMarkerRange *_lastSearchMarkerRangeForElement;
    SCRElement *_searchTextField;
    SCRCTargetSelectorTimer *_firstSearchResultTimer;
    struct {
        unsigned int isDidShowModalDialogRegistered:1;
        unsigned int isDidFinishShowingModalDialogRegistered:1;
        unsigned int isSafariReaderShowing:1;
    } _safariObserverFlags;
    NSString *__currentURL;
}

+ (long long)nativeSafariSearchForEvent:(id)arg1;
@property(retain, nonatomic) NSString *_currentURL; // @synthesize _currentURL=__currentURL;
@property(retain, nonatomic) SCRTextMarkerRange *lastSearchMarkerRangeForElement; // @synthesize lastSearchMarkerRangeForElement=_lastSearchMarkerRangeForElement;
@property(retain, nonatomic) SCRTextMarkerRange *lastSearchSelectedMarkerRange; // @synthesize lastSearchSelectedMarkerRange=_lastSearchSelectedMarkerRange;
- (void).cxx_destruct;
- (void)_didFinishShowingModalDialog:(id)arg1;
- (void)_didShowModalDialog:(id)arg1;
- (id)_findDialog;
- (void)addObserverForModalDialogs;
- (BOOL)profileMatches:(id)arg1 url:(id)arg2 outKey:(id *)arg3 outProfile:(id *)arg4;
- (BOOL)isSafariApplication;
- (void)dispatchSpeakWebPageSummary:(id)arg1;
- (void)_speakWebPageSummary:(id)arg1;
- (void)_setCurrentURL:(id)arg1;
- (id)_stripHashFromURL:(id)arg1;
- (void)_initializePageAddressTextFieldAndMove:(BOOL)arg1;
- (void)_windowDidBecomeKey:(id)arg1;
- (id)_retrieveLastFocusedChildForWebArea:(id)arg1;
- (void)setLastFocusedElement:(id)arg1 forURL:(id)arg2;
- (id)_newPersistentKeyForFocusedChildAttributesWithURL:(id)arg1;
- (void)_webAreaWasLoaded:(id)arg1;
- (void)_updateVOCursorAfterReloadOfWebArea:(id)arg1;
- (BOOL)moveToLastElementAfterPageLoadWithRequest:(id)arg1;
- (void)addKeyboardSyncContextForElement:(id)arg1 previousKeyboardChild:(id)arg2 request:(id)arg3;
- (void)_selectedRowsDidChange:(id)arg1;
- (void)_moveToLastElementAfterPageLoadIfNecessary;
- (void)_pageAddressDidChange:(id)arg1;
- (void)_addObserverForPageAddressChange;
- (void)_handleLayoutComplete:(id)arg1;
- (void)_checkIfLayoutChangeWasPageChange:(struct __AXUIElement *)arg1;
- (void)_addObserverForPageLayoutComplete;
- (void)_safariReaderExited:(id)arg1;
- (void)_safariReaderEntered:(id)arg1;
- (void)_safariReaderDidToggle;
- (_Bool)_focusChainsStillValid;
- (BOOL)_focusChainStillValid:(id)arg1;
- (void)_addObserverForSafariReader;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)updateFocusChainToWebArea;
- (BOOL)updateFocusChainInWebArea:(id)arg1;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (void)_outputImmediateSearchResult;
- (BOOL)_outputSelectedTextWithEvent:(id)arg1 request:(id)arg2 webArea:(id)arg3 direction:(long long)arg4;
- (BOOL)outputSearchSelection:(id)arg1 forElement:(id)arg2 soundRequest:(id)arg3 request:(id)arg4 webArea:(id)arg5;
- (void)applicationDidShow;
- (void)windowDidBecomeKey;
- (void)applicationDidInitialize;
- (id)_topLevelWebArea;
- (void)_updateURL;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (void)_elementWasCreated:(id)arg1;
- (void)dealloc;

@end

