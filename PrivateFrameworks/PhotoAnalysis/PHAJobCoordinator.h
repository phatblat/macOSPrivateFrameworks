//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAActivityGovernorDelegate.h"
#import "PHADirtyChangeCoalescerDelegate.h"
#import "PHAGraphManagerClientMessagesReceiver.h"
#import "PHAJobCoalescerDelegate.h"
#import "PHAJobConstraintsObserverDelegate.h"
#import "PHAWorkerJobDelegate.h"

@class NSDictionary, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>, NSString, PHAActivityGovernor, PHADirtyChangeCoalescer, PHAJobCoalescer, PHAJobConstraints, PHAJobConstraintsObserver, PHAJobGenerator, PHAManager, PHAWorkerHealthMonitor, PHAWorkerJob, PHAWorkerWarmer;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAGraphManagerClientMessagesReceiver>
{
    // Error parsing type: Ai, name: _pendingAsyncTasksCount
    // Error parsing type: AQ, name: _processingQOS
    BOOL _graphUpdateNeeded;
    NSDictionary *_cachedWorkersByType;
    struct os_unfair_lock_s _workersByTypeLock;
    BOOL _newConstraintsPending;
    BOOL _shouldIgnoreConstraintChanges;
    PHAJobConstraints *_currentConstraints;
    PHAWorkerWarmer *_warmer;
    PHAJobCoalescer *_jobCoalescer;
    PHADirtyChangeCoalescer *_dirtyCoalescer;
    PHAJobConstraintsObserver *_constraintsObserver;
    double _maxIntervalSinceLastJobReport;
    id <PHAJobCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_maintenanceTimer;
    PHAWorkerHealthMonitor *_healthMonitor;
    PHAActivityGovernor *_activityGovernor;
    PHAJobGenerator *_jobGenerator;
    PHAManager *_manager;
    PHAWorkerJob *_currentForegroundJob;
    NSMutableArray *_waitingForegroundJobs;
    PHAWorkerJob *_currentBackgroundJob;
    NSObject<OS_os_transaction> *_runningJobTransaction;
    NSMutableSet *_workerTypesServicedForUserFG;
    NSObject<OS_os_transaction> *_foregroundTransaction;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *foregroundTransaction; // @synthesize foregroundTransaction=_foregroundTransaction;
@property(retain, nonatomic) NSMutableSet *workerTypesServicedForUserFG; // @synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG;
@property(retain, nonatomic) NSObject<OS_os_transaction> *runningJobTransaction; // @synthesize runningJobTransaction=_runningJobTransaction;
@property(retain, nonatomic) PHAWorkerJob *currentBackgroundJob; // @synthesize currentBackgroundJob=_currentBackgroundJob;
@property(readonly, nonatomic) NSMutableArray *waitingForegroundJobs; // @synthesize waitingForegroundJobs=_waitingForegroundJobs;
@property(retain, nonatomic) PHAWorkerJob *currentForegroundJob; // @synthesize currentForegroundJob=_currentForegroundJob;
@property(nonatomic) __weak PHAManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) PHAJobGenerator *jobGenerator; // @synthesize jobGenerator=_jobGenerator;
@property(readonly, nonatomic) PHAActivityGovernor *activityGovernor; // @synthesize activityGovernor=_activityGovernor;
@property(readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // @synthesize healthMonitor=_healthMonitor;
@property(nonatomic) BOOL shouldIgnoreConstraintChanges; // @synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges;
@property(nonatomic) BOOL newConstraintsPending; // @synthesize newConstraintsPending=_newConstraintsPending;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *maintenanceTimer; // @synthesize maintenanceTimer=_maintenanceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <PHAJobCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maxIntervalSinceLastJobReport; // @synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport;
@property(readonly, nonatomic) PHAJobConstraintsObserver *constraintsObserver; // @synthesize constraintsObserver=_constraintsObserver;
@property(readonly, nonatomic) PHADirtyChangeCoalescer *dirtyCoalescer; // @synthesize dirtyCoalescer=_dirtyCoalescer;
@property(readonly, nonatomic) PHAJobCoalescer *jobCoalescer; // @synthesize jobCoalescer=_jobCoalescer;
@property(readonly) BOOL graphUpdateNeeded; // @synthesize graphUpdateNeeded=_graphUpdateNeeded;
@property(readonly, nonatomic) PHAWorkerWarmer *warmer; // @synthesize warmer=_warmer;
- (void).cxx_destruct;
- (id)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)operationDidFinish:(id)arg1;
- (void)handleOperation:(id)arg1;
- (id)photoLibrary;
@property(readonly, nonatomic, getter=isQuiescent) BOOL quiescent;
- (BOOL)_inq_isQuiescent;
- (void)enforceTimeouts;
- (void)enqueueForegroundJob:(id)arg1;
@property(nonatomic) BOOL activityGovernorOverride; // @dynamic activityGovernorOverride;
- (void)didFinishJob:(id)arg1;
- (void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2;
- (void)coalescer:(id)arg1 didCoalesce:(id)arg2;
- (void)governorDidRevokeForegroundAccess:(id)arg1;
- (void)processJobs;
- (void)governorDidGrantForegroundAccess:(id)arg1;
- (void)governorDidRevokeBackgroundAccess:(id)arg1;
- (void)governorDidGrantBackgroundAccess:(id)arg1;
- (void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(copy) PHAJobConstraints *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
- (void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1;
- (void)graphManagerDidUnloadGraph:(id)arg1;
- (void)graphManagerWillLoadGraph:(id)arg1;
- (void)_inq_stopJobsAfterConstraintOrActivityChange;
- (void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1;
- (void)_inq_handleNoMoreJobsExpected;
- (void)_inq_handleJobFinished:(id)arg1;
- (void)_inq_launchJob:(id)arg1;
- (void)_scheduleNextJob;
- (id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2;
- (void)_inq_enqueueForegroundJob:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_cleanupStuckAnalysisState;
- (void)_installMaintenanceTimer;
- (id)_workerForJob:(id)arg1;
- (id)workersByType;
- (void)addWorker:(id)arg1;
- (id)_defaultWorkersByType;
- (void)_inq_enforceTimeoutForJob:(id)arg1;
- (void)_inq_timeoutJob:(id)arg1;
- (id)_inq_nextForegroundJobCanRunAutomatic:(BOOL)arg1 canRunUserFG:(BOOL)arg2 canRunImmediate:(BOOL)arg3;
- (id)_inq_runningJobs;
- (void)_dispatchTransactionAsyncWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (id)statusAsDictionary;
- (void)dealloc;
- (void)shutdown;
- (id)initWithManager:(id)arg1;
- (id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

