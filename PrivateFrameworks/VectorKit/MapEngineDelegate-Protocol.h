//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol MapEngineDelegate <NSObject>
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg1;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg1;
- (void)labelManagerDidLayout;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)willBecomeFullyDrawn;
- (void)didFinishLoadingDataWithError:(NSError *)arg1;
- (void)didFinishLoadingData;
- (void)didStartLoadingData;
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (_Bool)wantsTimerTick;
- (void)didPresent;
- (void)willLayoutWithTimestamp:(double)arg1;
@end

