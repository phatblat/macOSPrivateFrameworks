//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFClockItemStorageDelegate.h"
#import "AFInvalidating.h"

@class AFClockAlarmSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <AFClockAlarmObserverDelegate> _delegate;
    AFClockAlarmSnapshot *_alarmSnapshot;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_handleFetchAlarmsForReason:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchAlarmsForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_tearDown;
- (void)_setUp;
- (id)_alarmSnapshot;
- (void)alarmsChanged:(id)arg1;
- (void)stateReset:(id)arg1;
- (void)firingAlarmDismissed:(id)arg1;
- (void)firingAlarmChanged:(id)arg1;
- (void)alarmFired:(id)arg1;
- (void)alarmsRemoved:(id)arg1;
- (void)alarmsUpdated:(id)arg1;
- (void)alarmsAdded:(id)arg1;
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;
- (void)invalidate;
- (void)getAlarmSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
