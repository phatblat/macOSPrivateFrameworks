//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKCanvasView, PKDrawing;

@protocol PKCanvasViewDelegate <NSObject>

@optional
- (void)canvasViewRenderingDidFinish:(PKCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidCancelStroke:(PKCanvasView *)arg1;
- (void)canvasViewDidBeginNewStroke:(PKCanvasView *)arg1;
- (void)canvasViewDrawingDidChange:(PKCanvasView *)arg1;
- (void)canvasView:(PKCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
@end

