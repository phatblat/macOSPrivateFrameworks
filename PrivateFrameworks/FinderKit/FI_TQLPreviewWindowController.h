//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIAliasResolution.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"
#import "TCoalescingNodeObserverProtocol.h"

@class NSObject<TQLPreviewWindowControllerProtocol>, NSString;

__attribute__((visibility("hidden")))
@interface FI_TQLPreviewWindowController : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate, FIAliasResolution, TCoalescingNodeObserverProtocol>
{
    struct TFENodeVector _nodes;
    struct TNSWeakPtr<NSObject<TQLPreviewWindowControllerProtocol>, void> _weakActiveViewController;
    unsigned int _avcRespondsToFlags;
    struct TNSRef<QLPreviewPanel, void> _previewPanel;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> _nodeObserver;
    struct shared_ptr<TQLPreviewWindowQTEjectHelper> _ejectHelper;
    _Bool _canZoom;
    _Bool _positionNearPreviewItem;
    struct TFENode _overrideNode;
    struct TNotificationCenterObserver _dateTimeFormattersChangedObserver;
    struct TNotificationCenterObserver _previewPanelWillClosedObserver;
    TNSWeakPtr_a131d41e _tearDownToken;
}

+ (id)quickLookMenuItemTitleForNodes:(const struct TFENodeVector *)arg1 actualCount:(unsigned long long)arg2 fullScreen:(_Bool)arg3;
+ (_Bool)quickLookShouldOpenFullscreenWithEvent:(id)arg1;
+ (_Bool)isActiveViewController:(id)arg1;
+ (_Bool)panelIsShowing;
+ (_Bool)panelExists;
+ (id)controller;
@property(nonatomic) struct TFENode overrideNode; // @synthesize overrideNode=_overrideNode;
@property(nonatomic) _Bool positionNearPreviewItem; // @synthesize positionNearPreviewItem=_positionNearPreviewItem;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)previewPanelWillClose:(id)arg1;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 sharedPreviewViewForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (BOOL)previewPanel:(id)arg1 shouldShowShareButtonForItem:(id)arg2;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (void)alias:(const struct TFENode *)arg1 resolvedAs:(const struct TFENode *)arg2 temporaryNode:(const struct TFENode *)arg3;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)updateDisplayedDates;
- (void)refreshCurrentPreviewNode;
- (void)reloadData;
- (void)updatePreviewPanel;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesGoingAway:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesDeleted:(const struct TFENodeVector *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesChanged:(const vector_614ab7ad *)arg2 inObservedNode:(const struct TFENode *)arg3;
- (void)removeNodes:(const struct TFENodeVector *)arg1;
- (void)previewAtIndex:(long long)arg1;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)nodes;
- (void)setCanZoom:(_Bool)arg1;
@property(nonatomic) __weak NSObject<TQLPreviewWindowControllerProtocol> *activeViewController; // @dynamic activeViewController;
- (void)hide;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (void)showFullScreen:(_Bool)arg1;
- (void)updatePanelConfigurationForBackupBrowser:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

