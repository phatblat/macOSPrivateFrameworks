//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SGSqlEntityStore;

@interface SGDSpotlightCommander : NSObject
{
    id _deviceStateToken;
    SGSqlEntityStore *_store;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_reimportFromBundleId:(id)arg1 protectionClasses:(id)arg2 identifiers:(id)arg3;
- (void)_executeReiportOfIdentifiers:(id)arg1;
- (id)_reimportQueryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 requestId:(unsigned long long)arg4;
- (id)_protectionClasses;
- (void)_attemptToProcessRequests;
- (BOOL)_unlocked;
- (BOOL)_locked;
- (void)_unregisterForLockStateChange;
- (void)_registerForLockStateChange;
- (void)requestReimportForHistoricalDataRequest:(id)arg1;
- (void)requestReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)init;
- (id)queryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contentTypes:(id)arg4;
- (id)_getMailItemFromMailServiceForPath:(id)arg1;
- (void)metadata_reimportFromBundleId:(id)arg1 protectionClasses:(id)arg2 identifiers:(id)arg3;
- (id)metadata_reimportQueryForPersonHandle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 requestId:(unsigned long long)arg4;

@end
