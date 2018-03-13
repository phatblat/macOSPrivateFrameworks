//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/RolloverActionButtonTableCellView.h>

__attribute__((visibility("hidden")))
@interface SidebarTableCellView : RolloverActionButtonTableCellView
{
    BOOL _offscreenCellForMeasurements;
}

+ (double)fixedHeightOfRow;
+ (BOOL)hasVariableHeight;
@property(nonatomic, getter=isOffscreenCellForMeasurements) BOOL offscreenCellForMeasurements; // @synthesize offscreenCellForMeasurements=_offscreenCellForMeasurements;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (double)_actionButtonYOffsetWhenVerticallyCentered;
- (double)_actionButtonHorizontalMargin;
- (double)_actionButtonTopMargin;
- (BOOL)isFlipped;
@property(readonly, nonatomic) double calculatedHeightOfRow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <SidebarTableCellViewDelegate> delegate; // @dynamic delegate;

@end

