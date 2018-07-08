//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyValueController.h>

#import "FIAliasResolution.h"
#import "QLPreviewViewDelegate.h"
#import "TMarkTornDown.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TPropertyQLPreviewViewController : FI_IPropertyValueController <QLPreviewViewDelegate, FIAliasResolution, TMarkTornDown>
{
    TNSRef_87bff19e _multiPreviewView;
    struct shared_ptr<TQLPreviewViewQTEjectHelper> _ejectHelper;
    struct TNSRef<FI_TQLPreviewViewZoomController, void> _zoomController;
    struct TNSRef<FI_TQLMultiPreviewViewCommonDelegate, void> _previewViewCommonDelegate;
    struct shared_ptr<TDisableScreenUpdatesInWindow> _previewDrawingSynchronizer;
    struct TNotificationCenterObserver _timeMachineWillStartObserver;
    struct TKeyValueBinder _previewItemBinder;
    _Bool _isTornDown;
}

@property(readonly, getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)alias:(const struct TFENode *)arg1 resolvedAs:(const struct TFENode *)arg2 temporaryNode:(const struct TFENode *)arg3;
- (id)previewView:(id)arg1 draggingItemsForPreviewItem:(id)arg2;
- (id)previewView:(id)arg1 pasteboardWriterForPreviewItem:(id)arg2;
- (BOOL)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3;
- (unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3;
- (void)previewView:(id)arg1 doubleClickedOnPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 didShowPreviewItem:(id)arg2;
- (void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2;
- (id)previewView:(id)arg1 customViewForPreviewItem:(id)arg2;
- (void)cancelPreviewDrawingSynchronizer;
- (void)enablePreviewDrawingSynchronizer;
- (_Bool)isResizable;
- (void)refresh;
- (void)stopPlaying;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)flush;
- (void)handleNodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)handleBulkNodesDeleted:(const map_27534541 *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (void)handleBulkNodesChanged:(const map_253f12d2 *)arg1 observedNodes:(const struct TFENodeVector *)arg2;
- (void)setValue:(id)arg1;
- (void)setView:(id)arg1;
- (struct TFENodeVector)previewNodes;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)dealloc;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

