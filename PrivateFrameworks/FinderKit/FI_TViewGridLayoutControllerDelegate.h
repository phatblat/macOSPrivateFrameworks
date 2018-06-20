//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TGridLayoutControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TViewGridLayoutControllerDelegate : NSObject <TGridLayoutControllerDelegate>
{
    struct TSpinLock _lock;
    struct TNSRef<FI_TDesktopGridLayout, void> _gridLayout;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_totalNumberOfGridSpots;
- (void)clearAllItemLocations;
- (vector_e1abc270)occupyGridSpots:(unsigned long long)arg1;
- (id)gridLayoutForRect:(const struct CGRect *)arg1;
- (struct CGPoint)anchorForIndex:(unsigned long long)arg1 offset:(const struct CGPoint *)arg2;
- (unsigned long long)totalNumberOfGridSpots;
- (struct CGPoint)invalidAnchorPoint;
@property(nonatomic) _Bool isLTRLayout; // @dynamic isLTRLayout;
- (_Bool)isLTRLayoutWhileLocked;
@property(nonatomic) _Bool layoutInRows; // @dynamic layoutInRows;
- (_Bool)layoutInRowsWhileLocked;
- (void)setAnchoredCellFrame:(struct CGRect)arg1;
- (void)setLayoutBounds:(const struct CGRect *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
