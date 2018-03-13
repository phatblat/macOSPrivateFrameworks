//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDActionContext, DDBasicHighlightsView, NSEvent;

@protocol DDHighlightsDelegate <NSObject>

@optional
- (void)externalUIIsOver;
- (void)externalUIStarted;
- (DDActionContext *)actionContextForBasicView:(DDBasicHighlightsView *)arg1;
- (void)requestUIForClick:(BOOL)arg1 highlightView:(DDBasicHighlightsView *)arg2 immediate:(BOOL)arg3;
- (unsigned long long)highlightsView:(id)arg1 actionForEvent:(NSEvent *)arg2 onHighlightObject:(id)arg3 proposedAction:(unsigned long long)arg4;
@end

