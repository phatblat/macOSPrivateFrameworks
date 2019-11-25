//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, NSString, PKFeatureApplication, PKFieldProperties, PKPaymentMessage, PKPaymentTransaction, PKTransitPassProperties, PKValueAddedServiceTransaction;

@protocol PKPaymentServiceExportedInterface
- (void)featureApplicationChanged:(PKFeatureApplication *)arg1;
- (void)featureApplicationRemoved:(PKFeatureApplication *)arg1;
- (void)featureApplicationAdded:(PKFeatureApplication *)arg1;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithTransitPassProperties:(PKTransitPassProperties *)arg2;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didReceiveValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveBalanceUpdate:(NSSet *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(PKFieldProperties *)arg1;
@end

