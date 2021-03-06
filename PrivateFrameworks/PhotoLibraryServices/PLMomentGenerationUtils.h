//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLMomentGenerationUtils : NSObject
{
}

+ (BOOL)isNearFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (BOOL)isAtFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (id)frequentLocationsOverlappingStartDate:(id)arg1 endDate:(id)arg2 frequentLocations:(id)arg3;
+ (id)sortedOverlappingFrequentLocations:(id)arg1;
+ (BOOL)isTopFrequentLocationForMoment:(id)arg1 frequentLocations:(id)arg2;
+ (unsigned short)locationTypeForLocation:(id)arg1 usingLocationsOfInterest:(id)arg2 routineIsAvailable:(BOOL)arg3;
+ (unsigned short)processedLocationTypeForMoment:(id)arg1 locationsOfInterest:(id)arg2 frequentLocations:(id)arg3 routineIsAvailable:(BOOL)arg4;
+ (void)processLocationIfNecessaryInMoment:(id)arg1 usingManager:(id)arg2 frequentLocations:(id)arg3 frequentLocationsDidChange:(BOOL)arg4;

@end

