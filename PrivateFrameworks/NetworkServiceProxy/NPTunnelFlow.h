//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPFlowProperties, NPTunnel, NSDate, NSObject<OS_dispatch_data>, NSPAppRule;

@interface NPTunnelFlow : NSObject
{
    BOOL _hasTunnel;
    int _tunnelError;
    long long _fallbackReason;
    BOOL _isDirectConnectionViable;
    BOOL _fallbackDisabled;
    BOOL _enableDirectRace;
    BOOL _disconnectedByApp;
    BOOL _shouldComposeIntialData;
    unsigned long long _hashKey;
    unsigned long long _identifier;
    NPTunnel *_tunnel;
    long long _state;
    NSPAppRule *_appRule;
    NPFlowProperties *_extraFlowProperties;
    NSDate *_firstTxByteTimestamp;
    NSDate *_startDate;
    void *_window;
    unsigned long long _initialBytesLeftOver;
    NSObject<OS_dispatch_data> *_savedData;
    void *_fallbackTimer;
    void *_telemetryTimer;
    double _fallbackDelay;
}

@property(nonatomic) double fallbackDelay; // @synthesize fallbackDelay=_fallbackDelay;
@property(nonatomic) void *telemetryTimer; // @synthesize telemetryTimer=_telemetryTimer;
@property(nonatomic) void *fallbackTimer; // @synthesize fallbackTimer=_fallbackTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_data> *savedData; // @synthesize savedData=_savedData;
@property(nonatomic) BOOL shouldComposeIntialData; // @synthesize shouldComposeIntialData=_shouldComposeIntialData;
@property(nonatomic) BOOL disconnectedByApp; // @synthesize disconnectedByApp=_disconnectedByApp;
@property(readonly, nonatomic) BOOL enableDirectRace; // @synthesize enableDirectRace=_enableDirectRace;
@property(nonatomic) BOOL fallbackDisabled; // @synthesize fallbackDisabled=_fallbackDisabled;
@property(nonatomic) BOOL isDirectConnectionViable; // @synthesize isDirectConnectionViable=_isDirectConnectionViable;
@property(nonatomic) unsigned long long initialBytesLeftOver; // @synthesize initialBytesLeftOver=_initialBytesLeftOver;
@property(readonly, nonatomic) void *window; // @synthesize window=_window;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSDate *firstTxByteTimestamp; // @synthesize firstTxByteTimestamp=_firstTxByteTimestamp;
@property(readonly, nonatomic) NPFlowProperties *extraFlowProperties; // @synthesize extraFlowProperties=_extraFlowProperties;
@property(readonly, nonatomic) NSPAppRule *appRule; // @synthesize appRule=_appRule;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NPTunnel *tunnel; // @synthesize tunnel=_tunnel;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long hashKey; // @synthesize hashKey=_hashKey;
- (void).cxx_destruct;
- (void)handleTunnelReadyForData;
- (void)reportTelemetry:(id)arg1 withService:(id)arg2 url:(id)arg3;
- (void)createTelemetryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)combineStateInfo:(id)arg1 andConnectionInfo:(id)arg2;
@property(readonly, nonatomic) BOOL isBestEffort;
- (void)reportMetrics;
@property(nonatomic) long long fallbackReason;
- (id)appData;
- (void)setAppData:(id)arg1;
- (id)copyConnectionInfo;
- (id)createFallbackConnectionInfoWithFallbackReason:(long long)arg1;
- (void)processConnectionInfo:(id)arg1;
- (void)handleTunnelCanHandleMoreData;
- (void)handleTunnelDisconnected;
- (void)handleTunnelConnected;
- (void)closeFromDirectConnectionWithError:(int)arg1;
- (void)closeFromTunnel;
@property(readonly, nonatomic) BOOL isClientFlowClosed;
- (void)closeClientFlowWithError:(int)arg1;
- (void)closeWithError:(int)arg1;
- (void)increaseWindowSize:(unsigned long long)arg1;
- (void)handleAppData:(id)arg1;
- (void)stopDirectConnection;
- (void)startDirectConnection;
- (void)readDataFromClient;
- (void)sendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (BOOL)shouldSendDataToClient:(id)arg1 fromTunnel:(BOOL)arg2;
- (void)cleanupLosingConnection:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTunnel:(id)arg1 appRule:(id)arg2 hashKey:(unsigned long long)arg3 extraFlowProperties:(id)arg4;

@end

