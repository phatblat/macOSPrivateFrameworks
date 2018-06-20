//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLArchiveJobManager.h"

@class NSMutableArray, NSString;

@interface PLArchiveManager : NSObject <PLArchiveJobManager>
{
    BOOL _enabled;
    BOOL _interrupted;
    double _interval;
    double _mustRunInterval;
    double _mainDBDuration;
    double _allDBDuration;
    NSMutableArray *_archiveJobs;
    NSMutableArray *_notificationBlocks;
}

+ (id)archiveEntriesWithComparisons:(id)arg1;
+ (id)archiveEntriesFinished;
+ (id)archiveEntriesUnfinished;
+ (id)allArchivePaths;
+ (id)lastArchivePath;
+ (void)systemTimeChangedByOffset:(double)arg1;
+ (id)storageQueue;
+ (id)workQueue;
+ (id)sharedInstance;
@property(retain) NSMutableArray *notificationBlocks; // @synthesize notificationBlocks=_notificationBlocks;
@property(nonatomic) BOOL interrupted; // @synthesize interrupted=_interrupted;
@property(retain) NSMutableArray *archiveJobs; // @synthesize archiveJobs=_archiveJobs;
@property double allDBDuration; // @synthesize allDBDuration=_allDBDuration;
@property double mainDBDuration; // @synthesize mainDBDuration=_mainDBDuration;
@property double mustRunInterval; // @synthesize mustRunInterval=_mustRunInterval;
@property double interval; // @synthesize interval=_interval;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)registerForArchivingNotificationUsingBlock:(CDUnknownBlockType)arg1;
- (void)migrate;
- (void)migrateArchive:(id)arg1;
- (void)recover;
- (void)cleanup;
- (void)runArchiveJobs;
- (void)scheduleArchiveJobs;
- (void)handleFailure:(long long)arg1 forArchiveEntry:(id)arg2;
- (BOOL)isInterrupted;
- (void)deprecateTables;
- (void)runActivityWithLastCompletedDate:(id)arg1;
- (void)disable;
- (void)enable;
- (void)runInitialActivity;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
