//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface W5Client : NSObject
{
    NSXPCConnection *_conn;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isBrowsing;
    double _lastRecoveryTimestamp;
    NSMutableArray *_mutableEventIDs;
    NSMutableArray *_mutableUUIDs;
    NSMutableDictionary *_mutableDiagnosticsCallbackMap;
    NSMutableDictionary *_mutableLogsCallbackMap;
    NSMutableDictionary *_mutablePerformanceCallbackMap;
    CDUnknownBlockType _eventCallback;
}

+ (id)sharedClient;
@property(copy, nonatomic) CDUnknownBlockType eventCallback; // @synthesize eventCallback=_eventCallback;
- (void)receivedEvent:(id)arg1;
- (void)updatedPerformanceTest:(id)arg1 uuid:(id)arg2;
- (void)collectedLogItem:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)completedDiagnosticsTest:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)log:(id)arg1 timestamp:(BOOL)arg2;
- (void)__log:(id)arg1 timestamp:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (id)runPerformanceTest:(id)arg1 update:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id *)arg4;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(BOOL)arg3 peer:(id)arg4 update:(CDUnknownBlockType)arg5 diagnostics:(CDUnknownBlockType)arg6 receipts:(id *)arg7 error:(out id *)arg8;
- (id)collectLogs:(id)arg1 compress:(BOOL)arg2 peer:(id)arg3 update:(CDUnknownBlockType)arg4 diagnostics:(CDUnknownBlockType)arg5 error:(out id *)arg6;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(CDUnknownBlockType)arg3 error:(out id *)arg4;
- (BOOL)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id *)arg3;
- (id)queryDebugConfigurationForPeer:(id)arg1 error:(out id *)arg2;
- (id)queryStatusForPeer:(id)arg1 error:(out id *)arg2;
- (void)cancelAllRequests;
- (void)__cancelAllRequestsAndReply:(CDUnknownBlockType)arg1;
- (void)cancelRequestWithUUID:(id)arg1;
- (void)__cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)runPerformanceTest:(id)arg1 update:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(BOOL)arg3 peer:(id)arg4 update:(CDUnknownBlockType)arg5 diagnostics:(CDUnknownBlockType)arg6 reply:(CDUnknownBlockType)arg7;
- (id)collectLogs:(id)arg1 compress:(BOOL)arg2 peer:(id)arg3 update:(CDUnknownBlockType)arg4 diagnostics:(CDUnknownBlockType)arg5 reply:(CDUnknownBlockType)arg6;
- (void)__logsCollectedWithTemporaryURL:(id)arg1 receipts:(id)arg2 error:(id)arg3 outputURL:(id)arg4 compress:(BOOL)arg5 reply:(CDUnknownBlockType)arg6;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(CDUnknownBlockType)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryStatusForPeer:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)localPeer;
- (void)__queryLocalPeerAndReply:(CDUnknownBlockType)arg1;
- (id)peerCache;
- (void)__queryPeerCacheAndReply:(CDUnknownBlockType)arg1;
- (void)stopMonitoringEvents:(id)arg1;
- (void)__stopMonitoringEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)startMonitoringEvents:(id)arg1;
- (void)__startMonitoringEvents:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopBrowsing;
- (void)__stopBrowsingAndReply:(CDUnknownBlockType)arg1;
- (void)startBrowsing;
- (void)__startBrowsingAndReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

