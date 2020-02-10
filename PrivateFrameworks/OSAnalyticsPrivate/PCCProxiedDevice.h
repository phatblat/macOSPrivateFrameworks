//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_transaction>, PCCEndpoint, PCCGroupJob;

@interface PCCProxiedDevice : NSObject
{
    PCCEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_job_queue;
    PCCGroupJob *_groupXferJob;
    NSMutableDictionary *_jobByTracker;
    NSObject<OS_dispatch_source> *_expiryTimer;
    NSObject<OS_os_transaction> *_txn;
    int file_count;
    int msg_count;
    int up_count;
    int job_count;
    int expire_count;
    BOOL _preserveFiles;
    double _jobTimeout;
}

@property BOOL preserveFiles; // @synthesize preserveFiles=_preserveFiles;
@property double jobTimeout; // @synthesize jobTimeout=_jobTimeout;
- (void).cxx_destruct;
- (void)startTimer;
- (void)finish:(id)arg1 target:(id)arg2 event:(id)arg3 type:(id)arg4 result:(id)arg5;
- (BOOL)doWork:(id)arg1;
- (void)initiate:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 job:(id)arg4;
- (void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3;
- (void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
- (void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3;
- (void)sendDeviceMetadata:(id)arg1;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (void)handleConnection:(BOOL)arg1;
- (void)sweepLogs;
- (void)explore;
- (id)initWithEndpoint:(id)arg1;

@end
