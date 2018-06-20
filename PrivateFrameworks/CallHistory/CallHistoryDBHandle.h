//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class CallDBManager, NSManagedObjectContext, NSString;

@interface CallHistoryDBHandle : CHLogger
{
    NSManagedObjectContext *fCallRecordContext;
    NSManagedObjectContext *fCallDBPropertiesContext;
    CallDBManager *callDBManager;
    NSString *objectId;
    id _observerCallRecordRef;
    id _observerCallDBPropRef;
    id _moveCallRecordsFromTempStoreRef;
    id _dataStoreAddedRef;
}

+ (id)createForServer;
+ (id)createForClient;
+ (id)createWithDBManager:(id)arg1;
@property(readonly, nonatomic) CallDBManager *callDBManager; // @synthesize callDBManager;
@property(readonly, nonatomic) NSString *objectId; // @synthesize objectId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)deleteWithPredicate:(id)arg1;
- (BOOL)resetAllTimers;
- (void)resetTimers;
- (BOOL)saveTimers:(CDUnknownBlockType)arg1;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (id)timerIncoming;
- (BOOL)save:(id *)arg1;
- (BOOL)handleSaveForCallRecordContext:(id)arg1 error:(id *)arg2;
- (void)updateCallDBProperties;
- (BOOL)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id *)arg2;
- (void)deleteAll;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (id)createCallRecord;
- (id)fetchAllNoLimit;
- (id)fetchAll;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(BOOL)arg3;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (void)postTimersChangedNotification;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (void)setHandleTypeIn:(id)arg1 using:(id)arg2 havingVersion:(long long)arg3;
- (void)setServiceProviderIn:(id)arg1 using:(id)arg2 havingVersion:(long long)arg3;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (void)unRegisterForNotifications;
- (void)registerForNotifications:(id)arg1;
- (id)callRecordContext;
- (id)callDBProperties;
- (id)initWithDBManager:(id)arg1;

@end

