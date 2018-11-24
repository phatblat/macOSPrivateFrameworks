//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralDelegate.h"
#import "CUReadWriteRequestable.h"

@class CBCentralManager, CBL2CAPChannel, CBPeripheral, CUReadRequest, CUWriteRequest, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSUUID;

@interface CUBLEConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CUReadWriteRequestable>
{
    CDUnknownBlockType _activateCompletion;
    CBCentralManager *_centralManager;
    BOOL _guardConnected;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CBPeripheral *_peripheral;
    NSObject<OS_dispatch_source> *_readSource;
    unsigned char _readSuspended;
    CUReadRequest *_readRequestCurrent;
    struct NSMutableArray *_readRequests;
    int _socketFD;
    int _state;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSuspended;
    CUWriteRequest *_writeRequestCurrent;
    struct NSMutableArray *_writeRequests;
    struct LogCategory *_ucat;
    unsigned short _destinationPSM;
    int _connectionLatency;
    NSUUID *_destinationUUID;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CBL2CAPChannel *_l2capChannel;
    CDUnknownBlockType _serverInvalidationHandler;
}

@property(copy, nonatomic) CDUnknownBlockType serverInvalidationHandler; // @synthesize serverInvalidationHandler=_serverInvalidationHandler;
@property(retain, nonatomic) CBL2CAPChannel *l2capChannel; // @synthesize l2capChannel=_l2capChannel;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) NSUUID *destinationUUID; // @synthesize destinationUUID=_destinationUUID;
@property(nonatomic) unsigned short destinationPSM; // @synthesize destinationPSM=_destinationPSM;
@property(nonatomic) int connectionLatency; // @synthesize connectionLatency=_connectionLatency;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didOpenL2CAPChannel:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_abortWritesWithError:(id)arg1;
- (BOOL)_prepareWriteRequest:(id)arg1 error:(id *)arg2;
- (void)_processWrites;
- (void)writeEndOfDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (BOOL)_processReadStatus;
- (void)_abortReadsWithError:(id)arg1;
- (void)_prepareReadRequest:(id)arg1;
- (void)_processReads:(BOOL)arg1;
- (void)readWithRequest:(id)arg1;
- (BOOL)_runSetupChannel;
- (BOOL)_runConnectStart;
- (void)_run;
- (void)_reportError:(id)arg1;
- (BOOL)_setupIOAndReturnError:(id *)arg1;
- (BOOL)_startConnectingAndReturnError:(id *)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (BOOL)activateDirectAndReturnError:(id *)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

