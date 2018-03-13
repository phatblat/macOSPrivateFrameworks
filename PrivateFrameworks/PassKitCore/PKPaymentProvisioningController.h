//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentWebServiceDelegate.h"

@class NSArray, NSHashTable, NSLock, NSMutableArray, NSMutableSet, NSSet, NSString, NSTimer, PKPaymentCredential, PKPaymentEligibilityResponse, PKPaymentPass, PKPaymentProvisioningControllerCredentialQueue, PKPaymentProvisioningResponse, PKPaymentRequest, PKPaymentRequirementsResponse, PKPaymentSetupProductModel, PKPaymentWebService;

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate>
{
    NSMutableSet *_tasks;
    NSTimer *_descriptionTimer;
    NSMutableArray *_associatedCredentials;
    BOOL _provisioningUserInterfaceIsVisible;
    BOOL _proxyTargetDeviceWebServiceInUse;
    NSString *_provisioningNonce;
    PKPaymentCredential *_currentCredential;
    NSHashTable *_delegates;
    NSLock *_delegateLock;
    NSString *_productIdentifier;
    NSString *_referrerIdentifier;
    PKPaymentWebService *_webService;
    long long _state;
    NSString *_localizedProgressDescription;
    PKPaymentProvisioningControllerCredentialQueue *_credentialProvisioningQueue;
    PKPaymentSetupProductModel *_paymentSetupProductModel;
    PKPaymentRequirementsResponse *_requirementsResponse;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    PKPaymentProvisioningResponse *_provisioningResponse;
    PKPaymentPass *_provisionedPass;
    NSArray *_moreInfoItems;
    NSSet *_automaticExpressModes;
    PKPaymentRequest *_provisionAndReturnPaymentRequest;
}

@property(retain, nonatomic) PKPaymentRequest *provisionAndReturnPaymentRequest; // @synthesize provisionAndReturnPaymentRequest=_provisionAndReturnPaymentRequest;
@property(readonly, nonatomic) NSSet *automaticExpressModes; // @synthesize automaticExpressModes=_automaticExpressModes;
@property(readonly, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property(readonly, nonatomic) PKPaymentPass *provisionedPass; // @synthesize provisionedPass=_provisionedPass;
@property(readonly, nonatomic) PKPaymentProvisioningResponse *provisioningResponse; // @synthesize provisioningResponse=_provisioningResponse;
@property(readonly, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
@property(readonly, nonatomic) PKPaymentRequirementsResponse *requirementsResponse; // @synthesize requirementsResponse=_requirementsResponse;
@property(readonly, nonatomic) PKPaymentSetupProductModel *paymentSetupProductModel; // @synthesize paymentSetupProductModel=_paymentSetupProductModel;
@property(readonly, nonatomic) PKPaymentProvisioningControllerCredentialQueue *credentialProvisioningQueue; // @synthesize credentialProvisioningQueue=_credentialProvisioningQueue;
@property(readonly, copy, nonatomic) NSArray *associatedCredentials; // @synthesize associatedCredentials=_associatedCredentials;
@property(readonly, copy, nonatomic) NSString *localizedProgressDescription; // @synthesize localizedProgressDescription=_localizedProgressDescription;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
- (void).cxx_destruct;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
- (id)displayableErrorForProvisioningError:(id)arg1;
- (id)displayableErrorForError:(id)arg1;
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
- (id)_paymentPassWithPaymentMethodType:(unsigned long long)arg1;
- (id)passesWithPaymentMethodType:(unsigned long long)arg1;
- (BOOL)hasDebitPaymentPass;
- (BOOL)hasCreditPaymentPass;
- (BOOL)hasPaymentPass;
- (id)associatedCredentialsForDefaultBehaviour;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)_downloadMoreInfoItemURLs:(id)arg1 withMetadata:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (BOOL)provisioningUserInterfaceIsVisible;
- (void)_setLocalizedProgressDescription:(id)arg1;
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2;
- (void)_passAlreadyProvisioned;
- (void)_provisioningNonceWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeProvisionedPass;
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)acceptTerms;
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resolveRequirementsUsingProduct:(id)arg1;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_queryEligibilityForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryRequirementsForCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_filterPaymentSetupProducts:(id)arg1;
- (void)updatePaymentSetupProductModelWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_informDelegatesOfPaymentPassUpdateOnCredential:(id)arg1;
- (void)_downloadRemoteAssetsForPaymentPass:(id)arg1 paymentCredential:(id)arg2;
- (void)_downloadPassForPaymentCredential:(id)arg1;
- (void)_addAssociatedCredential:(id)arg1;
- (void)_associateCredential:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_credentialIsValidForPaymentRequest:(id)arg1;
- (void)_associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)associateCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateRemoteCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRemoteCredentials:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)retrieveRemoteCredentials:(CDUnknownBlockType)arg1;
- (void)registerDevice:(CDUnknownBlockType)arg1;
- (void)_registerWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_validatePreconditionsWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)validatePreconditions:(CDUnknownBlockType)arg1;
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(CDUnknownBlockType)arg1;
- (void)validatePreconditionsAndRegister:(CDUnknownBlockType)arg1;
- (void)_setState:(long long)arg1 notify:(BOOL)arg2;
- (void)resetForNewProvisioning;
- (void)reset;
- (long long)_defaultResetState;
- (void)dealloc;
- (id)initWithWebService:(id)arg1;
@property(readonly, nonatomic) BOOL suppressDefaultCardholderNameField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

