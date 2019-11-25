//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedObject.h>

#import "EKProtocolAlarm.h"
#import "StoresUnrecognizedICS.h"

@class CalManagedCalendar, CalManagedCalendarItem, CalManagedICSElementProperties, CalManagedLocation, NSData, NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSString, NSURL;

@interface CalManagedAlarm : CalManagedObject <EKProtocolAlarm, StoresUnrecognizedICS>
{
}

+ (id)generateSnoozeAlarmFromAlarm:(id)arg1 onDate:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)addAlarmPrefetchToCalendarItemFetch:(id)arg1;
+ (id)insertNoneAlarmInManagedObjectContext:(id)arg1;
+ (id)proximityStringFromType:(int)arg1;
+ (int)proximityTypeFromString:(id)arg1;
+ (id)recognizedICSPropertyParameterMap;
+ (id)recognizedICSProperties;
+ (id)entityName;
+ (id)iCalendarDocumentWithAlarms:(id)arg1;
- (id)enclosingSource;
- (void)setNotRelativeToTravelTime:(BOOL)arg1;
@property(readonly, nonatomic) BOOL notRelativeToTravelTime;
@property(readonly, nonatomic) BOOL isDefault;
- (void)setSoundName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *soundName;
- (void)setStructuredLocation:(id)arg1;
@property(readonly, copy, nonatomic) id <EKProtocolStructuredLocation> structuredLocation;
@property(readonly, copy, nonatomic) NSString *proximityString;
@property(readonly, nonatomic) NSString *sharedUID;
- (void)setActionString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *actionString;
@property(readonly, nonatomic) double relativeOffset;
@property(readonly, copy, nonatomic) NSDate *acknowledgedDate;
@property(readonly, copy, nonatomic) NSDate *absoluteDate;
- (id)resolveBookmarkWithError:(id *)arg1 isSecurityScoped:(char *)arg2;
- (void)setIsTimeToLeave:(BOOL)arg1;
- (BOOL)isTimeToLeave;
- (id)uniqueKeyForObject;
- (void)updateWithManagedObject:(id)arg1 omitSyncRecord:(BOOL)arg2;
- (id)humanReadableDescription;
- (id)associatedItem;
- (BOOL)shouldBeScheduled;
- (BOOL)isSimilarToAlarmWithAction:(id)arg1 sound:(id)arg2 emailAddress:(id)arg3 url:(id)arg4 absoluteTrigger:(id)arg5 relativeTrigger:(id)arg6;
- (BOOL)isSimilarToAlarm:(id)arg1;
- (BOOL)isNoneAlarm;
- (id)snoozeParent;
@property(readonly, nonatomic) BOOL isSnoozed;
- (void)makeExchangeCompatible;
- (BOOL)isExchangeCompatible;
- (BOOL)shouldSyncToExchange;
- (long long)compareAlarmOrder:(id)arg1;
- (id)occurrenceDateForTrigger:(id)arg1;
- (id)triggersBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)earliestTriggerDateBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)hasTriggerOnDate:(id)arg1;
- (BOOL)hasTriggerDateBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (BOOL)proximityCarBased;
- (void)_updateAlarmDerivedPropertiesForSave;
- (void)willSave;
- (id)contextForValidationError;
@property BOOL isDefaultAlarm; // @dynamic isDefaultAlarm;
@property(retain) NSNumber *relativeTrigger; // @dynamic relativeTrigger;
@property(retain) NSDate *absoluteTrigger; // @dynamic absoluteTrigger;
@property(retain) NSURL *url;
@property(retain) NSString *subject; // @dynamic subject;
@property(retain) NSString *emailAddress; // @dynamic emailAddress;
@property(retain) NSString *sound; // @dynamic sound;
@property(retain) NSString *message; // @dynamic message;
@property(retain) NSString *action; // @dynamic action;
- (id)defaultAlarmPropertiesHelperForKey:(id)arg1;
- (void)willRefresh:(BOOL)arg1;
- (id)keysOnlyRelevantToNetworkDetails;
- (id)_iCalendarElementWithOptions:(unsigned long long)arg1;
- (id)iCalendarElementWithOptions:(unsigned long long)arg1 inCalendar:(id)arg2;
- (void)importiCalendarComponent:(id)arg1 fromDocument:(id)arg2 inCalendar:(id)arg3;
- (void)importAlarm:(id)arg1 inItemWithTravel:(BOOL)arg2;
- (void)updateWithEntity:(id)arg1 omitSyncRecord:(BOOL)arg2;

// Remaining properties
@property(retain) NSDate *acknowledged; // @dynamic acknowledged;
@property(retain) NSData *bookmark; // @dynamic bookmark;
@property(retain) CalManagedCalendar *calendar; // @dynamic calendar;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(retain) CalManagedAlarm *defaultAlarmByReference; // @dynamic defaultAlarmByReference;
@property BOOL deleteSyncRecord; // @dynamic deleteSyncRecord;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(nonatomic) BOOL isTimeToLeaveAlarm; // @dynamic isTimeToLeaveAlarm;
@property(retain) CalManagedCalendarItem *itemCustomAlarm; // @dynamic itemCustomAlarm;
@property(retain) CalManagedCalendarItem *itemLocalDefaultAlarm; // @dynamic itemLocalDefaultAlarm;
@property(retain) CalManagedCalendarItem *itemServerDefaultAlarm; // @dynamic itemServerDefaultAlarm;
@property(retain) CalManagedLocation *location; // @dynamic location;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property BOOL notRelativeToTravel; // @dynamic notRelativeToTravel;
@property BOOL omitSyncRecord; // @dynamic omitSyncRecord;
@property int order; // @dynamic order;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(retain) NSString *proximity; // @dynamic proximity;
@property(retain) NSString *relatedTo; // @dynamic relatedTo;
@property(readonly) Class superclass;
@property(retain) NSDate *timeToLeaveDate; // @dynamic timeToLeaveDate;
@property double timeToLeaveEstimatedTravelTime; // @dynamic timeToLeaveEstimatedTravelTime;
@property(retain) NSString *timeToLeaveTrafficDensityString; // @dynamic timeToLeaveTrafficDensityString;
@property int timeToLeaveTransportType; // @dynamic timeToLeaveTransportType;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) CalManagedICSElementProperties *unrecognizedICSProperties; // @dynamic unrecognizedICSProperties;

@end

