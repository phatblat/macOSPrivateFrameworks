//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface CLSQueueBasedGeoMapQueryHelper : NSObject
{
    BOOL _simulatesTimeout;
    BOOL _alreadyLaunched;
    BOOL _didFinishQuery;
    id <CLSQueryProtocol> _query;
    CDUnknownBlockType _cancellerBlock;
    CDUnknownBlockType _completionBlock;
    double _timeoutInterval;
    double _numberOfRetries;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned long long _retryLevel;
    double _nextRetryTime;
}

@property(nonatomic) BOOL didFinishQuery; // @synthesize didFinishQuery=_didFinishQuery;
@property(nonatomic) BOOL alreadyLaunched; // @synthesize alreadyLaunched=_alreadyLaunched;
@property(nonatomic) double nextRetryTime; // @synthesize nextRetryTime=_nextRetryTime;
@property(nonatomic) unsigned long long retryLevel; // @synthesize retryLevel=_retryLevel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) double internalProgressTimeInterval; // @synthesize internalProgressTimeInterval=_internalProgressTimeInterval;
@property(nonatomic) double numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, getter=isSimulatingTimeout) BOOL simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType cancellerBlock; // @synthesize cancellerBlock=_cancellerBlock;
@property(readonly, nonatomic) id <CLSQueryProtocol> query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancel;
- (void)_handleError:(id)arg1;
- (void)_heartBeat;
- (void)_startQuery;
- (void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2;
- (void)launchQueryWithCancellerBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithQueryObject:(id)arg1;

@end

