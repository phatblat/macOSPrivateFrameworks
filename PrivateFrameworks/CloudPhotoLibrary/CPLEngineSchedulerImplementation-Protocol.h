//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPLEngineComponent.h"
#import "CPLPlatformImplementation.h"

@class NSDate, NSError;

@protocol CPLEngineSchedulerImplementation <CPLPlatformImplementation, CPLEngineComponent>
- (void)noteSyncSessionFailedWithError:(NSError *)arg1;
- (void)noteSyncSessionSucceeded;
- (void)noteServerHasChanges;
- (void)noteClientNeedsToPull;
- (void)noteScopeNeedsToPushToTransport;
- (void)unscheduleNextSyncSession;
- (void)scheduleNextSyncSessionAtDate:(NSDate *)arg1;
- (BOOL)shouldCoalesceServerChangesNotification;
- (BOOL)shouldStartSyncSessionFromState:(unsigned long long)arg1;
@end

