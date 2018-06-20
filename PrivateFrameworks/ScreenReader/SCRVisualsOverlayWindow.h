//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXVHighlightOutlineView, AXVOverlayWindow, SCRVisualsEncircledPoint, SCRVisualsHighlightCursor, SCRVisualsHighlightCurtain;

__attribute__((visibility("hidden")))
@interface SCRVisualsOverlayWindow : NSObject
{
    SCRVisualsHighlightCursor *_voCursor;
    SCRVisualsHighlightCurtain *_highlightCurtain;
    SCRVisualsEncircledPoint *_encircledPoint;
    AXVOverlayWindow *__overlayWindow;
    AXVHighlightOutlineView *__highlightView;
}

@property(retain, nonatomic, setter=_setHighlightView:) AXVHighlightOutlineView *_highlightView; // @synthesize _highlightView=__highlightView;
@property(retain, nonatomic, setter=_setOverlayWindow:) AXVOverlayWindow *_overlayWindow; // @synthesize _overlayWindow=__overlayWindow;
@property(readonly, nonatomic) SCRVisualsEncircledPoint *encircledPoint; // @synthesize encircledPoint=_encircledPoint;
@property(readonly, nonatomic) SCRVisualsHighlightCurtain *highlightCurtain; // @synthesize highlightCurtain=_highlightCurtain;
@property(readonly, nonatomic) SCRVisualsHighlightCursor *voCursor; // @synthesize voCursor=_voCursor;
- (void).cxx_destruct;
- (void)_updateOverlayWindowVisibility;
- (struct CGRect)convertRectToWindowFromScreen:(struct CGRect)arg1;
- (void)highlightWithRect:(struct CGRect)arg1;
- (void)showEncircledPoint:(BOOL)arg1;
@property(nonatomic) BOOL encircledPointEnabled;
- (void)_placeViewAboveSiblings:(id)arg1;
- (void)showHighlightCurtain:(BOOL)arg1;
@property(nonatomic) BOOL highlightCurtainEnabled;
- (void)showVOCursor;
@property(nonatomic, setter=setVOCursorEnabled:) BOOL voCursorEnabled;
- (id)init;

@end
