//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKView.h"

#import "_WKFullscreenDelegate.h"

@class BrowserViewController, NSString, WKWebsiteDataStore, WebViewController, _WKRemoteObjectRegistry;

__attribute__((visibility("hidden")))
@interface SearchableWKView : WKView <_WKFullscreenDelegate>
{
    BOOL _isInFullscreenMode;
    BOOL _isLockingFirstResponderForImmediateAction;
    id <SearchableWKViewFullScreenDelegate> _fullScreenDelegate;
    id <SearchableWKViewPlaybackControlsPresenter> _playbackControlsPresenter;
    id <SearchableWKViewCancelDelegate> _cancelDelegate;
    unsigned long long _browsingMode;
    WKWebsiteDataStore *_websiteDataStore;
    WebViewController *_webViewController;
}

@property(readonly, nonatomic) __weak WebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(readonly, nonatomic) WKWebsiteDataStore *websiteDataStore; // @synthesize websiteDataStore=_websiteDataStore;
@property(readonly, nonatomic) unsigned long long browsingMode; // @synthesize browsingMode=_browsingMode;
@property(nonatomic) __weak id <SearchableWKViewCancelDelegate> cancelDelegate; // @synthesize cancelDelegate=_cancelDelegate;
@property(nonatomic) __weak id <SearchableWKViewPlaybackControlsPresenter> playbackControlsPresenter; // @synthesize playbackControlsPresenter=_playbackControlsPresenter;
@property(nonatomic) __weak id <SearchableWKViewFullScreenDelegate> fullScreenDelegate; // @synthesize fullScreenDelegate=_fullScreenDelegate;
- (void).cxx_destruct;
- (void)_removeMediaPlaybackControlsView;
- (void)_addMediaPlaybackControlsView:(id)arg1;
- (void)_completeImmediateActionAnimation;
- (void)_cancelImmediateActionAnimation;
- (void)_prepareForImmediateActionAnimation;
- (id)_browserWindow;
- (void)_gestureEventWasNotHandledByWebCore:(id)arg1;
- (id)_immediateActionAnimationControllerForHitTestResult:(struct OpaqueWKHitTestResult *)arg1 withType:(unsigned int)arg2 userData:(void *)arg3;
- (void)_dismissContentRelativeChildWindows;
@property(readonly, nonatomic) BrowserViewController *presentingBrowserViewController;
- (void)cancelOperation:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewWillEnterFullscreen:(id)arg1;
@property(readonly, nonatomic) _WKRemoteObjectRegistry *remoteObjectRegistry;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (void)pageDidClose;
@property(readonly, nonatomic) BOOL isClosed;
- (id)initWithWebViewController:(id)arg1 configurationRef:(struct OpaqueWKPageConfiguration *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

