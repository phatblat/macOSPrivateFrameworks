//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMUserDefaults.h>

@class NSData, NSDate, NSDateComponents, NSNumber, NSString, REMObjectID;

@interface REMDaemonUserDefaults : REMUserDefaults
{
}

+ (id)storageNumberForTodayNotificationTime:(id)arg1;
+ (id)todayNotificationFireTimeFromStorageNumber:(id)arg1;
@property(nonatomic) BOOL disableAlarmEngineDataSourcePrefetching;
- (id)streamTodayNotificationFireTime:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSDateComponents *todayNotificationFireTime;
@property(nonatomic) BOOL forceShowWelcomeScreen;
@property(nonatomic) BOOL enableWelcomeScreen;
- (id)observeShowRemindersAsOverdueWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL showRemindersAsOverdue;
@property(nonatomic) BOOL simulateMAIDAccount;
@property(copy, nonatomic) NSData *userInteractionsData;
@property(copy, nonatomic) NSDate *lastSyncPoll;
@property(copy, nonatomic) NSDate *lastPresentAlarmDate;
@property(copy, nonatomic) NSDate *nextScheduledAlarmDate;
@property(copy, nonatomic) NSNumber *spotlightIndexVersion;
@property(retain, nonatomic) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
- (id)observePreferredDefaultListIDWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) REMObjectID *preferredDefaultListID;
@property(nonatomic) BOOL cloudKitMigrationDisableCleanUp;
@property(retain, nonatomic) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property(retain, nonatomic) NSNumber *cloudKitMigrationSimulatedError;
@property(retain, nonatomic) NSNumber *cloudKitMigrationObserverPollingInterval;
@property(retain, nonatomic) NSNumber *cloudKitMigrationDelayAfterError;
@property(retain, nonatomic) NSNumber *cloudKitMigrationMaxNumFailures;
@property(retain, nonatomic) NSNumber *cloudKitMigrationMaxNumInvocations;
@property(copy, nonatomic) NSString *lastDatabaseMigrationSystemBuildVersion;
@property(nonatomic) BOOL databaseMigrationTimedOut;
@property(nonatomic) BOOL isDatabaseMigrated;
@property(nonatomic) BOOL databaseMigrationTestModeEnabled;
@property(readonly, nonatomic) BOOL siriShouldRouteIntentsToNewRemindersApp;
@property(readonly, nonatomic) BOOL dataaccessDaemonStopSyncingReminders;
@property(readonly, nonatomic) BOOL newAppShouldTakeoverEKReminderNotifications;

@end
