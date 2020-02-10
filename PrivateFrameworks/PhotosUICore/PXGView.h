//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PXChangeObserver.h"
#import "PXGAccessibilityRendererDelegate.h"
#import "PXGDiagnosticsProvider.h"
#import "PXGEngineDelegate.h"
#import "PXNSScrollViewControllerAccessibilityDelegate.h"
#import "PXScrollViewControllerObserver.h"

@class MTKView, NSArray, NSColor, NSDictionary, NSResponder, NSString, PXGAnchor, PXGDebugHUDLayer, PXGEngine, PXGLayout, PXGRectDiagnosticsLayer, PXScrollViewController, PXScrollViewSpeedometer;

@interface PXGView : NSView <PXScrollViewControllerObserver, PXGEngineDelegate, PXGAccessibilityRendererDelegate, PXChangeObserver, PXNSScrollViewControllerAccessibilityDelegate, PXGDiagnosticsProvider>
{
    PXGDebugHUDLayer *_debugHUDLayer;
    PXGRectDiagnosticsLayer *_rectDiagnosticsLayer;
    NSColor *_backgroundColor;
    BOOL _performingHitTest;
    BOOL canSelectAccessibilityGroupElements;
    BOOL canSelectAccessibilityGroupElementsChildren;
    BOOL _isScrolling;
    BOOL _isAnimatingScroll;
    BOOL _showDebugHUD;
    BOOL _showPerspectiveDebug;
    BOOL _ignoreBoundsChanges;
    PXGLayout *accessibilityRootLayout;
    id <PXGViewAccessibilityDelegate> _accessibilityDelegate;
    PXScrollViewController *_scrollViewController;
    PXScrollViewSpeedometer *_scrollingSpeedometer;
    NSResponder *_preferredFirstResponder;
    id <NSDraggingDestination> _draggingDestinationDelegate;
    MTKView *_metalView;
    PXGAnchor *_scrollingAnimationAnchor;
    NSDictionary *_ppt_currentTestOptions;
    CDUnknownBlockType _nextDidLayoutHandler;
    id <PXGViewDiagnosticsSource> _diagnosticsSource;
    PXGEngine *_engine;
    struct NSEdgeInsets _hitTestPadding;
}

+ (BOOL)forceAccessibilityEnabled;
+ (void)setForceAccessibilityEnabled:(BOOL)arg1;
+ (BOOL)isAvailable;
+ (long long)screenPixelCount;
@property(readonly, nonatomic) PXGEngine *engine; // @synthesize engine=_engine;
@property(nonatomic) BOOL ignoreBoundsChanges; // @synthesize ignoreBoundsChanges=_ignoreBoundsChanges;
@property(retain, nonatomic) id <PXGViewDiagnosticsSource> diagnosticsSource; // @synthesize diagnosticsSource=_diagnosticsSource;
@property(nonatomic) BOOL showPerspectiveDebug; // @synthesize showPerspectiveDebug=_showPerspectiveDebug;
@property(nonatomic) BOOL showDebugHUD; // @synthesize showDebugHUD=_showDebugHUD;
@property(copy, nonatomic) CDUnknownBlockType nextDidLayoutHandler; // @synthesize nextDidLayoutHandler=_nextDidLayoutHandler;
@property(copy, nonatomic, setter=ppt_setCurrentTestOptions:) NSDictionary *ppt_currentTestOptions; // @synthesize ppt_currentTestOptions=_ppt_currentTestOptions;
@property(retain, nonatomic) PXGAnchor *scrollingAnimationAnchor; // @synthesize scrollingAnimationAnchor=_scrollingAnimationAnchor;
@property(nonatomic) BOOL isAnimatingScroll; // @synthesize isAnimatingScroll=_isAnimatingScroll;
@property(nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(readonly, nonatomic) struct NSEdgeInsets hitTestPadding; // @synthesize hitTestPadding=_hitTestPadding;
@property(readonly, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) __weak id <NSDraggingDestination> draggingDestinationDelegate; // @synthesize draggingDestinationDelegate=_draggingDestinationDelegate;
@property(readonly, nonatomic) NSResponder *preferredFirstResponder; // @synthesize preferredFirstResponder=_preferredFirstResponder;
@property(readonly, nonatomic) PXScrollViewSpeedometer *scrollingSpeedometer; // @synthesize scrollingSpeedometer=_scrollingSpeedometer;
@property(readonly, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(nonatomic) __weak id <PXGViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (void).cxx_destruct;
- (id)viewForSpriteIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSDictionary *ppt_extraResults;
- (void)ppt_cleanUpAfterTest:(id)arg1 isScrollTest:(BOOL)arg2;
- (void)ppt_prepareForTest:(id)arg1 withOptions:(id)arg2 isScrollTest:(BOOL)arg3;
- (void)test_installRenderSnapshotHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSArray *axDelegateAccessibilitySelectedCells;
@property(retain, nonatomic) NSArray *axDelegateAccessibilitySelectedChildren;
@property(readonly, nonatomic) NSArray *axDelegateAccessibilityVisibleChildren;
@property(readonly, nonatomic) NSArray *axDelegateAccessibilityChildren;
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElementsChildren; // @synthesize canSelectAccessibilityGroupElementsChildren;
@property(readonly, nonatomic) BOOL canSelectAccessibilityGroupElements; // @synthesize canSelectAccessibilityGroupElements;
@property(readonly, nonatomic) PXGLayout *accessibilityRootLayout; // @synthesize accessibilityRootLayout;
- (id)accessibilityViewForSpriteIndex:(unsigned int)arg1;
- (id)accessibilityHitTestResultAtPoint:(struct CGPoint)arg1;
- (void)notifySelectedCellsChanged;
- (void)axScrollToAsset:(id)arg1;
- (id)assetClosestToAsset:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)selectAssets:(id)arg1;
- (BOOL)itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemWasRightClickedWithHitTestResult:(id)arg1 location:(struct CGPoint)arg2;
- (BOOL)itemWasDoubleClickedWithHitTestResult:(id)arg1;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)_ensureEndAnimatedScroll;
- (void)scrollViewControllerDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(id)arg1 towardsContentEdges:(unsigned long long)arg2;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)scrollViewControllerDidLayoutSubviews:(id)arg1;
@property(nonatomic) BOOL slowAnimationsEnabled;
- (void)engine:(id)arg1 updateDebugHUDWithStats:(CDStruct_58b866b9 *)arg2;
- (struct CGImage *)textureSnapshotForSpriteReference:(id)arg1;
- (id)regionOfInterestForHitTestResult:(id)arg1;
- (id)regionOfInterestForSpriteReference:(id)arg1;
- (id)hitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2;
- (id)hitTestResultsInRect:(struct CGRect)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1 padding:(struct NSEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitTestResultsAtPoint:(struct CGPoint)arg1;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1 padding:(struct NSEdgeInsets)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1;
- (void)disablePreheating;
- (void)installLayoutCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_installNextDidLayoutHandler:(CDUnknownBlockType)arg1;
- (void)_updateUserInterfaceDirection;
- (void)_updateLayoutScreenScale;
- (void)_updateIsVisible;
- (void)_updateLayoutViewEnvironment;
- (void)installAnimationRenderingCompletionHandler:(CDUnknownBlockType)arg1;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1 pixelBufferSourcesProvider:(id)arg2 namedImagesBundle:(id)arg3;
- (void)registerAllTextureProvidersWithMediaProvider:(id)arg1;
- (void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2;
@property(retain, nonatomic) PXGLayout *rootLayout;
- (void)setHidden:(BOOL)arg1;
- (void)didMoveToWindow;
@property(retain, nonatomic) NSColor *backgroundColor;
- (void)_updateMetalView;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_windowChangedKeyState;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidChangeBackingProperties;
- (void)layout;
- (BOOL)isFlipped;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_validateHitTest:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_handleScreenChanges:(id)arg1;
- (void)_toggleSlowAnimations:(id)arg1;
- (void)_toggleDebugHUD:(id)arg1;
- (void)popUpDebugContextMenuWithEvent:(id)arg1;
- (void)_willChangeBoundsSizeFrom:(struct CGRect)arg1 toBounds:(struct CGRect)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_updateAccessibilityStatus;
- (void)_forceAccessibilityEnabledChanged:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL hasExtendedColorDisplay;
- (id)curatedLibraryHitTestResultsInRect:(struct CGRect)arg1 withControl:(long long)arg2;
- (void)enumerateCuratedLibraryHitTestResultsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCuratedLibraryHitTestResultsInDirection:(unsigned long long)arg1 fromSpriteReference:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)firstCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControl:(long long)arg2;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 withControls:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCuratedLibraryHitTestResultsAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)isObjectReference:(id)arg1 visuallyBeforeObjectReference:(id)arg2;
- (struct CGImage *)_fallbackImageForAssetReference:(id)arg1 mediaProvider:(id)arg2;
- (id)regionOfInterestForAssetReference:(id)arg1 image:(struct CGImage **)arg2 fallbackMediaProvider:(id)arg3;
- (id)regionOfInterestForObjectReference:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
