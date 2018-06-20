//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSView;

@interface IGPopupWindowController : NSWindowController
{
    NSView *_parentView;
    NSView *_containerView;
    NSView *_initialFirstResponder;
}

@property(retain) NSView *initialFirstResponder; // @synthesize initialFirstResponder=_initialFirstResponder;
- (void).cxx_destruct;
- (void)windowMouseDown:(id)arg1;
- (void)openWithAnimation:(BOOL)arg1;
- (struct CGRect)frameForDeltaHeight:(double)arg1;
- (void)resetFrameFromViews;
- (id)attach;
- (long long)runAndAttach;
- (void)prepareToPopupOnView:(id)arg1 inView:(id)arg2;
- (void)setView:(id)arg1;
- (id)initWithView:(id)arg1;

@end

