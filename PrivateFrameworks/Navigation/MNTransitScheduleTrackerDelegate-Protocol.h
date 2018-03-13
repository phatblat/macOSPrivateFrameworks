//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOAlightNotificationFeedback, MNTransitScheduleTracker;

@protocol MNTransitScheduleTrackerDelegate <NSObject>
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didUpdateFeedback:(GEOAlightNotificationFeedback *)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;

@optional
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 didArriveAtStepIndex:(unsigned long long)arg2;
- (void)transitScheduleTracker:(MNTransitScheduleTracker *)arg1 willArriveAtStepIndex:(unsigned long long)arg2 inTimeInterval:(double)arg3;
@end

