//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CalReminderMigrationFailure, NSArray, REMStore;

@protocol CalReminderKitDatabaseMigrationContext <NSObject>
@property(readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property(readonly, nonatomic) BOOL shouldPerformMigration;
@property(readonly, nonatomic) REMStore *reminderStore;
- (BOOL)ensureAccountsExist:(NSArray *)arg1 error:(id *)arg2;
- (void)recordMigrationFailure:(CalReminderMigrationFailure *)arg1;
- (void)didEndMigrationWithSuccess:(BOOL)arg1;
- (void)willBeginMigration;
@end
