//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

#import "NFLoyaltyAndPaymentSessionDelegate.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString, PKFieldProperties, PKPaymentApplication, PKPaymentPass, PKTransitAppletHistory;

@interface PKContactlessInterfaceSession : PKPaymentSession <NFLoyaltyAndPaymentSessionDelegate>
{
    PKPaymentApplication *_activatedPaymentApplication;
    PKPaymentPass *_activatedPaymentPass;
    NSArray *_activatedValueAddedServicePasses;
    NSArray *_activatedHostCards;
    NSArray *_valueAddedServiceTransactions;
    PKFieldProperties *_fieldProperties;
    PKFieldProperties *_fieldPropertiesToLookup;
    unsigned long long _transactionStartTime;
    // Error parsing type: AB, name: _fieldPresent
    BOOL _handlingExpress;
    unsigned long long _expressActivity;
    BOOL _felicaStateChanged;
    unsigned long long _state;
    id <PKContactlessInterfaceSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _prioritySessionExists;
    // Error parsing type: AB, name: _persistentCardEmulation
    unsigned char _cardEmulationMode;
}

+ (id)transitAppletStateFromPaymentSession:(id)arg1 withPaymentApplication:(id)arg2;
@property(readonly, nonatomic) PKFieldProperties *fieldProperties; // @synthesize fieldProperties=_fieldProperties;
@property(readonly, nonatomic) NSArray *activatedValueAddedServicePasses; // @synthesize activatedValueAddedServicePasses=_activatedValueAddedServicePasses;
- (void).cxx_destruct;
- (void)_endFieldPropertiesLookup;
- (void)_endLookupAndNotifyForFieldProperties:(id)arg1;
- (void)_startLookupForFieldProperties:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(id)arg3;
- (void)loyaltyAndPaymentSession:(id)arg1 didFelicaStateChange:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didFailDeferredAuthorization:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectValueAddedService:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didSelectApplet:(id)arg2;
- (void)loyaltyAndPaymentSessionDidExitField:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didExpireTransactionForApplet:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didEndTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(id)arg1 result:(id)arg2;
- (void)loyaltyAndPaymentSession:(id)arg1 didStartTransaction:(id)arg2;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(id)arg1;
- (void)_processEndEvent:(id)arg1 withPartialContext:(id)arg2 groupHeadIdentifier:(id)arg3 groupAppletIdentifiers:(id)arg4;
- (void)_sendPersistentCardEmulationForPaymentPass:(id)arg1 paymentApplication:(id)arg2;
- (id)_filteredLoyaltyPassesFromVASTransactions:(id)arg1 activatedPasses:(id)arg2;
- (id)_appletWithIdentifier:(id)arg1;
- (id)_appletForPaymentApplication:(id)arg1;
@property(nonatomic) __weak id <PKContactlessInterfaceSessionDelegate> delegate;
@property(readonly, nonatomic) BOOL persistentCardEmulationQueued;
@property(readonly, nonatomic) BOOL fieldPresent;
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic) PKTransitAppletHistory *transitAppletState;
- (void)setState:(unsigned long long)arg1;
@property(readonly, nonatomic) PKPaymentPass *activatedPaymentPass;
@property(readonly, nonatomic) PKPaymentApplication *activatedPaymentApplication;
- (BOOL)paymentApplicationSupportsAutomaticAuthorization:(id)arg1;
- (BOOL)resetPersistentCardEmulation;
- (BOOL)queuePersistentCardEmulation;
- (void)resetExpressState;
- (BOOL)stopCardEmulation;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1 deferAuthorization:(BOOL)arg2;
- (BOOL)authorizeAndStartCardEmulationWithCredential:(id)arg1;
- (BOOL)activateValueAddedServicePasses:(id)arg1;
- (BOOL)activateValueAddedServicePassWhitelist:(id)arg1 greylist:(id)arg2;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (BOOL)activatePaymentApplication:(id)arg1 forPaymentPass:(id)arg2 markAsDefault:(BOOL)arg3;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

