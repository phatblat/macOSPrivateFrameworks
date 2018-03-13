//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRSyncedRootURLCache.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache>
{
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *syncedRootURLs;
- (void)_fetchSyncedRootURLs;
- (void)_accountWillChange;
- (void)registerForSyncedLocationsChangesNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

