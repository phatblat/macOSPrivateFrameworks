//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVConferenceXPCClient, NSObject<OS_dispatch_queue>;

@interface AVCTestMonitor : NSObject
{
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    AVConferenceXPCClient *_connection;
}

- (void)setEmulatedRxPLR:(double)arg1;
- (void)setEnableLoopbackInterface:(_Bool)arg1;
- (void)forceNetworkCellular:(BOOL)arg1;
- (void)updateAudioInjectConfig:(id)arg1;
- (void)requestReport;
- (void)setupNotificationQueue:(id)arg1;
- (void)deregisterBlocksForNotifications;
- (void)registerBlocksForNotifications;
- (id)delegateNotificationQueue;
- (id)delegate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end
