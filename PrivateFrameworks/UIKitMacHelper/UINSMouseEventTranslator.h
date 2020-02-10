//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UINSSceneView, UINSScrollState;

__attribute__((visibility("hidden")))
@interface UINSMouseEventTranslator : NSObject
{
    id _changeModeMonitor;
    UINSScrollState *_scrollState;
    struct __IOHIDEvent *_lastPressureEvent;
    unsigned int _mouseContextId;
    unsigned int _gestureContextId;
    unsigned int _hoverContextId;
    unsigned int _dragContextId;
    BOOL _mouseIsInside;
    BOOL _needMouseExitOnUp;
    unsigned long long _lastButtonMask;
    unsigned char _lastClickCount;
    unsigned long long _lastModifiers;
    struct CGPoint _lastSceneLoc;
    BOOL _dragAndDropDragging;
    UINSSceneView *_sceneView;
}

@property(nonatomic) __weak UINSSceneView *sceneView; // @synthesize sceneView=_sceneView;
- (void).cxx_destruct;
- (void)_handleChangeModeEvent:(id)arg1;
- (void)_sendDragAndDropEvent:(id)arg1 isInsideApp:(BOOL)arg2 isDragging:(BOOL)arg3;
- (void)_handlePinchEvent:(id)arg1;
- (struct __IOHIDEvent *)_createPinchEventWithPhase:(unsigned long long)arg1 magnify:(struct __IOHIDEvent *)arg2 rotate:(struct __IOHIDEvent *)arg3 translate:(struct __IOHIDEvent *)arg4;
- (void)_coalescePinchStartingWithEvent:(id)arg1 outputMagnify:(struct __IOHIDEvent **)arg2 rotate:(struct __IOHIDEvent **)arg3 translate:(struct __IOHIDEvent **)arg4;
- (struct __IOHIDEvent *)_copyCoalescedPressureEventUntilDate:(id)arg1;
- (void)_cancelScrollIfNeeded;
- (void)_handleRelativeScrollEvent:(id)arg1;
- (void)_handleGestureScrollEvent:(id)arg1;
- (void)_cancelMomentumScrollForDeviceType:(unsigned char)arg1;
- (BOOL)_nextScrollGestureDelta:(struct CGPoint *)arg1 wait:(BOOL)arg2;
- (void)_handleMomentumScrollEvent:(id)arg1;
- (void)_handleScrollWheelEvent:(id)arg1;
- (void)_handleMouseEventAtSceneLocation:(struct CGPoint)arg1 buttonMask:(long long)arg2 clickCount:(unsigned char)arg3 modifierFlags:(unsigned long long)arg4 childEvent:(struct __IOHIDEvent *)arg5 contextId:(unsigned int)arg6;
- (void)_handleMouseEvent:(id)arg1 contextId:(unsigned int)arg2;
- (void)draggingEnded:(id)arg1;
- (void)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)draggingUpdated:(id)arg1;
- (void)draggingEntered:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)translateWithEvent:(id)arg1;
- (void)rotateWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)cancelOutstandingMouseButtons;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (unsigned int)_contextIdAtWindowLocation:(struct CGPoint)arg1;
- (struct CGPoint)_convertScrollDeltaToSceneDelta:(id)arg1;
- (struct CGPoint)_convertSceneLocationToWindowCoordinates:(struct CGPoint)arg1;
- (struct CGPoint)_convertWindowLocationToSceneCoordinates:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

@end
