//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHCollectionViewLayoutProxyDelegate.h"
#import "NSDraggingDestination.h"
#import "NSDraggingSource.h"

@class KHCollectionViewLayoutProxy, NSString, UXCollectionView, UXCollectionViewLayout;

@interface KHCollectionViewRearrangingCoordinator : NSObject <KHCollectionViewLayoutProxyDelegate, NSDraggingSource, NSDraggingDestination>
{
    struct {
        unsigned int delegateImplementsTargetIndexPathForMoveFromItemAtIndexPathToProposedIndexPath:1;
    } _delegateFlags;
    BOOL _isRearranging;
    BOOL _enabled;
    BOOL _shouldExchange;
    UXCollectionView *_collectionView;
    struct _NSRange _initialIndexRange;
    struct _NSRange _targetIndexRange;
    struct _NSRange _movedIndexRange;
    struct _NSRange _exchangedIndexRange;
}

+ (id)_indexPathsFromRange:(struct _NSRange)arg1;
@property(nonatomic) BOOL shouldExchange; // @synthesize shouldExchange=_shouldExchange;
@property(nonatomic) struct _NSRange exchangedIndexRange; // @synthesize exchangedIndexRange=_exchangedIndexRange;
@property(nonatomic) struct _NSRange movedIndexRange; // @synthesize movedIndexRange=_movedIndexRange;
@property(nonatomic) struct _NSRange targetIndexRange; // @synthesize targetIndexRange=_targetIndexRange;
@property(nonatomic) struct _NSRange initialIndexRange; // @synthesize initialIndexRange=_initialIndexRange;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL isRearranging; // @synthesize isRearranging=_isRearranging;
@property(readonly, nonatomic) __weak UXCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (BOOL)wantsPeriodicDraggingUpdates;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1 inLayoutAttributes:(id)arg2;
- (void)_autoscrollWithWindowLocation:(struct CGPoint)arg1;
- (id)_layoutAttributesForItemAtPoint:(struct CGPoint)arg1;
- (void)_moveItemsInRange:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (void)_finshRearranging:(BOOL)arg1;
- (void)_updateRearrangingStateForLocation:(id)arg1;
- (void)_beginRearrangingIndexesInRange:(struct _NSRange)arg1;
- (id)delegate;
@property(readonly, nonatomic) KHCollectionViewLayoutProxy *layoutProxy;
@property(readonly, nonatomic) __weak UXCollectionViewLayout *collectionViewLayout;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
