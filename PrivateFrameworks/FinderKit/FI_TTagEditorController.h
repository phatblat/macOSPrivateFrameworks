//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

#import "TCoalescingNodeObserverProtocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FI_TTagEditorController : FI_TViewController <TCoalescingNodeObserverProtocol>
{
    struct TFENodeVector _nodes;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> _nodeObserver;
    struct TNSRef<NSArray *, void> _originalTagAttributes;
    _Bool _canceled;
    struct TNotificationCenterObserver _tagRegistryChangedObserver;
    struct TNotificationCenterObserver _didEndEditingObserver;
    struct TNotificationCenterObserver _forceTokenFieldToCommitObserver;
}

@property(getter=isCanceled) _Bool canceled; // @synthesize canceled=_canceled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyTagsToNodes;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesChanged:(const vector_614ab7ad *)arg2 inObservedNode:(const struct TFENode *)arg3;
@property(copy, nonatomic) NSArray *tags; // @dynamic tags;
- (void)setNodes:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)nodes;
- (id)taggingTokenFieldNoLoad;
- (id)taggingTokenField;
- (void)dealloc;
- (void)viewLoaded;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

