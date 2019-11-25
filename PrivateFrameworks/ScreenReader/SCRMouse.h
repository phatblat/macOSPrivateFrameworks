//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCRCTargetSelectorTimer, SCRCThreadKey, SCRCUserDefaults, SCRDnDInfo, SCRTextMarkerRange, SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRMouse : NSObject
{
    SCRDnDInfo *_dndInfo;
    SCRUIElement *_lastUIElementUnderMouse;
    SCRUIElement *_lastContainerAreaUIElement;
    double _speakUnderMouseDelayInterval;
    double _lastUserMouseMoveTime;
    NSString *_lastApplicationNameOutput;
    unsigned int _cgsConnectionID;
    SCRTextMarkerRange *_lastHoverTextMarkerRange;
    long long _currentPositioningHint;
    struct CGPoint _mouseDragPoint;
    struct CGPoint _mouseDropPoint;
    float _systemMouseCursorSize;
    long long _voCursorSize;
    struct CGPoint _triggerDockPoint;
    SCRCTargetSelectorTimer *_dragAnimationTimer;
    SCRCThreadKey *_mouseHandlerThreadKey;
    SCRCThreadKey *_threadKey;
    long long _modifierKey;
    struct {
        unsigned int alreadySpokeCurrentElement:1;
        unsigned int announceMouseEnteringContainerArea:1;
        unsigned int dontSpeakNextElement:1;
        unsigned int draggingMultipleSelection:1;
        unsigned int droppingAllowed:1;
        unsigned int ignoreNotification:1;
        unsigned int includeModifierKey:1;
        unsigned int isReverseDnD:1;
        unsigned int mouseButton1PressedDown:1;
        unsigned int mouseButton2PressedDown:1;
        unsigned int mouseIsSliding:1;
        unsigned int ranDraggabilityPreTest:1;
        unsigned int speakTextUnderMouse:1;
        unsigned int trackVOCToMouse:1;
        unsigned int windowsRemainOverlapping:1;
    } _flags;
    SCRCUserDefaults *__userDefaults;
}

@property(retain, nonatomic, setter=_setUserDefaults:) SCRCUserDefaults *_userDefaults; // @synthesize _userDefaults=__userDefaults;
@property(retain) SCRTextMarkerRange *lastHoverTextMarkerRange; // @synthesize lastHoverTextMarkerRange=_lastHoverTextMarkerRange;
@property(retain) SCRUIElement *lastContainerAreaUIElement; // @synthesize lastContainerAreaUIElement=_lastContainerAreaUIElement;
@property(retain) SCRUIElement *lastUIElementUnderMouse; // @synthesize lastUIElementUnderMouse=_lastUIElementUnderMouse;
- (void).cxx_destruct;
- (void)setIsReverseDnD:(BOOL)arg1;
- (void)handleGuideSelectionIndex:(unsigned long long)arg1 target:(id)arg2 request:(id)arg3;
- (BOOL)cancelMouseEvent;
- (void)_checkDropStatus:(id)arg1;
- (struct CGPoint)_adjustedDropLocationForAttemptCounter:(unsigned long long)arg1;
- (void)_checkDragStatus:(id)arg1;
- (BOOL)isDragging;
- (void)dragNotAcceptedOnUIElement:(id)arg1;
- (void)dragAcceptedOnUIElement:(id)arg1;
- (void)dropNotAllowedOnUIElement:(id)arg1;
- (void)dropAllowedOnUIElement:(id)arg1;
- (void)readyToDrop;
- (void)dragEnded;
- (void)alertDragEnded;
- (void)_checkDropResult;
- (void)dragStartedOnUIElement:(id)arg1;
- (void)dragToElement:(id)arg1;
- (void)startDragAndDropOntoElement:(id)arg1 withPositioningHint:(long long)arg2;
- (BOOL)_verifyDragItem:(id)arg1 destinationItem:(id)arg2;
- (void)_verifyDraggabilityAfterWindowAdjustmentWithDestination:(id)arg1;
- (void)_startDragAndDropOntoElement:(id)arg1;
- (void)_prepareForDragging;
- (void)_prepareDesktopForDragging;
- (void)_prepareDockForDragging;
- (void)startDraggingElement:(id)arg1;
- (void)_readyToDrag;
- (void)_testDragFromPosition:(id)arg1;
- (void)_reallyTestDragFromPosition:(id)arg1;
- (void)_restoreFromToggleShowDesktop;
- (struct CGPoint)_preEntryDockPointForPoint:(struct CGPoint)arg1 withDockItem:(id)arg2;
- (struct CGPoint)_triggerDockPointForPoint:(struct CGPoint)arg1 withDockItem:(id)arg2;
- (BOOL)_adjustWindowsForDragAndDrop;
- (void)_adjustToViewForSourceRect:(struct CGRect *)arg1 destinationRect:(struct CGRect *)arg2;
- (BOOL)_adjustToViewInMultipleDisplaysForSourceRect:(struct CGRect *)arg1 destinationRect:(struct CGRect *)arg2 containingRect:(struct CGRect *)arg3;
- (void)_adjustAwayFromEdgesForRect:(struct CGRect *)arg1;
- (void)_adjustToViewForRect:(struct CGRect *)arg1 inWindowRect:(struct CGRect *)arg2 withBoundary:(struct CGRect)arg3;
- (struct CGPoint)_mouseDropPointForElement:(id)arg1;
- (void)_handleRemovalFromLaunchpadPopover;
- (void)_handleDropSucceeded;
- (void)_handleDropFailure;
- (void)_handleDragFailure;
- (void)_handleReorderResult;
- (void)endDnDWithStatus:(id)arg1;
- (void)_dragEndedWithOutput:(id)arg1;
- (void)_dispatchFocusBackOnDragOrigin;
- (void)_focusBackOnDragOrigin;
- (id)_resultOutputForCenterDrop;
- (id)_resultOutputForInsertAfterDrop;
- (id)_resultOutputForInsertBeforeDrop;
- (id)_droppingContainer;
- (BOOL)_verifyDragItemIsDroppedAfterDestination;
- (BOOL)_verifyDragItemIsDroppedBeforeDestination;
- (void)_verifyDropDestinationElement;
- (BOOL)_closeEnoughMatchForString:(id)arg1 andString:(id)arg2;
- (void)markForDragAndDrop:(id)arg1;
- (BOOL)_isDroppingToDock;
- (BOOL)_isDraggingFromDock;
- (void)_handleMarkDragFailed;
- (struct CGImage *)_takeScreenshotOfVOCursorBoundedContent;
- (void)_handleMarkDragSucceeded;
- (void)_dragPreTestEnded;
- (void)_runDraggabilityPreTest;
- (void)_reallyRunDraggabilityPreTest;
- (struct CGPoint)_dragWaitingSpotForStage:(long long)arg1;
- (id)_dragScrollContainerUIElement;
- (void)_retryDragFromPoint:(struct CGPoint)arg1;
- (void)_dragFromPosition:(id)arg1;
- (void)_reallyDragFromPosition:(id)arg1;
- (void)_moveAndReleaseDragAtStartPositionWithDuration:(double)arg1;
- (void)_releaseDragAtPosition:(id)arg1;
- (void)releaseDragAtPosition:(struct CGPoint)arg1;
- (void)_releaseDragAtPositionDelay:(id)arg1;
- (void)_reallyReleaseDragAtPosition:(id)arg1;
- (void)_slideDragWithSlideInfo:(id)arg1;
- (void)_slideDragElementFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)_reallySlideDragElementFromPoint:(id)arg1 toPoint:(id)arg2 duration:(id)arg3;
- (id)_dragAnimationTimer;
- (void)_setMouseStoppedSliding;
- (BOOL)handleEvent:(id)arg1;
- (void)_navigateWithType:(id)arg1;
- (void)dontSpeakNextElement;
- (void)playLoopingDragSound;
- (void)_enterContainerAreaWithUIElement:(id)arg1;
- (void)_handleMouseOverUIElementAtPoint:(id)arg1;
- (void)_speakElementUnderMouseTimerFire;
- (void)_speakElementUnderMouseHoverTimerFire;
- (void)_handleMouseMoveToPosition:(struct CGPoint)arg1;
- (void)handleMouseMove;
- (void)_handleMouseHoverInsideUIElement:(id)arg1;
- (void)_outputUIElement:(id)arg1;
- (void)_syncVOCToUIElement:(id)arg1;
- (id)_applicationForUIElement:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_isEditableTextForElement:(id)arg1;
- (BOOL)_isMouseDown;
- (BOOL)isMouseMoving;
- (id)_findContainerAreaForUIElement:(id)arg1;
- (BOOL)button2Pressed;
- (BOOL)button1Pressed;
- (BOOL)buttonPressed;
- (void)releaseMouseButton:(long long)arg1 atPosition:(struct CGPoint)arg2 inWindowID:(unsigned int)arg3 clickCount:(long long)arg4;
- (void)pressAndHoldDownMouseButton:(long long)arg1 atPosition:(struct CGPoint)arg2 inWindowID:(unsigned int)arg3 clickCount:(long long)arg4;
- (void)clickMouseButton:(long long)arg1 atPosition:(struct CGPoint)arg2 count:(unsigned int)arg3;
- (void)clickMouseButton:(long long)arg1 atPosition:(struct CGPoint)arg2 inWindowID:(unsigned int)arg3 count:(unsigned int)arg4;
- (void)warpMouseToUIElement:(id)arg1 positioningHint:(long long)arg2 position:(struct CGPoint)arg3;
- (void)_warpMouseToUIElement:(id)arg1 positioningHint:(id)arg2 position:(id)arg3;
- (void)warpMouseToUIElement:(id)arg1 positioningHint:(long long)arg2;
- (void)warpMouseToPosition:(struct CGPoint)arg1;
- (void)_echoMouseSummary;
- (void)echoMouseSummary;
- (id)uiElementAtMousePosition:(struct CGPoint)arg1;
- (id)elementAtCurrentMousePositionWithApplication:(id)arg1;
- (struct CGPoint)currentMousePosition;
- (id)threadKey;
- (id)dndInfo;
- (void)dealloc;
- (void)invalidate;
- (void)completeInitialization;
- (id)initWithUserDefaults:(id)arg1;

@end

