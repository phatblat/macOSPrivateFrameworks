//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;

@interface PLBackgroundJobWorkerCoordinator : NSObject
{
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
    struct os_unfair_lock_s _lock;
    id <PLBackgroundJobWorkerCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <PLBackgroundJobWorkerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleAllWorkersCompleted;
- (void)_processNextWorker;
- (void)stopAllBackgorundJobs;
- (void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2;
- (BOOL)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2;
- (id)_workersForBundle:(id)arg1;
- (id)initWithWorkerClassesAsStrings:(id)arg1;
- (id)init;

@end
