//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSMetricsDatabase, NSObject<OS_dispatch_queue>, NSString;

@interface AMSMetrics : NSObject
{
    BOOL _flushTimerEnabled;
    id <AMSMetricsBagContract> _bagContract;
    NSString *_containerId;
    long long _maxBatchSize;
    AMSMetricsDatabase *_database;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _flushTimerBlock;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (void)setLastKnownBagContract:(id)arg1;
+ (id)keepAliveForContainer:(id)arg1;
+ (id)_sharedInstance;
@property(retain) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(copy) CDUnknownBlockType flushTimerBlock; // @synthesize flushTimerBlock=_flushTimerBlock;
@property(retain) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain) AMSMetricsDatabase *database; // @synthesize database=_database;
@property long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(readonly) NSString *containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;
- (id)_sharedMetricsQueue;
- (BOOL)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (void)_postEvents:(id)arg1 reportURL:(id)arg2 error:(id *)arg3;
- (void)_openDatabaseIfNeeded;
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id *)arg2;
- (void)_flushTimerStart;
- (void)_flushTimerInvalidate;
- (void)_batchEventArray:(id)arg1 batchBlock:(CDUnknownBlockType)arg2;
- (void)_batchDatabaseEventsWithBlock:(CDUnknownBlockType)arg1;
- (id)flushEvents:(id)arg1;
- (id)flush;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)dropEvents;
@property BOOL flushTimerEnabled;
@property(retain) id <AMSMetricsBagContract> bagContract;
@property(readonly) double flushInterval;
@property(readonly) long long eventCount;
- (void)dealloc;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;

@end

