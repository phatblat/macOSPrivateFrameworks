//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRWebArea.h>

__attribute__((visibility("hidden")))
@interface SCRSetupAssistantWebArea : SCRWebArea
{
    struct {
        unsigned int handlingBeginFocus:1;
        unsigned int canWrap:1;
        unsigned int reserved:30;
    } _srsawaFlags;
}

- (id)typeDescription;
- (BOOL)_moveFirstWithEvent:(id)arg1 request:(id)arg2 visibleOnly:(BOOL)arg3;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)moveToFirstVisibleElementWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)handleEvent:(id)arg1 request:(id)arg2;
- (BOOL)_willEventCauseWrapping:(id)arg1;
- (void)allowWrappingWhileNavigating:(BOOL)arg1;
- (BOOL)canWrapWhileNavigating;
- (void)highlightWithScrolling:(BOOL)arg1;
- (void)addToHistory;
- (void)endFocus;
- (void)beginFocusFromElement:(id)arg1 withEvent:(id)arg2;

@end

