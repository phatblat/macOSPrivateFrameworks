//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class EKUIGadget, NSTrackingArea;

@interface EKUIGadgetView : NSView
{
    BOOL _shouldAbsorbMouseClickEvents;
    EKUIGadget *_gadget;
    NSTrackingArea *_trackingArea;
    NSView *_cachedPreviousKeyView;
    NSView *_cachedNextKeyView;
}

@property __weak NSView *cachedNextKeyView; // @synthesize cachedNextKeyView=_cachedNextKeyView;
@property __weak NSView *cachedPreviousKeyView; // @synthesize cachedPreviousKeyView=_cachedPreviousKeyView;
@property(retain) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property BOOL shouldAbsorbMouseClickEvents; // @synthesize shouldAbsorbMouseClickEvents=_shouldAbsorbMouseClickEvents;
@property __weak EKUIGadget *gadget; // @synthesize gadget=_gadget;
- (void).cxx_destruct;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)layout;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

