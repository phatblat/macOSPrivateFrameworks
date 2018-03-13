//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "AuxiliaryCallsHost.h"
#import "HasAuxiliaryConnection.h"
#import "NSVBDeallocOnAppKitThread.h"
#import "NSVBXPCConnectionClient.h"
#import "NSXPCListenerDelegate.h"
#import "_NSAlertSensitiveView.h"

@class NSAccessibilityRemoteUIElement, NSObject<NSRemoteViewDelegate>, NSRemoteViewMarshal, NSString, NSViewBridge, NSXPCConnection, NSXPCInterface;

@interface NSRemoteView : NSView <NSXPCListenerDelegate, NSVBXPCConnectionClient, HasAuxiliaryConnection, AuxiliaryCallsHost, NSVBDeallocOnAppKitThread, _NSAlertSensitiveView>
{
    NSRemoteViewMarshal *_rvm;
}

+ (BOOL)isFakeEvent:(id)arg1;
+ (BOOL)allowSetObjectForKey:(id)arg1 bridge:(id)arg2 bridgePhase:(unsigned char)arg3 withReply:(CDUnknownBlockType)arg4;
+ (void)initAll;
+ (void)deferBlockOntoMainThread:(CDUnknownBlockType)arg1;
+ (struct __CFString *)privateRunLoopMode;
+ (id)_findFirstKeyViewInDirection:(unsigned long long)arg1 forKeyLoopGroupingView:(id)arg2;
+ (id)_remoteViewForIdentifier:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfTouchBar;
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
- (void)containingWindowDidOrderOffScreen:(id)arg1;
- (void)containingWindowWillOrderOnScreen:(id)arg1;
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
- (void)_positionAccessoryWindowAgainst:(id)arg1;
- (void)potentialCommandEquivalentHitServiceApp:(id)arg1 eventOwner:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_forwardActionUpResponderChain:(id)arg1;
- (void)cacheDisplayInRect:(struct CGRect)arg1 toBitmapImageRep:(id)arg2;
- (struct CGImage *)snapshot;
- (struct CGImage *)_snapshot:(double *)arg1;
- (void)_serviceDidFinishDisplayingAfterDidChangeAppearance;
- (void)_viewDidChangeAppearance:(id)arg1;
- (void)_addPotentialKeyFocusThief:(int)arg1;
- (void)_lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
- (id)_associateMouseAndMouseCursorPosition:(BOOL)arg1;
- (id)_addChildWindow:(id)arg1 privateEventLoopKind:(int)arg2 windowBase:(unsigned char)arg3 ordered:(long long)arg4 content:(struct CGRect)arg5 remoteView:(id *)arg6;
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
- (void)discloseAccessoryView:(BOOL)arg1 andAnimationState:(int)arg2 andDuration:(double)arg3;
- (BOOL)_hasValidKeyViewInDirection:(unsigned long long)arg1;
- (void)_serviceViewReceivedLeftMouseDown;
- (id)serviceMarshalForRemoteViewWindow:(id)arg1;
- (void)_serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)_serviceWindowWouldActivate;
- (void)maintainWindowEventMonitor:(unsigned int)arg1;
- (void)_sendWindowFakeClick:(const char *)arg1;
- (void)updateContentMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2;
- (void)updateAccessibilityChildren:(id)arg1;
- (void)endModalSession:(id)arg1;
- (struct _NSModalSession *)_beginModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)_setAccessoryViewFrame:(struct CGRect)arg1;
- (void)_whileSettingAccessoryViewFrame:(struct CGRect)arg1;
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
- (BOOL)beginAppModalSessionForWindow;
- (BOOL)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4;
- (id)rendezvousPanel:(struct CGRect)arg1 identifier:(id)arg2 childOrderingMode:(long long)arg3;
- (id)rendezvousWindow:(Class)arg1 privateEventLoopKind:(int)arg2 styleMask:(unsigned long long)arg3 backing:(unsigned long long)arg4 content:(struct CGRect)arg5 identifier:(id)arg6;
- (void)_ensureBridgeObserversForWindow;
- (void)_ensureBridgeObserversForWindowBase:(unsigned char)arg1;
- (void)sheetCompleted:(id)arg1;
- (void)_serviceRequestsResize:(struct CGSize)arg1 animate:(BOOL)arg2 transaction:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGRect)frameInScreenCoords;
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
- (double)_reportScaleFactor;
- (double)_backingScaleFactorOrZero;
- (id)_effectiveAppearanceName;
- (id)auxiliaryServiceListenerEndpoint;
- (id)remoteViewIdentifier;
- (void)_encounteredError:(id)arg1;
- (void)_copyViewServiceMarshalReply:(const CDStruct_79351cb8 *)arg1 withClientExportedObjectWithClientInterface:(id)arg2 withClientExportedObjectWithAnimationSyncInterface:(id)arg3;
- (BOOL)_finishAdvanceToConfigPhaseWithContextID:(unsigned int)arg1 andServiceViewSize:(struct CGSize)arg2 andOffset:(struct CGPoint)arg3;
- (BOOL)_becameInvalidWhileFinishingAdvanceToConfigPhase:(const char *)arg1;
- (void)informAuxServiceOfSelf;
- (void)_configureLayersWithContextID:(unsigned int)arg1 andOffset:(struct CGPoint)arg2;
- (BOOL)shouldMaskToBounds;
- (void)setShouldMaskToBounds:(BOOL)arg1;
- (void)_adjustToServiceWindowContentMinMaxSizes;
- (id)serviceMarshalConnection;
- (void)_configureAndRetainServiceMarshalConnection:(id)arg1;
- (void)containingWindowWillOrderOffScreen:(id)arg1;
- (void)containingWindowDidOrderOnScreen:(id)arg1;
- (void)viewDidUnhide;
- (void)_allowAuxiliaryAppNap:(id)arg1;
- (void)_preventAuxiliaryAppNap:(id)arg1;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (BOOL)_windowSupportsVibrancy:(id)arg1;
- (BOOL)_shouldImposeVibrancySupport;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToSuperview;
- (BOOL)_isOrBecomingContentView;
- (void)_updateFontSmoothingBackgroundColorBasedOnWindow:(id)arg1;
- (id)_fontSmoothingColorForWindow:(id)arg1;
- (void)sendFontSmoothingBackgroundColorToService:(id)arg1;
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
- (void)_advanceToRunPhase:(CDUnknownBlockType)arg1;
- (void)orderWindow:(unsigned int)arg1 mode:(long long)arg2 relativeTo:(unsigned int)arg3;
- (void)wrappedAddSubview:(id)arg1;
- (Class)rendezvousWindowClass:(Class)arg1;
- (BOOL)_serviceHasTransparentChildWindowEntitlement;
- (BOOL)_serviceSignedByApple;
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
@property(readonly) NSViewBridge *bridge;
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
@property BOOL trustsServiceKeyEvents;
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
- (void)_superDealloc;
- (void)dealloc;
- (void)_deallocOnAppKitThread;
@property(readonly) BOOL hasBridge;
@property(readonly) NSString *_debuggingHint;
@property(readonly) BOOL invalid;
@property(readonly) BOOL isValid;
@property(readonly) BOOL valid;
@property(retain, nonatomic) NSAccessibilityRemoteUIElement *accessoryViewAccessibilityParent;
- (unsigned char)bridgePhase;
@property(readonly) id auxiliarySyncObject;
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

