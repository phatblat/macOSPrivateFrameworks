//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSString, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentToken, PKServiceProviderPurchase;

@interface PKPaymentAuthorizationAuthorizedStateParam : PKPaymentAuthorizationStateParam
{
    PKPaymentToken *_paymentToken;
    PKPayment *_payment;
    PKServiceProviderPurchase *_purchase;
    NSString *_purchaseTransactionIdentifier;
    PKAuthorizedPeerPaymentQuote *_authorizedPeerPaymentQuote;
    PKDisbursementVoucher *_disbursementVoucher;
    PKApplePayTrustSignature *_applePayTrustSignature;
    NSString *_installmentAuthorizationToken;
}

+ (id)paramWithInstallmentAuthorizationToken:(id)arg1;
+ (id)paramWithApplePayTrustSignature:(id)arg1;
+ (id)paramWithDisbursementVoucher:(id)arg1;
+ (id)paramWithAuthorizedPeerPaymentQuote:(id)arg1;
+ (id)paramWithPurchase:(id)arg1 purchaseTransactionIdentifier:(id)arg2;
+ (id)paramWithPayment:(id)arg1;
+ (id)paramWithPaymentToken:(id)arg1;
@property(readonly, copy, nonatomic) NSString *installmentAuthorizationToken; // @synthesize installmentAuthorizationToken=_installmentAuthorizationToken;
@property(readonly, nonatomic) PKApplePayTrustSignature *applePayTrustSignature; // @synthesize applePayTrustSignature=_applePayTrustSignature;
@property(readonly, nonatomic) PKDisbursementVoucher *disbursementVoucher; // @synthesize disbursementVoucher=_disbursementVoucher;
@property(readonly, nonatomic) PKAuthorizedPeerPaymentQuote *authorizedPeerPaymentQuote; // @synthesize authorizedPeerPaymentQuote=_authorizedPeerPaymentQuote;
@property(copy, nonatomic) NSString *purchaseTransactionIdentifier; // @synthesize purchaseTransactionIdentifier=_purchaseTransactionIdentifier;
@property(retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(retain, nonatomic) PKPayment *payment; // @synthesize payment=_payment;
@property(retain, nonatomic) PKPaymentToken *paymentToken; // @synthesize paymentToken=_paymentToken;
- (void).cxx_destruct;
- (id)description;

@end

