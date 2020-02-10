//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class PKBankAccountInformation, PKCurrencyAmount;

@interface PKAccountServicePaymentMethod : NSObject <NSSecureCoding>
{
    BOOL _deviceSupportsPeerPaymentAccountPayment;
    PKBankAccountInformation *_bankAccountInformation;
    PKCurrencyAmount *_peerPaymentBalance;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL deviceSupportsPeerPaymentAccountPayment; // @synthesize deviceSupportsPeerPaymentAccountPayment=_deviceSupportsPeerPaymentAccountPayment;
@property(copy, nonatomic) PKCurrencyAmount *peerPaymentBalance; // @synthesize peerPaymentBalance=_peerPaymentBalance;
@property(copy, nonatomic) PKBankAccountInformation *bankAccountInformation; // @synthesize bankAccountInformation=_bankAccountInformation;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBankAccountInformation:(id)arg1 peerPaymentBalance:(id)arg2 deviceSupportsPeerPaymentAccountPayment:(BOOL)arg3;

@end
