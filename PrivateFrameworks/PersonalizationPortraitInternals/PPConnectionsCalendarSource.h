//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPConnectionsSource.h>

#import "PPConnectionsLocationSource.h"

@class NSString, PPLocalEventStore;

@interface PPConnectionsCalendarSource : PPConnectionsSource <PPConnectionsLocationSource>
{
    PPLocalEventStore *_localEventStore;
}

+ (id)locationValueFromEKEvent:(id)arg1;
+ (id)locationLabelFromEKEvent:(id)arg1;
+ (id)locationNameFromEKEvent:(id)arg1;
+ (id)identifier;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;
- (BOOL)isCalendarEventEligibleForLocationPrediction:(id)arg1;
- (id)ekEventWithExternalID:(id)arg1;
- (id)upcomingCalendarEventsOfInterestFrom:(id)arg1 lookaheadTime:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

