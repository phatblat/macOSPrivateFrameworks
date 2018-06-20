//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageTransport.h"

#import "HMDSecureRemoteStreamDelegate.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMDAccountRegistry, HMDDevice, HMDRemoteDeviceMonitor, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMFDumpState>
{
    BOOL _reachable;
    HMDDevice *_device;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDRemoteDeviceMonitor *_deviceMonitor;
    HMDAccountRegistry *_accountRegistry;
    unsigned long long _maximumRemoteStreams;
    NSMutableArray *_pendingMessages;
    NSMutableArray *_clientStreams;
    NSMutableArray *_serverStreams;
    long long _state;
}

+ (id)logCategory;
+ (BOOL)isSecureRemoteSessionMessage:(id)arg1;
+ (void)initialize;
@property(nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSMutableArray *serverStreams; // @synthesize serverStreams=_serverStreams;
@property(readonly, nonatomic) NSMutableArray *clientStreams; // @synthesize clientStreams=_clientStreams;
@property(readonly, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(nonatomic) unsigned long long maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)logIdentifier;
- (id)dumpState;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (void)secureRemoteStream:(id)arg1 receivedRequestToSendMessage:(id)arg2;
- (void)secureRemoteStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)secureRemoteStreamIsIdle:(id)arg1;
- (void)_closeServerStream:(id)arg1 error:(id)arg2;
- (void)_openServerStreamWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_closeClientStream:(id)arg1 error:(id)arg2;
- (void)_openClientStreamWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_serverStreamWithIdentifier:(id)arg1;
- (id)_clientStreamForMessage:(id)arg1;
- (id)_clientStreamWithIdentiifer:(id)arg1;
- (void)handleDeviceIsNotReachable:(id)arg1;
- (void)handleDeviceIsReachable:(id)arg1;
- (void)_handleStreamInvalidationMessage:(id)arg1;
- (void)_handleSecureServerMessage:(id)arg1 transport:(id)arg2;
- (void)_handleSecureClientMessage:(id)arg1 transport:(id)arg2;
- (void)receivedSecureMessage:(id)arg1 fromTransport:(id)arg2;
- (id)_dequeMessage;
- (void)_queueMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_closeWithError:(id)arg1;
- (void)close;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 deviceMonitor:(id)arg2 accountRegistry:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

