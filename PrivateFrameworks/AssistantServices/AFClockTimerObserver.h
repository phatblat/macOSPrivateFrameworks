//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFClockItemStorageDelegate.h"
#import "AFInvalidating.h"

@class AFClockItemStorage, AFClockTimerSnapshot, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface AFClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFClockTimerObserverDelegate> _delegate;
    AFClockTimerSnapshot *_timerSnapshot;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_handleFetchTimersForReason:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchTimersForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tearDown;
- (void)_setUp;
- (id)_timerSnapshot;
- (void)timersChanged:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)firingTimerDismissed:(id)arg1;
- (void)firingTimerChanged:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)timersRemoved:(id)arg1;
- (void)timersUpdated:(id)arg1;
- (void)timersAdded:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)invalidate;
- (void)getTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

