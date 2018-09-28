//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AuxiliaryCallsHost.h"
#import "HasAuxiliaryConnection.h"
#import "NSVBXPCConnectionClient.h"
#import "NSXPCListenerDelegate.h"
#import "_NSAlertSensitiveView.h"

@class NSAccessibilityRemoteUIElement, NSObject<NSRemoteViewDelegate>, NSRemoteViewMarshal, NSString, NSXPCConnection, NSXPCInterface, NSXPCListenerEndpoint;

@interface NSRemoteView : NSView <NSXPCListenerDelegate, NSVBXPCConnectionClient, HasAuxiliaryConnection, AuxiliaryCallsHost, _NSAlertSensitiveView>
{
    NSRemoteViewMarshal *_rvm;
}

+ (BOOL)isFakeEvent:(id)arg1;
+ (id)_warningColorNS;
+ (struct CGColor *)_warningColorCG;
+ (id)rendezvousWindow:(unsigned char)arg1 kind:(unsigned char)arg2 spawnedBy:(id)arg3 privateEventLoopKind:(int)arg4 styleMask:(unsigned long long)arg5 content:(struct CGRect)arg6 identifier:(id)arg7 listenerEndpoint:(id)arg8 error:(id *)arg9;
+ (void)rendezvousWindow:(unsigned char)arg1 kind:(unsigned char)arg2 spawnedBy:(id)arg3 privateEventLoopKind:(int)arg4 styleMask:(unsigned long long)arg5 content:(struct CGRect)arg6 identifier:(id)arg7 listenerEndpoint:(id)arg8 semaphore:(id)arg9 completion:(CDUnknownBlockType)arg10;
+ (BOOL)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(CDUnknownBlockType)arg4;
+ (Class)rendezvousWindowClass:(Class)arg1;
+ (void)initAll;
+ (void)deferBlockOntoMainThread:(CDUnknownBlockType)arg1;
+ (struct __CFString *)privateRunLoopMode;
+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
+ (id)_remoteViewForIdentifier:(id)arg1;
+ (void)initialize;
+ (void)_addFreeWindow:(id)arg1 parameters:(const CDStruct_d1b93830 *)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;
- (BOOL)_windowGeometryChangingAtRequestOfService;
- (void)constraintsDidChangeInAccessoryWindow;
@property(readonly) BOOL wantsAlertStylePadding;
- (void)setIgnoreFontSmoothingBackgroundColor:(BOOL)arg1;
- (BOOL)ignoreFontSmoothingBackgroundColor;
- (void)_shakeContainingWindow;
- (BOOL)_updateWindowEdgeResizingRegion:(struct CGRect [8])arg1;
- (void)_dragWindowRelativeToMouseDown:(struct CGPoint)arg1;
- (id)_oldestAncestorWindow:(id)arg1 adjustingLoc:(struct CGPoint *)arg2;
- (id)_adjustLoc:(struct CGPoint *)arg1 forWindow:(id)arg2 withAncestor:(CDUnknownBlockType)arg3;
- (void)snapshot:(CDUnknownBlockType)arg1;
- (void)_snapshotWithScale:(CDUnknownBlockType)arg1;
- (BOOL)advanceToRunPhaseIfNeeded:(CDUnknownBlockType)arg1;
- (void)_completeAdvanceToRunPhase:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (BOOL)advanceToConfigPhaseIfNeeded:(CDUnknownBlockType)arg1;
- (void)_advanceToConfigPhase:(CDUnknownBlockType)arg1;
- (void)_associate;
- (id)accessibilityParentAttribute;
- (id)_accessibilityParentToken;
- (id)_accessibilityParentToken:(id)arg1;
- (void)_disassociate;
- (void)_maintainSnapshotOfAccessoryWindowInService:(BOOL)arg1;
- (void)viewDidHide;
- (void)_invalidateChildWindows;
- (void)renewGState;
- (void)hostWindowLevelDidChange:(id)arg1;
- (void)containingWindowDidChangeOcclusionState:(id)arg1;
- (void)containingWindowDidMove:(id)arg1;
- (void)_containingWindowOcclusionStateMayHaveChanged;
- (void)_remoteViewMayHaveMoved;
- (void)_hostWindowLevelDidChange;
- (BOOL)maintainAssociationForcingDisassociation:(BOOL)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)_setServiceWindowEventMask:(unsigned long long)arg1;
- (void)invalidateTrackingArea;
- (void)_disassociateAccessoryWindow;
- (void)_associateAccessoryWindow:(id)arg1 newContainingWindowID:(unsigned int)arg2;
- (void)potentialCommandEquivalentHitServiceApp:(id)arg1 eventOwner:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addChildWindow:(CDStruct_e578beec)arg1 identifier:(id)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_addChildWindow:(id)arg1 parameters:(const CDStruct_e578beec *)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)frameOfServiceWindowDidChange:(struct CGRect)arg1 safeFrame:(struct CGRect)arg2 windowBackgroundColor:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_frameOfServiceWindowDidChange:(struct CGRect)arg1 safeFrame:(struct CGRect)arg2 windowBackgroundColor:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_adjustWindowBackgroundColor:(id)arg1;
- (id)_windowBackgroundColorForFrame:(struct CGRect)arg1;
- (void)realizeChildQueueElement:(id)arg1;
- (void)enqueueChildWindow:(id)arg1 parameters:(const CDStruct_e578beec *)arg2 listenerEndpoint:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_forwardActionUpResponderChain:(id)arg1;
- (void)cacheDisplayInRect:(struct CGRect)arg1 toBitmapImageRep:(id)arg2;
- (struct CGImage *)snapshot;
- (struct CGImage *)_snapshot:(double *)arg1;
- (void)_viewDidChangeAppearance:(id)arg1;
- (void)_invalidateEffectiveVibrantBlendingStyle;
- (void)_addPotentialKeyFocusThief:(int)arg1;
- (void)_serviceWindowHasDragRegion:(id)arg1;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2 forUnderTitlebar:(BOOL)arg3;
- (BOOL)_shouldActOnServiceWindowDragRegion;
- (void)_lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
- (id)_associateMouseAndMouseCursorPosition:(BOOL)arg1;
- (id)_addChildWindow:(id)arg1 remoteView:(id *)arg2;
- (unsigned long long)_filterStyleMask:(unsigned long long)arg1 forWindowBase:(unsigned char)arg2;
- (void)_endWaitForPrivateEventLoopInService;
- (void)_waitForPrivateEventLoopInService;
- (BOOL)maintainAssociation;
- (BOOL)wouldAssociate;
- (void)_updateAccessibilityConnection:(id)arg1 force:(BOOL)arg2 legend:(const char *)arg3;
- (void)_updateAccessibilityConnection:(id)arg1 legend:(const char *)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)_didSetOriginOrSize:(struct CGRect)arg1;
- (void)_adjustGeometryOfAccessoryWindow;
- (BOOL)_shouldNotifyServiceOfChangeToHostOriginOrSize;
- (void)remoteViewControllerProxy:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)serviceViewControllerProxy:(const char *)arg1;
- (id)serviceViewControllerProxy;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)_ensureClientExportedObject;
- (void)_ensureClientExportedInterface;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;
- (void)setSynchronizesImplicitAnimations:(BOOL)arg1;
- (BOOL)synchronizesImplicitAnimations;
- (void)setWantsAggressiveKeyboardFocusTheftCancellation:(BOOL)arg1;
- (BOOL)wantsAggressiveKeyboardFocusTheftCancellation;
- (void)retreatToConfigPhase;
- (void)discloseAccessoryView:(BOOL)arg1 withVerticalOffset:(double)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (BOOL)_hasValidKeyViewInDirection:(unsigned long long)arg1;
- (void)_serviceViewReceivedLeftMouseDown:(long long)arg1;
- (id)serviceMarshalForRemoteViewWindow:(id)arg1;
- (void)_serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)_serviceWindowWouldActivate;
- (void)maintainWindowEventMonitor:(unsigned int)arg1;
- (void)_sendWindowFakeClick:(long long)arg1 why:(const char *)arg2;
- (void)updateContentMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)updateAccessibilityChildren:(id)arg1;
- (void)endModalSession:(id)arg1;
- (struct _NSModalSession *)_beginModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3 error:(id *)arg4;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)forgetAccessoryView;
@property(retain) NSView *accessoryView;
- (void)ensureAccessoryWindow:(struct CGRect)arg1;
- (void)setAccessoryViewCanBecomeKeyView:(id)arg1;
- (void)setServiceAccessoryViewSize:(struct CGSize)arg1;
- (void)_setServiceWindowKeyness:(BOOL)arg1;
- (void)_adjustToServiceWindowKeyness;
- (void)_adjustToServiceWindowResigningKey;
- (void)_adjustToServiceWindowBecomingKey;
- (void)_serviceWindowKeynessChangeInProgress:(CDUnknownBlockType)arg1;
- (BOOL)_isContentView;
- (void)_setServiceContextID:(unsigned int)arg1;
- (void)_setServiceWindowStyleMask:(unsigned long long)arg1;
- (BOOL)_adjustToServiceWindowStyleMask;
- (BOOL)_shouldAdjustToServiceStyleMask;
- (void)setWindow:(id)arg1 styleMask:(unsigned long long)arg2;
- (void)_endAllModalSessions:(BOOL)arg1;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)_beginDeferredSheets;
- (void)beginDeferredSheet:(id)arg1;
- (void)beginAppModalSessionForWindow;
- (id)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4;
- (id)rendezvousPanel:(struct CGRect)arg1 identifier:(id)arg2 childOrderingMode:(long long)arg3 error:(id *)arg4;
- (void)_ensureBridgeObserversForRendezvousWindow;
- (void)sheetCompleted:(id)arg1;
- (void)serviceRequestsResize:(struct CGSize)arg1 serviceWindowBackgroundColor:(id)arg2 safeFrame:(struct CGRect)arg3 animate:(BOOL)arg4 transaction:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_serviceRequestsResize:(struct CGSize)arg1 serviceWindowBackgroundColor:(id)arg2 safeFrame:(struct CGRect)arg3 animate:(BOOL)arg4 transaction:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_completeResizeRequestWithError:(id)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)_informAuxServiceOfMostRecentlyReportedFrameInScreenCoords:(struct CGRect)arg1;
- (void)_informAuxServiceOfFrameInScreenCoords:(struct CGRect)arg1;
- (BOOL)_hasValidRendezvousChildWindows;
- (struct CGRect)frameInScreenCoords;
@property(readonly, nonatomic) NSRemoteView *spawnedBy;
- (void)_serviceRequestsResize:(struct CGSize)arg1 animate:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_serviceRequestsResize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_serviceWindowRequestsResizeInProgress:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (int)_maintainFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2;
- (BOOL)_inhibitFirstResponder;
- (void)_disengageFromAllWindows;
- (void)maintainFirstResponderInProgress:(CDUnknownBlockType)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (id)_withoutCatchSupplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
- (BOOL)_serviceValidatesAction:(id)arg1 menuItem:(CDStruct_e99345e9 *)arg2 userInterfaceItem:(CDStruct_e99345e9 *)arg3 targetIdentifier:(id *)arg4 sender:(id)arg5;
- (void)setServiceObject:(id)arg1 forKey:(id)arg2;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)keyDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)keyEventHitServiceAccessoryView:(id)arg1 eventOwner:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)cancel:(id)arg1;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (struct NSObject *)_viewServiceMarshalProxy:(const char *)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (struct NSObject *)_viewServiceMarshalProxy:(const char *)arg1 withDetailedErrorHandler:(CDUnknownBlockType)arg2;
- (id)wrapProxyForAnimationFencing:(id)arg1;
- (struct NSObject *)_viewServiceMarshalProxy:(const char *)arg1;
- (void)_advanceToConfigPhaseLegacy;
- (void)_signalAndClearLegacyAdvanceSemaphores;
- (void)_copyFromBootstrapParameters:(const CDStruct_e2fa5527 *)arg1;
- (double)_reportScaleFactor;
- (double)_backingScaleFactorOrZero;
- (id)auxiliaryClientListenerEndpoint;
- (id)auxiliaryServiceListenerEndpoint;
- (id)auxiliaryListenerEndpointForProtocol:(id)arg1;
- (id)remoteViewIdentifier;
- (void)_encounteredError:(id)arg1;
- (void)_copyViewServiceMarshalReply:(const CDStruct_4e11500c *)arg1 withClientExportedObjectWithClientInterface:(id)arg2 withClientExportedObjectWithAnimationSyncInterface:(id)arg3;
- (BOOL)_finishAdvanceToConfigPhaseWithContextID:(unsigned int)arg1 andOffset:(struct CGPoint)arg2;
- (BOOL)_becameInvalidWhileFinishingAdvanceToConfigPhase:(const char *)arg1;
- (void)_informAuxServiceOfSelf;
- (void)_configureLayersWithContextID:(unsigned int)arg1 andOffset:(struct CGPoint)arg2;
- (BOOL)shouldMaskToBounds;
- (void)setShouldMaskToBounds:(BOOL)arg1;
- (void)_adjustToServiceWindowContentMinMaxSizes;
- (id)serviceMarshalConnection;
- (void)_configureAndRetainServiceMarshalConnection:(id)arg1;
- (void)containingWindowDidOrderOffScreen:(id)arg1;
- (void)containingWindowWillOrderOffScreen:(id)arg1;
- (void)containingWindowDidOrderOnScreen:(id)arg1;
- (void)containingWindowWillOrderOnScreen:(id)arg1;
- (void)_expectWindowOrderingState:(int)arg1 andAdvanceTo:(int)arg2 caller:(const char *)arg3;
- (void)viewDidUnhide;
- (void)_allowAuxiliaryAppNap:(id)arg1;
- (void)_preventAuxiliaryAppNap:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (BOOL)_windowSupportsVibrancy:(id)arg1;
- (BOOL)_shouldImposeVibrancySupport:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (BOOL)_isOrBecomingContentView;
- (void)_updateFontSmoothingBackgroundColorBasedOnWindow:(id)arg1;
- (id)_fontSmoothingColorForWindow:(id)arg1;
- (BOOL)_associateWithHostWindow:(unsigned int)arg1 withKeyness:(BOOL)arg2 isFirstResponder:(BOOL)arg3 atLevel:(long long)arg4 isFunctionRow:(BOOL)arg5 withBlock:(CDUnknownBlockType)arg6;
- (void)setRemoteAccessibilityChildrenTokens:(id)arg1;
- (id)elementsForTokens:(id)arg1;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilityChildren:(id)arg1;
- (id)accessibilityFocusedUIElement;
- (void)updateAccessoryViewAccessibility;
- (void)updateAccessoryViewAccessibilityParent:(id)arg1;
- (BOOL)advanceToRunPhaseIfNeeded;
- (BOOL)_advanceToRunPhaseLegacy;
- (void)_waitOnSemaphore:(id)arg1;
- (void)_awaitInvalidation;
- (void)_terminateViewService;
- (double)_fauxSynchronousPatience;
- (BOOL)_serviceHasDebuggerAttached;
- (void)_advanceToRunPhase:(CDUnknownBlockType)arg1;
- (void)serviceWindowOrderedWithMode:(long long)arg1 relativeTo:(unsigned int)arg2;
- (void)wrappedAddSubview:(id)arg1;
- (BOOL)_shouldConstrainChildWindowGeometry;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)setSubviews:(id)arg1;
- (void)addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)addSubview:(id)arg1;
- (void)_hardenAgainstSubviewMutation;
- (void)maintainAppWideNotifications:(BOOL)arg1;
- (void)_maintainApplicationNotifications:(BOOL)arg1;
- (void)_maintainWindowNotifications:(BOOL)arg1;
- (void)maintainContainingWindowNotifications:(BOOL)arg1;
- (void)maintainKeyTestWindowNotifications:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)becomeFirstResponder;
- (BOOL)_shouldBecomeFirstResponder;
- (void)_remoteViewBecameFirstResponder:(unsigned long long)arg1 withIPC:(CDUnknownBlockType)arg2;
- (void)_remoteViewBecameFirstResponder;
- (void)_auxiliaryProxyWithSemaphore:(id)arg1 attemptingTo:(const char *)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(nonatomic) NSXPCConnection *auxiliaryServiceConnection;
@property(nonatomic) NSXPCListenerEndpoint *auxiliaryListenerEndpoint;
@property(readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceOutgoing;
@property(readonly, nonatomic) NSXPCInterface *auxiliaryInterfaceIncoming;
- (BOOL)_oldFirstResponderWasAccessoryViewOrWindow;
- (unsigned long long)_oldFirstResponderBeforeBecomingTextSelectionDirection;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)hostWindowDidBecomeKey:(id)arg1;
- (void)hostWindowDidResignKey:(id)arg1;
- (BOOL)_evaluateKeyness;
- (BOOL)_evaluateKeynessForWindow:(id)arg1;
- (BOOL)_evaluateKeyness:(BOOL)arg1 forWindow:(id)arg2;
- (BOOL)shouldInformServiceOfKeynessChange:(id)arg1;
- (void)maintainProcessNotificationEventMonitor:(BOOL)arg1;
- (void)_synchronizeImplicitAnimationsInActions:(CDUnknownBlockType)arg1;
- (BOOL)_updateWindowEdgeResizingRegion;
- (BOOL)_shouldUpdateWindowEdgeResizingRegion;
- (id)stolenKeyFocusEventFilter:(id)arg1;
- (id)keyTestWindow;
- (struct CGSize)serviceViewSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_postSuperInit;
- (void)_preSuperInit;
- (void)invalidate:(BOOL)arg1;
- (void)_invalidate:(BOOL)arg1;
- (void)_invalidateWindowBridgeKeys;
- (void)_stopMonitoringEvents;
- (void)invalidate;
- (void)setTrustsServiceKeyEvents:(BOOL)arg1;
- (BOOL)trustsServiceKeyEvents;
@property NSObject<NSRemoteViewDelegate> *delegate;
- (void)_setDelegate:(struct NSObject *)arg1;
@property(copy, nonatomic) NSString *serviceSubclassName;
@property(copy, nonatomic) NSString *serviceName;
- (void)setServiceListenerEndpoint:(id)arg1;
- (id)serviceListenerEndpoint;
- (void)setServiceSubclassIdentifier:(id)arg1;
- (id)serviceSubclassIdentifier;
- (void)setRendezvousWindowIdentifier:(id)arg1;
- (id)_serviceProcessIdentifier;
- (void)dealloc;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;
- (id)_bridge;
- (id)bridge;
- (BOOL)hasBridge;
@property(readonly) NSString *_debuggingHint;
- (BOOL)invalid;
@property(readonly) BOOL isValid;
- (BOOL)valid;
@property(retain, nonatomic) NSAccessibilityRemoteUIElement *accessoryViewAccessibilityParent;
- (unsigned char)bridgePhase;
@property(readonly) id auxiliarySyncObject;
- (BOOL)_viewServiceMaySetHostWindowLevel;
- (void)_matchBootstrapFrameOfWindow:(id)arg1;
- (void)_showTouchBarPopover:(id)arg1 fromItem:(id)arg2 withOverlayIdentifier:(id)arg3 withCloseButton:(BOOL)arg4 withControlStrip:(BOOL)arg5 withOptions:(id)arg6;
- (void)_hideTouchBarPopover:(id)arg1;
- (void)_setTouchBar:(id)arg1 description:(id)arg2;
- (void)_setTouchBar:(id)arg1 escapeKeyReplacementItem:(id)arg2;
- (void)_setTouchBar:(id)arg1 principalItemIdentifier:(id)arg2;
- (void)_setTouchBarItem:(id)arg1 itemPosition:(id)arg2;
- (BOOL)_shouldSpelunkTouchBarsProactively;
- (void)_serviceHasTouchBars:(id)arg1;
- (void)_ifNecessaryReplaceTouchBars;
- (void)_setTouchBars:(id)arg1;
- (id)_touchBars:(BOOL)arg1;
- (void)_startSpelunkingTouchBars;
- (void)_configureTouchBar:(id)arg1 perDescription:(id)arg2;
- (BOOL)_decodeBoolean:(id)arg1 inDescription:(id)arg2;
- (id)_mapPerProcessIdentifiers:(id)arg1 of:(id)arg2;
- (void)_ifNecessaryReplaceTouchBar:(id)arg1 escapeKeyReplacementItem:(id)arg2;
- (void)_assertObjectsOf:(id)arg1 areKindOfClass:(Class)arg2;
- (id)_touchBarsDescription;
- (void)setTouchBar:(id)arg1;
- (id)touchBar;
- (id)NS_touchBars;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

