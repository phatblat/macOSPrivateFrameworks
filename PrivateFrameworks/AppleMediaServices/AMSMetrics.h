//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSMetricsDatabase, AMSURLSession, NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface AMSMetrics : NSObject
{
    BOOL _flushCancelled;
    BOOL _flushOnForeground;
    id <AMSMetricsBagContract> _bagContract;
    NSString *_containerId;
    long long _maxBatchSize;
    long long _maxRequestCount;
    AMSMetricsDatabase *_database;
    NSMutableSet *_chainedFlushPromises;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _flushTimerBlock;
    NSDictionary *_lastMetricsDictionary;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableSet *_requestPromises;
    AMSURLSession *_URLSession;
}

+ (id)_sharedTimerQueue;
+ (double)timeIntervalFromServerTime:(id)arg1;
+ (id)serverTimeFromTimeInterval:(double)arg1;
+ (id)serverTimeFromDate:(id)arg1;
+ (void)setFlushTimerEnabled:(BOOL)arg1;
+ (BOOL)flushTimerEnabled;
+ (id)_sharedInstanceUsingContract:(id)arg1;
@property(retain) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain) NSMutableSet *requestPromises; // @synthesize requestPromises=_requestPromises;
@property(retain) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain) NSDictionary *lastMetricsDictionary; // @synthesize lastMetricsDictionary=_lastMetricsDictionary;
@property(copy) CDUnknownBlockType flushTimerBlock; // @synthesize flushTimerBlock=_flushTimerBlock;
@property BOOL flushOnForeground; // @synthesize flushOnForeground=_flushOnForeground;
@property(retain) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain) NSMutableSet *chainedFlushPromises; // @synthesize chainedFlushPromises=_chainedFlushPromises;
@property(retain) AMSMetricsDatabase *database; // @synthesize database=_database;
@property long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
@property(readonly) NSString *containerId; // @synthesize containerId=_containerId;
- (void).cxx_destruct;
- (BOOL)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;
- (BOOL)_shouldAllowEvent:(id)arg1;
- (id)_prepareEvent:(id)arg1;
- (void)_postEvents:(id)arg1 reportURL:(id)arg2 account:(id)arg3 logKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_openDatabaseIfNeeded;
- (id)_metricsDictionary;
- (id)_mescalSignatureWithBodyData:(id)arg1 logKey:(id)arg2;
- (void)_flushTimerUpdated;
- (void)_flushTimerStart;
- (void)_flushTimerInvalidate;
- (void)_handleFlushTimer;
- (id)_createRequestWithURL:(id)arg1 canary:(id)arg2 account:(id)arg3 body:(id)arg4 signature:(id)arg5 logKey:(id)arg6;
- (id)_baseMetricsURL;
- (void)_addCancellablePromise:(id)arg1;
- (void)_batchEventArray:(id)arg1 batchBlock:(CDUnknownBlockType)arg2;
- (id)_nextTopicWithLockKey:(id)arg1 error:(id *)arg2;
- (id)_nextBatchWithTopic:(id)arg1 lockKey:(id)arg2 error:(id *)arg3;
- (void)_flushNextBatchWithTopic:(id)arg1 lockKey:(id)arg2 logKey:(id)arg3 requestCount:(long long)arg4 flushedEventCount:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_flushDatabaseMetricsWithLockKey:(id)arg1 logKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_applicationWillEnterForeground;
- (id)flushEvents:(id)arg1;
- (id)flush;
- (id)enqueueAsyncEvents:(id)arg1;
- (void)enqueueEvents:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)dropEvents;
- (void)cancel;
@property BOOL flushTimerEnabled;
@property BOOL flushCancelled; // @synthesize flushCancelled=_flushCancelled;
@property(retain) id <AMSMetricsBagContract> bagContract; // @synthesize bagContract=_bagContract;
@property(readonly) double flushInterval;
@property(readonly) long long eventCount;
- (void)dealloc;
- (id)initWithContainerId:(id)arg1 bagContract:(id)arg2;

@end

