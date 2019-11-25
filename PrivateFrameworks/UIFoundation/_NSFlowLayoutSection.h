//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet, _NSFlowLayoutInfo;

@interface _NSFlowLayoutSection : NSObject
{
    NSMutableArray *_items;
    NSMutableArray *_rows;
    struct NSEdgeInsets _sectionMargins;
    double _verticalInterstice;
    double _horizontalInterstice;
    struct CGRect _headerFrame;
    struct CGRect _footerFrame;
    double _headerDimension;
    double _footerDimension;
    _NSFlowLayoutInfo *_layoutInfo;
    BOOL _isValid;
    struct CGRect _frame;
    struct CGRect _validRect;
    struct CGRect _rectToKeepValid;
    struct _NSRange _validItemRange;
    NSMutableSet *_invalidatedIndexPaths;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    BOOL _fixedItemSize;
    struct CGSize _itemSize;
    double _otherMargin;
    double _beginMargin;
    double _endMargin;
    double _actualGap;
    double _lastRowBeginMargin;
    double _lastRowEndMargin;
    double _lastRowActualGap;
    BOOL _lastRowIncomplete;
    long long _itemsCount;
    long long _itemsByRowCount;
    long long _indexOfIncompleteRow;
    BOOL _isCollapsed;
    double _scrollOffset;
    BOOL _recommendedAboutShowingSectionCollapseButton;
    BOOL _lastRecommendationWasShowSectionCollapseButton;
}

@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(readonly, nonatomic) struct _NSRange validItemRange; // @synthesize validItemRange=_validItemRange;
@property(readonly, nonatomic) long long itemsByRowCount; // @synthesize itemsByRowCount=_itemsByRowCount;
@property(nonatomic) long long itemsCount; // @synthesize itemsCount=_itemsCount;
@property(readonly, nonatomic) long long indexOfIncompleteRow; // @synthesize indexOfIncompleteRow=_indexOfIncompleteRow;
@property(readonly, nonatomic) BOOL lastRowIncomplete; // @synthesize lastRowIncomplete=_lastRowIncomplete;
@property(readonly, nonatomic) double lastRowActualGap; // @synthesize lastRowActualGap=_lastRowActualGap;
@property(readonly, nonatomic) double lastRowEndMargin; // @synthesize lastRowEndMargin=_lastRowEndMargin;
@property(readonly, nonatomic) double lastRowBeginMargin; // @synthesize lastRowBeginMargin=_lastRowBeginMargin;
@property(readonly, nonatomic) double actualGap; // @synthesize actualGap=_actualGap;
@property(readonly, nonatomic) double endMargin; // @synthesize endMargin=_endMargin;
@property(readonly, nonatomic) double beginMargin; // @synthesize beginMargin=_beginMargin;
@property(readonly, nonatomic) double otherMargin; // @synthesize otherMargin=_otherMargin;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) BOOL fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) CDStruct_2f5e8405 rowAlignmentOptions; // @synthesize rowAlignmentOptions=_rowAlignmentOptions;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) __weak _NSFlowLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property(nonatomic) struct CGRect footerFrame; // @synthesize footerFrame=_footerFrame;
@property(nonatomic) struct CGRect headerFrame; // @synthesize headerFrame=_headerFrame;
@property(readonly, nonatomic) double footerDimension; // @synthesize footerDimension=_footerDimension;
@property(readonly, nonatomic) double headerDimension; // @synthesize headerDimension=_headerDimension;
@property(nonatomic) struct NSEdgeInsets sectionMargins; // @synthesize sectionMargins=_sectionMargins;
@property(nonatomic) double horizontalInterstice; // @synthesize horizontalInterstice=_horizontalInterstice;
@property(nonatomic) double verticalInterstice; // @synthesize verticalInterstice=_verticalInterstice;
@property(readonly, nonatomic) NSMutableArray *rows; // @synthesize rows=_rows;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)transformItemIfInCollapsedRowEndZone:(id)arg1;
@property(nonatomic, getter=isCollapsed) BOOL collapsed;
- (unsigned long long)rowIndexForItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long rowsCount;
- (id)rowsInRect:(struct CGRect)arg1;
- (void)addInvalidatedIndexPath:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2 invalidationContext:(id)arg3;
- (id)copyFromLayoutInfo:(id)arg1;
- (id)snapshot;
- (id)addRowAtEnd:(BOOL)arg1;
- (id)addItem;
- (void)setEstimatedSize:(struct CGSize)arg1 forSection:(long long)arg2;
- (void)updateEstimatedSizeForSection:(long long)arg1;
- (void)fixupLastRowItemAlignment;
- (void)computeLayoutInRect:(struct CGRect)arg1 forSection:(long long)arg2 invalidating:(BOOL)arg3 invalidationContext:(id)arg4;
@property(readonly, nonatomic) struct CGRect effectiveFooterFrameWithSectionMarginsApplied;
@property(readonly, nonatomic) struct CGRect effectiveHeaderFrameWithSectionMarginsApplied;
- (void)setFooterDimension:(double)arg1 forSection:(long long)arg2;
- (void)setHeaderDimension:(double)arg1 forSection:(long long)arg2;
- (void)logInvalidSizesForHorizontalDirection:(BOOL)arg1 warnAboutDelegateValues:(BOOL)arg2;
- (void)logInvalidSizes;
- (long long)estimatedIndexOfItemAtPoint:(struct CGPoint)arg1;
- (void)_computeLayoutForSectionIndex:(long long)arg1 rightToLeft:(BOOL)arg2 minimumWidth:(double)arg3;
- (void)sizeChangedForItem:(id)arg1 atIndexPath:(id)arg2 inRow:(id)arg3;
- (void)invalidate;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *invalidatedIndexPaths;
- (id)init;

@end

