//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKAccountServiceExportedInterface.h"

@class NSHashTable, NSLock, NSObject<OS_dispatch_queue>, PKXPCService;

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface>
{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSLock *_lockObservers;
    NSHashTable *_observers;
    long long _accountChangedNotificationSuspensionCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)exportTransactionDataForAccountIdentifier:(id)arg1 withFileFormat:(id)arg2 beginDate:(id)arg3 endDate:(id)arg4 productTimeZone:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)markUserViewedIntroduction:(BOOL)arg1 forInstallmentIdentifiers:(id)arg2 accountIdentifier:(id)arg3;
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(BOOL)arg2 allowFetchFromServer:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)virtualCardsInKeychainWithCompletion:(CDUnknownBlockType)arg1;
- (void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 forFeatureIdentifier:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateBroadwayPhysicalCardWithActivationCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 deviceMetadata:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 deviceMetadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeVirtualCardToKeychain:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteEventWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)eventsForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePreferences:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preferencesForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)termsWithIdentifier:(id)arg1 accepted:(BOOL)arg2 withAccountIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleSetupReminderForAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)noteAccountDeleted;
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccountWithIdentifier:(id)arg1 extended:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountForPassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMockAccountWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountsWithPassLocallyProvisionedWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)accountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorHandlerForMethod:(SEL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_accountsChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

