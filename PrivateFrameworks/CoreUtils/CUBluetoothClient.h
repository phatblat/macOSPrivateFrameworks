//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBPeripheralManagerDelegate.h"

@class CBPeripheralManager, NSData, NSObject<OS_dispatch_queue>, NSString;

@interface CUBluetoothClient : NSObject <CBPeripheralManagerDelegate>
{
    NSData *_btAdvertisingAddress;
    CBPeripheralManager *_btPeripheralManager;
    BOOL _btPeripheralManagerNeeded;
    struct NSMutableDictionary *_btPairedDevices;
    BOOL _btPairedDevicesInitialized;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    unsigned int _flags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _bluetoothAddressChangedHandler;
    CDUnknownBlockType _devicePairedHandler;
    CDUnknownBlockType _deviceUnpairedHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceUnpairedHandler; // @synthesize deviceUnpairedHandler=_deviceUnpairedHandler;
@property(copy, nonatomic) CDUnknownBlockType devicePairedHandler; // @synthesize devicePairedHandler=_devicePairedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothAddressChangedHandler; // @synthesize bluetoothAddressChangedHandler=_bluetoothAddressChangedHandler;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleBluetoothAddressChanged;
- (void)_btEnsureStopped;
- (void)_btEnsureStarted;
- (void)_invalidated;
- (void)invalidate;
- (void)_interrupted;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

