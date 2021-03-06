//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WPDaemon/WPDManager.h>

#import "CBPeripheralManagerDelegate.h"
#import "WPDObjectDiscoveryAdvertiser.h"

@class CBPeripheralManager, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID, WPAdvertisingRequest;

@interface WPDObjectDiscoveryManager : WPDManager <CBPeripheralManagerDelegate, WPDObjectDiscoveryAdvertiser>
{
    BOOL _scanning;
    BOOL _scanningDisabled;
    BOOL _advertising;
    NSObject<OS_dispatch_queue> *_serverQueue;
    CBPeripheralManager *_peripheralManager;
    WPAdvertisingRequest *_advertRequest;
    NSUUID *_advertClientUUID;
    NSDictionary *_advertOptions;
    unsigned long long _advertHash;
}

@property unsigned long long advertHash; // @synthesize advertHash=_advertHash;
@property(retain) NSDictionary *advertOptions; // @synthesize advertOptions=_advertOptions;
@property __weak NSUUID *advertClientUUID; // @synthesize advertClientUUID=_advertClientUUID;
@property(retain) WPAdvertisingRequest *advertRequest; // @synthesize advertRequest=_advertRequest;
@property BOOL advertising; // @synthesize advertising=_advertising;
@property(retain) CBPeripheralManager *peripheralManager; // @synthesize peripheralManager=_peripheralManager;
@property(readonly) __weak NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
@property BOOL scanningDisabled; // @synthesize scanningDisabled=_scanningDisabled;
@property(readonly) BOOL scanning; // @synthesize scanning=_scanning;
- (void).cxx_destruct;
- (void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (id)spoofNearOwnerWithPayload:(id)arg1;
- (void)removeAdvertisingRequestsForClient:(id)arg1;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)updateAdvertiser;
- (void)startAdvertiser;
- (void)stopAdvertiser;
- (void)resetAdvertiser;
- (BOOL)updateAdvertisingOptionsWithError:(id *)arg1;
- (BOOL)advertOptionsChanged:(id)arg1;
- (void)update;
- (void)cleanup;
- (id)generateStateDump;
- (id)initWithServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

