//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization
{
}

- (void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(struct CGContext *)arg3 transform:(struct CGAffineTransform)arg4;
- (void)drawInputDrawing:(id)arg1 inContext:(struct CGContext *)arg2 transform:(struct CGAffineTransform)arg3;
- (BOOL)shouldDrawStrokeGroup:(id)arg1;
- (void)_drawGroupBrackgroundInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (struct CGAffineTransform)_transformForInputDrawingBounds:(struct CGRect)arg1 referenceBounds:(struct CGRect)arg2 viewBounds:(struct CGRect)arg3;
- (void)drawVisualizationInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 viewBounds:(struct CGRect)arg3;
- (struct CGRect)dirtyRectForStrokeGroup:(id)arg1;
- (BOOL)wantsInputDrawings;
- (long long)layeringPriority;

@end

