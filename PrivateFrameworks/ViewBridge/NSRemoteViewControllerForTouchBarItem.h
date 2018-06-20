//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ViewBridge/NSRemoteViewController.h>

#import "NSViewBridgeKVOBuddy.h"
#import "_NSAlertSensitiveView.h"
#import "_NSTouchBarItemLayoutWrapper.h"

@class NSString, NSTouchBarItem, NSView;

__attribute__((visibility("hidden")))
@interface NSRemoteViewControllerForTouchBarItem : NSRemoteViewController <_NSAlertSensitiveView, _NSTouchBarItemLayoutWrapper, NSViewBridgeKVOBuddy>
{
    NSTouchBarItem *_observingTouchBarItem;
    NSView *_observingView;
}

+ (id)copyConstraintIdentifier:(id)arg1;
- (void)_viewDidMoveToSuperview;
- (id)kvoKeys;
@property(readonly) BOOL isSpace;
@property(readonly) BOOL wantsAlertStylePadding;
- (BOOL)boolForBridgeKey:(id)arg1;
@property(readonly) struct CGSize minSize;
@property(readonly) struct CGSize preferredSize;
@property(readonly) struct CGSize maxSize;
@property(readonly) struct CGSize contentClippingSize;
- (struct CGSize)sizeForBridgeKey:(id)arg1;
- (void)dealloc;
- (void)maintainObserversForTouchBarItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForVisible:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long itemPosition;
@property(readonly) double preferredTrailingPosition;
@property(readonly) double preferredZOrder;
@property(readonly) long long priorityIndex;
@property(readonly) Class superclass;

@end
