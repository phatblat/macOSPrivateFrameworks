//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServer.h>

#import "HAPFragmentationStreamDelegate.h"
#import "HAPSecuritySessionDelegate.h"
#import "HAPStreamDelegate.h"
#import "HMFTimerDelegate.h"

@class HAPCharacteristic, HAPFragmentationStream, HAPRelayStream, HAPSecuritySession, HMFExponentialBackoffTimer, NSMapTable, NSMutableArray, NSOperationQueue, NSString;

@interface HAPAccessoryServerRelay : HAPAccessoryServer <HAPSecuritySessionDelegate, HAPFragmentationStreamDelegate, HMFTimerDelegate, HAPStreamDelegate>
{
    BOOL _securitySessionOpening;
    BOOL _discovered;
    BOOL _shouldDiscover;
    unsigned short _nextRequestTransactionIdentifier;
    NSMutableArray *_pendingRequests;
    NSMapTable *_pendingResponses;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_clientOperationQueue;
    HAPFragmentationStream *_fragmentationStream;
    HAPSecuritySession *_securitySession;
    NSOperationQueue *_pairVerifyOperationQueue;
    HMFExponentialBackoffTimer *_reachabilityProbeTimer;
    unsigned long long _configurationNumber;
    HAPCharacteristic *_pairingsCharacteristic;
    HAPRelayStream *_stream;
}

@property(readonly, nonatomic) HAPRelayStream *stream; // @synthesize stream=_stream;
@property(nonatomic) __weak HAPCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(nonatomic) BOOL shouldDiscover; // @synthesize shouldDiscover=_shouldDiscover;
@property(nonatomic, getter=hasDiscovered) BOOL discovered; // @synthesize discovered=_discovered;
@property(nonatomic) unsigned long long configurationNumber; // @synthesize configurationNumber=_configurationNumber;
@property(retain, nonatomic) HMFExponentialBackoffTimer *reachabilityProbeTimer; // @synthesize reachabilityProbeTimer=_reachabilityProbeTimer;
@property(readonly, nonatomic) NSOperationQueue *pairVerifyOperationQueue; // @synthesize pairVerifyOperationQueue=_pairVerifyOperationQueue;
@property(nonatomic, getter=isSecuritySessionOpening) BOOL securitySessionOpening; // @synthesize securitySessionOpening=_securitySessionOpening;
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property(readonly, nonatomic) unsigned short nextRequestTransactionIdentifier; // @synthesize nextRequestTransactionIdentifier=_nextRequestTransactionIdentifier;
@property(readonly, nonatomic) HAPFragmentationStream *fragmentationStream; // @synthesize fragmentationStream=_fragmentationStream;
@property(readonly, nonatomic) NSOperationQueue *clientOperationQueue; // @synthesize clientOperationQueue=_clientOperationQueue;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(readonly, nonatomic) NSMapTable *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)fragmentationStream:(id)arg1 didReceiveData:(id)arg2 transactionIdentifier:(unsigned short)arg3 error:(id)arg4;
- (void)fragmentationStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;
- (void)stream:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(id)arg3;
- (void)stream:(id)arg1 didFailToWriteDataWithIdentifier:(id)arg2 error:(id)arg3;
- (void)stream:(id)arg1 didCloseWithError:(id)arg2;
- (void)streamDidResume:(id)arg1;
- (void)streamDidSuspend:(id)arg1;
- (void)_tearDownSessionWithError:(id)arg1;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (id)_encryptData:(id)arg1 error:(id *)arg2;
- (void)_handleSecuritySessionSetupExchangeData:(id)arg1;
- (void)_establishSecuritySession;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (void)_resumeAllOperations;
- (void)_suspendAllOperations;
- (void)_enqueueRequest:(id)arg1;
- (void)_handleFragmentedResponse:(id)arg1 transactionIdentifier:(unsigned short)arg2 error:(id)arg3;
- (void)_handleReceivedMessageData:(id)arg1 withIdentifier:(id)arg2 error:(id)arg3;
- (void)_sendRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned short)_nextTransactionIdentifier;
- (id)getLocalPairingIdentityAndAllowCreation:(BOOL)arg1 error:(id *)arg2;
- (void)_listPairingWithCompletionQueue:(id)arg1 pairingsCharacteristic:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 pairingsCharacteristic:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 pairingsCharacteristic:(id)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (BOOL)stopPairingWithError:(id *)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3;
- (void)_handleNotificationResponse:(id)arg1;
- (void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)_handleCharacteristicWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_handleCharacteristicPrepareWriteResponse:(id)arg1 characteristicWriteRequestTuples:(id)arg2 prepareIdentifier:(id)arg3 error:(id)arg4 timeout:(double)arg5 completionQueue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_performWriteValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleCharacteristicReadResponse:(id)arg1 characteristics:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_parseServicesFromPrimaryAccessory:(id)arg1;
- (void)_parseAttributeDatabase:(id)arg1 configurationNumber:(id)arg2;
- (void)discoverAccessories;
- (void)_handleReachabilityProbeFire;
- (void)_endReachabilityProbe;
- (void)_startReachabilityProbe;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)isPaired;
- (BOOL)hasPairings;
- (long long)linkType;
- (void)dealloc;
- (id)initWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3 keyStore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

