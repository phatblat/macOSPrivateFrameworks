//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SearchableWKView.h>

@class BrowserDocument, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSUUID;

__attribute__((visibility("hidden")))
@interface BrowserWKView : SearchableWKView
{
    BrowserDocument *_document;
    NSMutableDictionary *_renderTreeCreationHandlerMap;
    NSMutableSet *_WKViewMouseTrackingBlockerSet;
    BOOL _webPageIsUnresponsive;
    NSMutableArray *_previewWKViews;
    BOOL _shouldBlockAllMouseEvents;
    BOOL _shouldBlockAllKeyEvents;
    BOOL _shouldBlockFirstResponder;
    BOOL _isVisible;
    BOOL _overrideMaintainsInactiveSelectionForVoiceOver;
    NSUUID *_uuid;
    id <NSTouchBarProvider> _alternateFunctionBarProvider;
}

+ (void)closeWKViews:(id)arg1;
@property(retain, nonatomic) id <NSTouchBarProvider> alternateFunctionBarProvider; // @synthesize alternateFunctionBarProvider=_alternateFunctionBarProvider;
@property(nonatomic) BOOL overrideMaintainsInactiveSelectionForVoiceOver; // @synthesize overrideMaintainsInactiveSelectionForVoiceOver=_overrideMaintainsInactiveSelectionForVoiceOver;
@property(readonly, nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) BOOL shouldBlockFirstResponder; // @synthesize shouldBlockFirstResponder=_shouldBlockFirstResponder;
@property(nonatomic) BOOL shouldBlockAllKeyEvents; // @synthesize shouldBlockAllKeyEvents=_shouldBlockAllKeyEvents;
@property(nonatomic) BOOL shouldBlockAllMouseEvents; // @synthesize shouldBlockAllMouseEvents=_shouldBlockAllMouseEvents;
@property(nonatomic) BOOL webPageIsUnresponsive; // @synthesize webPageIsUnresponsive=_webPageIsUnresponsive;
- (void).cxx_destruct;
- (id)touchBar;
- (BOOL)resignFirstResponder;
- (BOOL)_isBlockingWKViewMouseTracking;
- (void)_handleClickInPreviewView:(id)arg1 URL:(id)arg2;
- (void)_finishPreviewingURL:(id)arg1 withPagePreviewViewController:(id)arg2;
- (id)_viewForPreviewingURL:(id)arg1 initialFrameSize:(struct CGSize)arg2;
- (struct BrowserContentViewController *)presentingBrowserContentViewController;
- (id)createFullScreenWindow;
- (void)didCreateRenderLayerTree:(const struct RenderLayer *)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (void)createRenderLayerTreeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didCreateRenderTree:(const struct RenderObject *)arg1 forRequestWithIdentifier:(unsigned long long)arg2;
- (void)createRenderTreeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)handleDoJavaScriptCommand:(id)arg1;
- (id)textProviderForAppleScript;
- (id)sourceProviderForAppleScript;
- (BOOL)performKeyEquivalent:(id)arg1;
- (id)_hitTestWindowAtWindowCoordinate:(struct CGPoint)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_didChangeContentSize:(struct CGSize)arg1;
- (void)unblockWKViewMouseTrackingWithObject:(id)arg1;
- (void)blockWKViewMouseTrackingWithObject:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;
- (void)_windowDidChangeOcclusionState:(id)arg1;
- (void)_updateVisibility;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)scrollWheel:(id)arg1;
- (id)tabContentView;
- (void)pageDidClose;
- (void)didMoveToDocument:(id)arg1;
- (void)setPreviewParentView:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *previewWKViews;
- (id)playbackControlsPresenter;
- (id)browserWindowController;
- (struct BrowserContentViewController *)browserContentViewController;
- (Ref_8cb8e81f)createContentViewController;
- (void)dealloc;
- (void)_commonBrowserWKViewInit;
- (id)initWithDocument:(id)arg1 frame:(struct CGRect)arg2 context:(const struct Context *)arg3 pageGroup:(const struct PageGroup *)arg4 browsingMode:(unsigned long long)arg5 websiteDataStore:(id)arg6;
- (id)initWithDocument:(id)arg1 frame:(struct CGRect)arg2 context:(const struct Context *)arg3 pageGroup:(const struct PageGroup *)arg4 browsingMode:(unsigned long long)arg5;

@end
