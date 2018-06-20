//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSMutableArray, NUIMultilineSizingHelper;

@interface NUIContainerView : NSView
{
    id <NUIContainerViewDelegate> _delegate;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    NUIMultilineSizingHelper *_multilineSizeHelper;
    struct {
        unsigned int hiddenArrangedSubviewCount:16;
        unsigned int inBatch:1;
        unsigned int delayState:2;
        unsigned int inLayoutPass:2;
        unsigned int inMeasurementPass:2;
        unsigned int mustRestart:1;
        unsigned int delegateDidInvalidateIntrinsicContentSize:1;
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview:1;
        unsigned int delegateLayoutFrameForArrangedSubview:1;
        unsigned int delegateWillMeasureFitting:1;
        unsigned int delegateShouldRestart:1;
        unsigned int delegateDidLayout:1;
    } _containerFlags;
    BOOL _baselineRelativeArrangement;
    BOOL _layoutMarginsRelativeArrangement;
    struct NSEdgeInsets _layoutMargins;
}

+ (void)initialize;
+ (BOOL)isDebugBoundingBoxesEnabled;
+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) struct NSEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement; // @synthesize layoutMarginsRelativeArrangement=_layoutMarginsRelativeArrangement;
@property(nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // @synthesize baselineRelativeArrangement=_baselineRelativeArrangement;
- (id)description;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidateIntrinsicContentSize;
- (void)layout;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_addAsSubviewIfNeeded:(id)arg1;
- (void)removeArrangedSubview:(id)arg1;
- (void)_endObservingSubviewVisibility:(id)arg1;
- (void)_beginObservingSubviewVisibility:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *visibleArrangedSubviews;
@property(copy, nonatomic) NSArray *arrangedSubviews;
@property(nonatomic) __weak id <NUIContainerViewDelegate> delegate;
- (BOOL)_verifyInternalConsistencyWarningOnly:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)wantsLayer;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (id)arrangedDescription;
- (BOOL)mustRestartMeasurement;
- (BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (BOOL)canCancelMeasurementForCompression;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)assertNotInLayoutPass:(BOOL)arg1;
- (BOOL)isInLayoutPass;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (BOOL)invalidateIntrinsicContentSizeRequiringArrangedSubviewRemeasurement:(BOOL)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct NSEdgeInsets)effectiveLayoutMargins;
- (BOOL)isInBatchUpdate;

@end

