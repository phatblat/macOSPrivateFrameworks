//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WirelessProximity/WPClient.h>

@class NSObject<OS_dispatch_queue>;

@interface WPObjectDiscovery : WPClient
{
    id <WPObjectDiscoveryDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) __weak NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <WPObjectDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)devicesDiscovered:(id)arg1;
- (void)deviceDiscovered:(id)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)updateScanningRequest:(id)arg1 withUpdate:(CDUnknownBlockType)arg2;
- (void)stopScanning;
- (void)startScanningWithMode:(long long)arg1 Timeout:(double)arg2;
- (void)startScanningWithMode:(long long)arg1;
- (void)startScanning;
- (id)scanRequestFromScanMode:(long long)arg1 UpdateTime:(double)arg2;
- (void)invalidate;
- (id)clientAsString;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)updateNearOwnerTokens:(id)arg1;
- (void)updateBeaconingExtended:(id)arg1;
- (void)updateBeaconingStatus:(id)arg1;
- (void)updateBeaconingKeys:(id)arg1;
- (void)updateBeaconingState:(id)arg1;
- (void)stopTest;
- (void)startTest;
- (void)receivedTestResponse:(id)arg1;

@end
