//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIServiceConnection.h>

@class NSMutableData, NSThread, RWIDevice;

__attribute__((visibility("hidden")))
@interface RWIServiceLockdownConnection : RWIServiceConnection
{
    NSThread *_readThread;
    NSMutableData *_incomingData;
    BOOL _startingWebinspectord;
    struct _AMDServiceConnection *_webinspectordService;
    struct _AMDServiceConnection *_notificationProxyService;
}

+ (id)connectionWithDevice:(id)arg1 delegate:(id)arg2;
@property struct _AMDServiceConnection *webinspectordService; // @synthesize webinspectordService=_webinspectordService;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)readFromService;
- (void)sendMessage:(id)arg1;
- (void)_disconnect;
- (void)notificationFromDevice:(id)arg1;
- (void)_reconnectToWebinspectord;
- (void)startMobileDeviceServiceConnections;
- (struct _AMDServiceConnection *)_queueStartNotificationProxyService:(struct _AMDevice *)arg1 wasPasswordProtected:(char *)arg2;
- (struct _AMDServiceConnection *)_queueStartWebInspectordService:(struct _AMDevice *)arg1 wasPasswordProtected:(char *)arg2;
- (BOOL)_stopSession:(struct _AMDevice *)arg1;
- (BOOL)_startSession:(struct _AMDevice *)arg1;
- (void)_didStartNotificationProxyServiceConnection:(struct _AMDServiceConnection *)arg1;
- (void)_didStartWebinspectordServiceConnection:(struct _AMDServiceConnection *)arg1;
@property(readonly) RWIDevice *device; // @dynamic device;
- (BOOL)isConnected;
- (void)dealloc;
- (void)_closeNotificationProxyServiceConnection;
- (void)_closeWebinspectordServiceConnection;
- (void)_cancelReadThread;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;

@end

