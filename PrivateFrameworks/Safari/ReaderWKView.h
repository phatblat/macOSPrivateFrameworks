//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/SearchableWKView.h>

#import "ReaderControllerMessageReceiver.h"

@class NSMutableDictionary, NSString, ReaderViewController, _WKRemoteObjectInterface;

__attribute__((visibility("hidden")))
@interface ReaderWKView : SearchableWKView <ReaderControllerMessageReceiver>
{
    id <ReaderBundlePageMessageReceiver> _readerBundlePageMessageReceiverProxy;
    _WKRemoteObjectInterface *_readerControllerMessageReceiverInterface;
    unsigned long long _nextSnapshotRequestIdentifier;
    NSMutableDictionary *_snapshotRequestCompletionHandlers;
}

- (void).cxx_destruct;
- (void)createVisibleContentsSnapshotWithMaximumSize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didCreateSnapshot:(id)arg1 forRequestIdentifier:(unsigned long long)arg2;
- (void)didGetPrintingFrame:(id)arg1;
- (void)articleScrolled:(id)arg1;
- (void)contentIsReadyForDisplayWithScrollOffset:(double)arg1 languageTag:(id)arg2;
- (void)didChangeNextPageLoadingState;
- (void)effectiveAppearanceDidChange;
@property(readonly, nonatomic) id <ReaderBundlePageMessageReceiver> readerBundlePageMessageReceiver;
- (id)presentingBrowserViewController;
- (id)tabContentView;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (BOOL)handleScrollEventAsSwipeGesture:(id)arg1;
@property(readonly, nonatomic) ReaderViewController *readerViewController;
- (struct ReaderController *)_readerController;
- (void)dealloc;
- (void)invalidate;
- (id)initWithReaderViewController:(id)arg1 configurationRef:(struct OpaqueWKPageConfiguration *)arg2;
- (id)initWithWebViewController:(id)arg1 configurationRef:(struct OpaqueWKPageConfiguration *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

