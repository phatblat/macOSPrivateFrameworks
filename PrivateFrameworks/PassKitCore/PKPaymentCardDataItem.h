//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKCurrencyAmount, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentCardDataItem : PKPaymentDataItem
{
    BOOL _showPeerPaymentBalance;
    PKCurrencyAmount *_peerPaymentBalance;
}

+ (long long)dataType;
@property(retain, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(nonatomic) BOOL showPeerPaymentBalance; // @synthesize showPeerPaymentBalance=_showPeerPaymentBalance;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)arg1;
@property(readonly, nonatomic) BOOL shouldShowCardArt;
- (long long)status;
@property(readonly, nonatomic) BOOL requiresBillingAddress;
@property(readonly, nonatomic) CNContact *billingAddress;
@property(readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property(readonly, nonatomic) PKPaymentPass *pass;
- (id)errors;

@end

