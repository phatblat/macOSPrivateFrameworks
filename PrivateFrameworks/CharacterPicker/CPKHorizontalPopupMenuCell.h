//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class CPKHorizontalPopupMenuView;

__attribute__((visibility("hidden")))
@interface CPKHorizontalPopupMenuCell : NSButtonCell
{
    unsigned long long _cellState;
    CPKHorizontalPopupMenuView *_parentView;
}

@property CPKHorizontalPopupMenuView *parentView; // @synthesize parentView=_parentView;
@property unsigned long long cellState; // @synthesize cellState=_cellState;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
- (id)init;

@end
