//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrowserTabPersistentState, BrowserWindowController;

__attribute__((visibility("hidden")))
@interface ClosedTabStateHolder : NSObject
{
    BrowserWindowController *_browserWindowController;
    BrowserTabPersistentState *_lastClosedTabState;
}

@property(retain, nonatomic) BrowserTabPersistentState *lastClosedTabState; // @synthesize lastClosedTabState=_lastClosedTabState;
@property(readonly, nonatomic) BrowserWindowController *browserWindowController; // @synthesize browserWindowController=_browserWindowController;
- (void).cxx_destruct;
- (void)_closeTabWithoutConfirming:(id)arg1;
- (void)_undoCloseTabAtIndex:(unsigned long long)arg1 andSelect:(BOOL)arg2;
- (void)clearLastClosedTabState;
- (id)initWithBrowserWindowController:(id)arg1;

@end

