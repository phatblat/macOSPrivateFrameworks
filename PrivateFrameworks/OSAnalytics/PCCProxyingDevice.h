//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "OSASyncProxyServices.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PCCEndpoint;

@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyServices>
{
    PCCEndpoint *_endpoint;
    NSObject<OS_dispatch_queue> *_serial_job_queue;
    NSMutableDictionary *_job_handlers;
    NSMutableDictionary *_tracker_jobs;
    NSObject<OS_dispatch_queue> *_sync_proxy_queue;
    BOOL _preserveFiles;
    NSDictionary *_statusInfo;
}

@property BOOL preserveFiles; // @synthesize preserveFiles=_preserveFiles;
@property(readonly) NSDictionary *statusInfo; // @synthesize statusInfo=_statusInfo;
- (void).cxx_destruct;
- (void)finishJob:(id)arg1 content:(id)arg2 error:(id)arg3;
- (void)addJob:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)startJob:(id)arg1 message:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)abort;
- (void)requestProxyMetadata:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 logList:(CDUnknownBlockType)arg2;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (void)updateProxiedDeviceMetadata:(id)arg1 from:(id)arg2;
- (BOOL)ensureParentDirectoryExists:(id)arg1;
- (void)ack:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
- (void)handleFile:(id)arg1 metadata:(id)arg2;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (void)handleConnection:(BOOL)arg1;
- (void)listDevices:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
