//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentServiceExportedInterface.h"
#import "PKXPCServiceDelegate.h"

@class NSString, PKExpressTransactionState, PKFieldProperties, PKPaymentWebServiceContext, PKXPCService;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface>
{
    PKXPCService *_remoteService;
    unsigned long long _interfaceType;
    // Error parsing type: AB, name: _cachedFieldPropertiesValid
    _Bool _hasPaymentDeviceFieldProperties;
    _Bool _forceConnectionOnResume;
    id <PKPaymentServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <PKPaymentServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_accessDelegate:(CDUnknownBlockType)arg1;
- (BOOL)_hasInterfaceOfType:(unsigned long long)arg1;
- (BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)productsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)noteAccountDeleted;
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg1 style:(long long)arg2;
- (void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitDeleteRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitTermsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)submitApplyRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)featureApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)featureApplicationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)defaultPaymentPassIngestionSpecificIdentifier:(CDUnknownBlockType)arg1;
- (void)_defaultPaymentPassUniqueIdentifier:(CDUnknownBlockType)arg1;
- (void)_messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requiresUpgradedPasscodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(id)arg3 teamIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sharedPaymentWebServiceContextWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property(retain, nonatomic) NSString *defaultPaymentPassUniqueIdentifier;
@property(readonly, nonatomic) PKExpressTransactionState *outstandingExpressTransactionState;
@property(readonly, nonatomic) __weak PKFieldProperties *paymentDeviceFieldProperties;
@property(readonly, nonatomic) BOOL hasPaymentDeviceFieldProperties;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeProductsCache;
- (void)unscheduleDeviceCheckIn;
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;
- (void)scheduleSetupReminders;
- (void)consistencyCheck;
- (void)downloadAllPaymentPasses;
- (void)simulatePaymentPushTopic:(id)arg1;
- (void)simulatePaymentPush;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2;
- (void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)expressPassInformationForMode:(id)arg1;
- (id)expressPassesInformation;
- (id)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (id)expressPassInformationWithPassUniqueIdentifier:(id)arg1;
- (void)setDefaultExpressTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultExpressTransitPassIdentifier;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (void)sanitizeExpressPasses;
- (void)initializeSecureElement:(CDUnknownBlockType)arg1;
- (void)initializeSecureElementIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deleteAllTransactionsForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mapsMerchantsWithCompletion:(CDUnknownBlockType)arg1;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentPlanTransactionsForPassUniqueIdentifier:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)installmentPlansWithTransactionReferennceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithServiceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pendingTransactionsForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (id)approvedTransactionsForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6;
- (void)approvedTransactionsForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForPaymentPassWithuniqueIdentifier:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withMapsIdentifier:(unsigned long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cashbackByPeriodFromPassUniqueIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionCountByPeriodForPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)removeMapsDataForTransactionWithIdentifier:(id)arg1 forPassUniqueIdentifier:(id)arg2 issueReportIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (void)featureApplicationAdded:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

