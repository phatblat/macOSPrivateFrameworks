//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface LPHighlightGestureRecognizer : NSGestureRecognizer
{
    struct CGPoint _startPointInWindowCoordinates;
}

- (struct CGPoint)_locationInWindow;
- (void)cancelHighlight;
- (void)updateHighlight;
- (void)startHighlightIfPossible;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
