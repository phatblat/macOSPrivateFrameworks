//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

#import "SCRApplicationDirectChildProtocol.h"
#import "SCRElementHistoryVendor.h"

@class NSMutableDictionary, NSString, SCRElementHistory, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRWindow : SCRMapElement <SCRApplicationDirectChildProtocol, SCRElementHistoryVendor>
{
    SCRElementHistory *_elementHistory;
    NSMutableDictionary *_trackedElements;
    NSString *_windowType;
    struct {
        unsigned int isNew:1;
        unsigned int ignoreSheet:1;
        unsigned int reserved:31;
    } _srwFlags;
    BOOL _isFocusingIntoWindow;
    BOOL __registeredFocusedTabChangedNotification;
    SCRUIElement *_closeUIElement;
    SCRUIElement *__minimizeUIElement;
    SCRUIElement *__zoomUIElement;
    SCRUIElement *__fullscreenButtonUIElement;
    SCRUIElement *__toolbarButtonUIElement;
    SCRUIElement *__growAreaUIElement;
    SCRUIElement *__proxyUIElement;
    SCRUIElement *__titleUIElement;
}

@property(nonatomic, setter=_setRegisteredFocusedTabChangedNotification:) BOOL _registeredFocusedTabChangedNotification; // @synthesize _registeredFocusedTabChangedNotification=__registeredFocusedTabChangedNotification;
@property(retain, nonatomic, setter=_setTitleUIElement:) SCRUIElement *_titleUIElement; // @synthesize _titleUIElement=__titleUIElement;
@property(retain, nonatomic, setter=_setProxyUIElement:) SCRUIElement *_proxyUIElement; // @synthesize _proxyUIElement=__proxyUIElement;
@property(retain, nonatomic, setter=_setGrowAreaUIElement:) SCRUIElement *_growAreaUIElement; // @synthesize _growAreaUIElement=__growAreaUIElement;
@property(retain, nonatomic, setter=_setToolbarButtonUIElement:) SCRUIElement *_toolbarButtonUIElement; // @synthesize _toolbarButtonUIElement=__toolbarButtonUIElement;
@property(retain, nonatomic, setter=_setFullscreenButtonUIElement:) SCRUIElement *_fullscreenButtonUIElement; // @synthesize _fullscreenButtonUIElement=__fullscreenButtonUIElement;
@property(retain, nonatomic, setter=_setZoomUIElement:) SCRUIElement *_zoomUIElement; // @synthesize _zoomUIElement=__zoomUIElement;
@property(retain, nonatomic, setter=_setMinimizeUIElement:) SCRUIElement *_minimizeUIElement; // @synthesize _minimizeUIElement=__minimizeUIElement;
@property(readonly, nonatomic) BOOL isFocusingIntoWindow; // @synthesize isFocusingIntoWindow=_isFocusingIntoWindow;
@property(retain, nonatomic, setter=setCloseUIElement:) SCRUIElement *closeUIElement; // @synthesize closeUIElement=_closeUIElement;
- (void)_removeTrackedElementsForKey:(id)arg1;
- (void)setTrackedElement:(id)arg1 key:(id)arg2;
- (id)trackedElementsForKey:(id)arg1;
- (BOOL)shouldTrackKeyboardOnFocusInto;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)shouldNavigate;
- (BOOL)startWindowContentFeedback:(id)arg1;
- (BOOL)_navigateToFirstOrLastElementWithCommandKey:(id)arg1 event:(id)arg2 request:(id)arg3 isFirstElement:(BOOL)arg4;
- (BOOL)moveLastWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)interactDownWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (unsigned long long)groupBehavior;
- (BOOL)_canNavigateToSheet;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (BOOL)handleTaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)enableRepositionModeWithRequest:(id)arg1;
- (BOOL)enableResizeModeWithRequest:(id)arg1 handleIndex:(unsigned long long)arg2;
- (BOOL)closeWindowCallbackWithRequest:(id)arg1;
- (BOOL)closeWindowWithRequest:(id)arg1;
- (BOOL)raiseWindowWithRequest:(id)arg1;
- (BOOL)bringWindowToFront;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (struct CGRect)droppableBounds;
- (id)containerIncludingScrollAreas:(BOOL)arg1;
- (BOOL)isContainerElement;
- (struct CGPoint)enclosingOrigin;
- (struct CGRect)enclosingBoundsIncludesScrollArea:(BOOL)arg1;
- (struct CGRect)enclosingBounds;
- (id)stringForCommand:(id)arg1 withExtension:(id)arg2;
- (BOOL)supportsPositionalPrecision;
- (id)descriptionForOrigin;
- (id)containerDescription;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (id)typeDescription;
- (id)nameForGuide;
- (BOOL)showInGuide;
- (id)titleDescription;
- (id)alternateOrderedChildrenForMappedChildren:(id)arg1;
- (void)setIgnoreSheet:(BOOL)arg1;
- (id)toolbar;
- (BOOL)zoom;
- (BOOL)minimize;
- (BOOL)close;
- (BOOL)canClose;
- (id)defaultActionName;
- (BOOL)isModal;
- (BOOL)isMinimized;
- (BOOL)isMain;
- (void)setIsMain:(BOOL)arg1;
- (id)parentVendor;
- (void)flushElementHistory;
- (id)removeLastUIElementFromHistory;
- (id)lastNavigatedValidUIElement;
- (void)addElementToHistory:(id)arg1;
- (void)addToHistory;
- (id)_elementHistory;
- (id)onlyChildForFocusingIntoInArray:(id)arg1;
- (BOOL)_shouldIgnoreFirstImageInDialog:(id)arg1;
- (BOOL)shouldFocusOntoChild:(id)arg1;
- (BOOL)shouldRemoveSpecialChild:(id)arg1;
- (id)prepareUIChildrenForNavigation:(id)arg1;
- (id)buildDefaultChildrenWithUIElements:(id)arg1;
- (void)buildSheets;
- (void)_buildSheets;
- (BOOL)isVersionsUIControlWindow;
- (BOOL)isTMControlWindow;
- (BOOL)isDialogWindow;
- (BOOL)isWindowSheetEnabled;
- (BOOL)allowsEchoTitleChanges;
- (BOOL)canHandleTitleChange;
- (void)setKeyboardChild:(id)arg1 force:(BOOL)arg2;
- (void)setKeyboardChild:(id)arg1;
- (void)setFocusedChild:(id)arg1;
- (void)_speakSelectionInSheet;
- (void)_announceArrival;
- (void)announceArrival;
- (BOOL)_shouldAnnounceArrival;
- (BOOL)shouldAnnounceArrival;
- (id)addWindowChangedDescriptionToRequest:(id)arg1;
- (id)tabChangedDescriptionForTab:(id)arg1;
- (void)handleFocusedTabChanged:(id)arg1;
- (void)_removeWindowObservers;
- (void)setIsEventHandler:(BOOL)arg1 isKeyboardHandler:(BOOL)arg2;
- (id)title;
- (BOOL)canNavigateToChildren;
- (BOOL)canStopInteracting;
- (BOOL)isInteractive;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;
- (BOOL)isWindow;
- (void)setIsInsideIconContainer:(BOOL)arg1;
- (BOOL)isInsideIconContainer;
- (BOOL)isSiriWindow;

@end

