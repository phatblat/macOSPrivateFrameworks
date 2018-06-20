//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCActivityTarget.h"
#import "MFActivityProgressUpdater.h"

@class MCActivityAggregate, MCActivityMonitor, NSString;

@interface MFPersistenceVersionUpgrader : NSObject <MCActivityTarget, MFActivityProgressUpdater>
{
    id <MFPersistenceVersionUpgraderDelegate> _delegate;
    MCActivityMonitor *_monitor;
    MCActivityAggregate *_activity;
}

+ (BOOL)upgradeSmartMailboxesInMigrationDirectory:(long long)arg1 withUpgrader:(CDUnknownBlockType)arg2;
+ (BOOL)upgradeSyncedRulesInMigrationDirectory:(long long)arg1 withUpgrader:(CDUnknownBlockType)arg2;
+ (BOOL)upgradeUnsyncedRulesInMigrationDirectory:(long long)arg1 withUpgrader:(CDUnknownBlockType)arg2;
+ (BOOL)renameMigrationDirectoryToFinalDirectory:(long long)arg1;
+ (BOOL)renameVersionDirectory:(long long)arg1 toMigrationDirectory:(long long)arg2;
+ (id)log;
@property(retain, nonatomic) MCActivityAggregate *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) __weak id <MFPersistenceVersionUpgraderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetProgressItemsWithTotal:(unsigned long long)arg1 andStatusMessage:(id)arg2;
- (void)incrementProgressIndicator;
- (void)setProgressItemTotal:(unsigned long long)arg1;
- (void)run;
@property(readonly) BOOL requiresVersionMigration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

