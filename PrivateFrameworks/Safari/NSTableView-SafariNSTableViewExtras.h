//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableView.h"

@interface NSTableView (SafariNSTableViewExtras)
- (struct CGPoint)_safari_localPointFromEvent:(id)arg1;
- (double)safari_intrinsicHeightConstrainedToHeight:(double)arg1;
- (double)safari_intrinsicHeight;
- (double)safari_heightOfRowAtIndex:(unsigned long long)arg1;
- (long long)safari_rowBeneathCursor;
- (long long)safari_columnFromEvent:(id)arg1;
- (long long)safari_rowFromEvent:(id)arg1;
- (BOOL)handleScrollKeyEvent:(id)arg1;
- (BOOL)safari_isScrolling;
- (void)safari_cancelAnimatedScroll;
- (void)safari_animateScrollToEndWithVelocity:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)safari_animateScrollToBeginningWithVelocity:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)safari_animateScrollToPoint:(struct CGPoint)arg1 withVelocity:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrollPageDown;
- (void)scrollPageUp;
- (void)scrollToEnd;
- (void)scrollToBeginning;
- (void)safari_selectAndScrollRowToVisible:(unsigned long long)arg1;
- (void)selectPreviousRow;
- (void)collapseSelectionToSingleRow;
- (id)columnWidthsMaintainingProportions;
- (void)columnsChanged;
- (BOOL)resizesColumnsProportionally;
- (float)constrainProposedWidth:(float)arg1 forColumn:(id)arg2;
- (void)setColumnMaxWidths:(id)arg1;
- (void)setColumnMinWidths:(id)arg1;
- (id)columnMaxWidths;
- (id)columnMinWidths;
- (id)columnWidths;
- (void)setColumnMeasurements:(id)arg1 forType:(int)arg2;
- (id)columnMeasurementsForType:(int)arg1;
@end

