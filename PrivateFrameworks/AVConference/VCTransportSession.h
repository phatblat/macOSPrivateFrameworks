//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, TimingCollection, VCConnectionManager;

__attribute__((visibility("hidden")))
@interface VCTransportSession : NSObject
{
    BOOL _isCallActive;
    BOOL _requiresWiFi;
    BOOL _useCompressedConnectionData;
    BOOL _didRegisterForBasebandNotifications;
    unsigned int _basebandNotificationRegistrationToken;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject *_connectionSetupPiggybackBlob;
    struct opaqueRTCReporting *_reportingAgent;
    TimingCollection *_perfTimings;
    VCConnectionManager *_connectionManager;
    CDUnknownBlockType _eventHandler;
}

@property(retain, nonatomic) NSObject *connectionSetupPiggybackBlob; // @synthesize connectionSetupPiggybackBlob=_connectionSetupPiggybackBlob;
@property(readonly, nonatomic) unsigned int basebandNotificationRegistrationToken; // @synthesize basebandNotificationRegistrationToken=_basebandNotificationRegistrationToken;
@property(retain, nonatomic) TimingCollection *perfTimings; // @synthesize perfTimings=_perfTimings;
@property(nonatomic) BOOL requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property(nonatomic) BOOL useCompressedConnectionData; // @synthesize useCompressedConnectionData=_useCompressedConnectionData;
@property(readonly, nonatomic) VCConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)reportNetworkConditionsDegraded;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (BOOL)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned int connectionSetupRTTEstimate;
@property(readonly, nonatomic) BOOL isRemoteOSPreLion;
@property(readonly, nonatomic) BOOL isHandoverSupported;
@property(readonly, nonatomic) int detailedErrorCode;
@property(nonatomic, setter=setCallActive:) BOOL isCallActive;
- (void)callEventHandlerWithEvent:(unsigned int)arg1 info:(id)arg2;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithNotificationQueue:(id)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;

@end

