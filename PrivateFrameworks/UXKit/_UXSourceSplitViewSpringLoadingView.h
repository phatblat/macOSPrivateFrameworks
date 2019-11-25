//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface _UXSourceSplitViewSpringLoadingView : NSView
{
    BOOL _didSpringLoad;
    CDUnknownBlockType _springLoadingHandler;
    CDUnknownBlockType _canSpringLoadHandler;
}

@property(copy) CDUnknownBlockType canSpringLoadHandler; // @synthesize canSpringLoadHandler=_canSpringLoadHandler;
@property(copy) CDUnknownBlockType springLoadingHandler; // @synthesize springLoadingHandler=_springLoadingHandler;
- (void).cxx_destruct;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)_unSpringLoad;
- (void)_springLoad;
- (void)draggingEnded:(id)arg1;
- (void)springLoadingExited:(id)arg1;
- (void)springLoadingHighlightChanged:(id)arg1;
- (void)springLoadingActivated:(BOOL)arg1 draggingInfo:(id)arg2;
- (unsigned long long)springLoadingEntered:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (BOOL)_canSpringLoad;

@end

