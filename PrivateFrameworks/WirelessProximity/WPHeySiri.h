//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WirelessProximity/WPClient.h>

@interface WPHeySiri : WPClient
{
    BOOL _isScanning;
    id <WPHeySiriProtocol> _delegate;
}

@property BOOL isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) __weak id <WPHeySiriProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)scanningStoppedOfType:(unsigned char)arg1;
- (void)scanningStartedOfType:(unsigned char)arg1;
- (void)deviceDiscovered:(id)arg1;
- (void)advertisingPendingOfType:(unsigned char)arg1;
- (void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2;
- (void)advertisingStoppedOfType:(unsigned char)arg1;
- (void)advertisingStartedOfType:(unsigned char)arg1;
- (void)stateDidChange:(long long)arg1;
- (void)stopScanning;
- (void)startScanning;
- (void)stopAdvertising;
- (void)startAdvertisingWithData:(id)arg1;
- (void)stopScanningAndAdvertising;
- (void)startScanningAndAdvertisingWithData:(id)arg1;
- (void)invalidate;
- (id)clientAsString;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end

