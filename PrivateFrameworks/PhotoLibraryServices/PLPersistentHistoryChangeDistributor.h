//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLCoreDataChangeMerger;

@interface PLPersistentHistoryChangeDistributor : NSObject
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSPersistentHistoryToken *_lastToken;
    int _notifyToken;
}

- (void).cxx_destruct;
- (id)localEventFromTransactions:(id)arg1;
- (void)distributeTransactions:(id)arg1;
- (void)forceUserInterfaceReload;
- (id)makeManagedObjectContext;
- (id)fetchTransactionsSinceLastToken;
- (void)distributeNewTransactionsSinceLastToken;
- (void)_inq_stopObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;
- (void)_inq_startObservingRemoteNotifications;
- (void)startObservingRemoteNotifications;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2;

@end

