//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "TCoalescingNodeObserverProtocol.h"
#import "TTrackingAreaOwnerProtocol.h"

@class FI_TColumnPreviewHeaderViewController, FI_TColumnPreviewInfoViewController, FI_TColumnPreviewViewController, FI_TPreviewOptions, NSStackView, NSString;

__attribute__((visibility("hidden")))
@interface FI_TColumnPreviewController : FI_TViewController <TCoalescingNodeObserverProtocol, TTrackingAreaOwnerProtocol>
{
    FI_TColumnPreviewViewController *_previewViewController;
    FI_TColumnPreviewHeaderViewController *_headerViewController;
    FI_TColumnPreviewInfoViewController *_infoViewController;
    NSStackView *_stackView;
    struct TNSRef<NSArray<FI_TBaseInfoWindowViewController *>, void> _viewControllers;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> _nodeObserver;
    struct TFENodeVector _targetInfoNodes;
    unsigned int _targetInfoNodeNotificationOptions;
    struct TNotificationCenterObserver _viewDidMoveToSuperviewObserver;
    struct TNotificationCenterObserver _viewDidMoveToWindowObserver;
    struct TNSRef<FI_TContainerLayoutManager, void> _containerLayoutManager;
    struct TKeyValueObserver _contentInsetsDidChangeObserver;
    struct TNSRef<NSArray<NSLayoutConstraint *>, void> _layoutConstraints;
    struct TNSWeakPtr<NSLayoutConstraint, void> _minHeightLayoutConstraint;
    struct TNSRef<NSTrackingArea, void> _wholeColumnTrackingArea;
    struct TNSRef<FI_TPreviewOptions, void> _previewOptions;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
@property(retain, nonatomic) FI_TPreviewOptions *previewOptions; // @dynamic previewOptions;
- (void)setShowSmallThumbnail:(_Bool)arg1;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodeMDAttributeChanged:(const struct TFENode *)arg2 attributes:(id)arg3 isDisplayAttributes:(_Bool)arg4;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 aliasesTargetChanged:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesGoingAway:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesDeleted:(const struct TCoalescedNodesAddedMap *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesChanged:(const struct TCoalescedNodesChangedMap *)arg2;
- (void)handleNodePropertyChanges:(const struct TCoalescedNodesChangedMap *)arg1;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets)arg1;
- (void)viewDidMoveToWindow;
- (void)updateMinHeightConstraintForView:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)setTargetInfoNodes:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)targetInfoNodes;
- (id)nibName;
- (void)viewLoaded;
- (void)aboutToTearDown;
- (void)initCommon;
- (id)init;
- (id)initWithContainerLayoutManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

