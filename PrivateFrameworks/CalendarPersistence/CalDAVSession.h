//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalSession.h>

@class CalDAVAccountInfoProvider, CalDAVOperationQueue, NSDate, NSMutableDictionary, NSString;

@interface CalDAVSession : CalSession
{
    NSMutableDictionary *_calendarSources;
    CalDAVOperationQueue *_queue;
    NSString *_pushToken;
    BOOL _isDelegate;
    NSDate *_fullRefreshDate;
    CalDAVAccountInfoProvider *_accountInfoProvider;
}

@property(retain) NSDate *fullRefreshDate; // @synthesize fullRefreshDate=_fullRefreshDate;
@property BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property(retain) NSMutableDictionary *calendarSources; // @synthesize calendarSources=_calendarSources;
@property(retain) CalDAVAccountInfoProvider *accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property(retain) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (void).cxx_destruct;
- (id)description;
- (id)debugInfo;
- (void)systemWillSleep;
- (void)systemDidWake;
- (void)systemNetworkDidChange;
- (id)managedPrincipalInContext:(id)arg1;
- (BOOL)attemptAutomaticConnect;
- (BOOL)_isTransientNetworkError:(id)arg1;
- (void)deletePersistedErrorAndNotify;
- (BOOL)persistError:(id)arg1 forChangeRequestID:(id)arg2;
- (BOOL)persistErrorAndNotify;
- (BOOL)processChangeRequests:(BOOL)arg1;
- (BOOL)updatePushState:(BOOL)arg1;
- (void)removeSourceWithID:(id)arg1;
- (id)sourceWithID:(id)arg1 shouldCreateOrUpdate:(BOOL)arg2;
- (id)sourceWithID:(id)arg1;
- (BOOL)needsSync;
- (double)timeSinceLastSync;
- (void)timerFiredWithInfo:(id)arg1;
- (id)_newScheduleCriteria;
- (void)reschedule;
- (void)synchronizeDelegatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)synchronizeWithFlags:(long long)arg1 previousMigrateDelay:(long long)arg2;
- (void)synchronizeWithFlags:(long long)arg1;
- (void)synchronizeAndMigrateWithPreviousDelay:(long long)arg1;
- (BOOL)isProcessingChange:(id)arg1;
- (BOOL)_isPendingRefresh;
- (BOOL)_isRefreshing;
- (id)operationQueue;
- (void)goOffline;
- (void)goOnline;
- (void)updateAccountInfoProvider;
- (void)_setupQueueIfNecessary;
- (void)reactivate;
- (BOOL)activate;
- (void)deactivate;
- (id)initWithObjectID:(id)arg1;

@end

