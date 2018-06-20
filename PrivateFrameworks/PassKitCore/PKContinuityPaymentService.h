//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKContinuityPaymentServiceExportedInterface.h"

@class NSArray, NSLock, NSObject<OS_dispatch_queue>, PKXPCService;

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface>
{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSLock *_remoteDeviceLock;
    NSArray *_remoteDevices;
    id <PKContinuityPaymentServiceDelegate> _delegate;
}

+ (id)sharedService;
@property(nonatomic) __weak id <PKContinuityPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRemoteDevices:(id)arg1;
@property(readonly, nonatomic) NSArray *remoteDevices; // @synthesize remoteDevices=_remoteDevices;
- (BOOL)canMakePaymentsWithRemoteDevices;
- (BOOL)hasRemoteDevices;
- (void)cancelRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePaymentDevices;
- (void)noteAccountDeleted;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (id)init;

@end

