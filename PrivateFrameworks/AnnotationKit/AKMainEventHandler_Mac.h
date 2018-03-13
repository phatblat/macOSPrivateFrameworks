//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AnnotationKit/AKMainEventHandler.h>

@class AKPageController;

@interface AKMainEventHandler_Mac : AKMainEventHandler
{
    BOOL _shouldEatNextKeyUp;
    BOOL _lastCursorWasInVisibleBounds;
    BOOL _candidatePickerWasDismissed;
    id _eventMonitor;
    AKPageController *_lastPageControllerWithCropRollover;
}

@property BOOL candidatePickerWasDismissed; // @synthesize candidatePickerWasDismissed=_candidatePickerWasDismissed;
@property BOOL lastCursorWasInVisibleBounds; // @synthesize lastCursorWasInVisibleBounds=_lastCursorWasInVisibleBounds;
@property __weak AKPageController *lastPageControllerWithCropRollover; // @synthesize lastPageControllerWithCropRollover=_lastPageControllerWithCropRollover;
@property BOOL shouldEatNextKeyUp; // @synthesize shouldEatNextKeyUp=_shouldEatNextKeyUp;
@property(retain) id eventMonitor; // @synthesize eventMonitor=_eventMonitor;
- (void).cxx_destruct;
- (BOOL)_eventHasValidLocation:(id)arg1;
- (BOOL)_mouseEventInVisibleBounds:(id)arg1;
- (BOOL)_eventIsForOurWindow:(id)arg1;
- (void)updateCropHandleVisibilityForEvent:(id)arg1;
- (void)updateCursorForEvent:(id)arg1;
- (void)applyToAllSelectedAnnotationsRotateEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)_candidatePickerDidDismissNotification:(id)arg1;
- (BOOL)handleKeyboardEvent:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)_validateChangingSelectionZOrderForDirection:(BOOL)arg1 onPageModelController:(id)arg2;
- (void)_addNoteAnnotationAction:(id)arg1;
- (void)_removeNoteAnnotationAction:(id)arg1;
- (void)_removeHighlightAnnotationAction:(id)arg1;
- (void)_highlightMenuAction:(id)arg1;
- (void)_sendSelectedAnnotationsToBackAction:(id)arg1;
- (void)_sendSelectedAnnotationsBackwardAction:(id)arg1;
- (void)_bringSelectedAnnotationsToFrontAction:(id)arg1;
- (void)_bringSelectedAnnotationsForwardAction:(id)arg1;
- (void)_showContextMenuForEvent:(id)arg1 withAnnotation:(id)arg2 onPageController:(id)arg3;
- (BOOL)handleRightDownEvent:(id)arg1;
- (BOOL)mainHandleEvent:(id)arg1 orRecognizer:(id)arg2;
- (void)teardown;
- (id)initWithController:(id)arg1;

@end

