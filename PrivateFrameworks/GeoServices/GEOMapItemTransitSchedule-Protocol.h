//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSOrderedSet, NSSet, NSString;

@protocol GEOMapItemTransitSchedule <NSObject>
@property(readonly, nonatomic) NSDate *lastFullScheduleValidDate;
@property(readonly, nonatomic) NSArray *departureSequences;
- (NSOrderedSet *)headSignsForLine:(id <GEOTransitLine>)arg1;
- (NSArray *)allSequencesForSystem:(id <GEOTransitSystem>)arg1 direction:(NSString *)arg2;
- (NSArray *)inactiveLinesForSystem:(id <GEOTransitSystem>)arg1 relativeToDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg2 excludingIncidentEntities:(NSSet *)arg3;
- (NSDate *)serviceResumesDateForLine:(id <GEOTransitLine>)arg1 excludingIncidentEntities:(NSSet *)arg2 afterDate:(NSDate *)arg3 blocked:(out char *)arg4;
- (NSArray *)sequencesForSystem:(id <GEOTransitSystem>)arg1 excludingIncidentEntities:(NSSet *)arg2 direction:(NSString *)arg3 validForDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg4;
- (NSArray *)directionsForSystem:(id <GEOTransitSystem>)arg1 excludingIncidentEntities:(NSSet *)arg2 validForDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg3 hasSequencesWithNoDirection:(out char *)arg4;
- (NSArray *)departureSequencesForSystem:(id <GEOTransitSystem>)arg1 excludingIncidentEntities:(NSSet *)arg2 direction:(NSString *)arg3 validForDateFromBlock:(NSDate * (^)(id <GEOTransitDepartureSequence>))arg4;
- (unsigned long long)numAdditionalDeparturesForSequence:(id <GEOTransitDepartureSequence>)arg1;
@end

