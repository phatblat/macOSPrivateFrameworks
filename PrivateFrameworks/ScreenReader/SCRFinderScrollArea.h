//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRScrollArea.h>

@class NSArray, SCRElement;

__attribute__((visibility("hidden")))
@interface SCRFinderScrollArea : SCRScrollArea
{
    BOOL _isDesktop;
    SCRElement *_iconContainer;
    NSArray *_previousSelectionUIElements;
}

- (void).cxx_destruct;
- (BOOL)_moveLastInDesktopWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveFirstInDesktopWithEvent:(id)arg1 request:(id)arg2;
- (id)containerDescription;
- (BOOL)addKeyboardSelectionSummaryToRequest:(id)arg1;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (id)typeDescription;
- (void)addItemDescriptionToRequest:(id)arg1;
- (BOOL)chainEvent:(id)arg1 request:(id)arg2;
- (id)focusOntoUIElement:(id)arg1 withScrolling:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)focusInto:(id)arg1 event:(id)arg2;
- (id)uiSelectedChildrenElements;
- (BOOL)canHandleSelectedChildrenChange;
- (BOOL)syncKBFocusToVOCursorWithOutputRequest:(id)arg1 playSound:(BOOL)arg2 withSelection:(BOOL)arg3;
- (BOOL)synchKeyboardToVOCursor:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (void)makeFrontmost:(id)arg1;
- (BOOL)isMain;
- (void)setIsMain:(BOOL)arg1;
- (BOOL)isWindow;
- (BOOL)isFinderDesktop;
- (void)setFocusedChild:(id)arg1;
- (void)setKeyboardChild:(id)arg1;
- (void)makeKeyElement;
- (BOOL)canStopInteracting;
- (BOOL)startWindowContentFeedback:(id)arg1;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (void)echoCurrentSelectionWithQueueID:(id)arg1 interruptsRequests:(BOOL)arg2 excludingIdentifiers:(id)arg3;
- (void)handleSelectionChange:(id)arg1;
- (void)setPreviousSelectionUIElements:(id)arg1;
- (id)previousSelectionUIElements;
- (id)uiElementToObserveSelectionChange;
- (void)setIsInteracting:(BOOL)arg1;
- (id)iconContainer;
- (id)_newIconContainer;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

