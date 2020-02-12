//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString, NSURL, PKPaymentDeviceMetadata;

@interface PKApplyWebServiceTermsRequest : PKApplyWebServiceRequest <NSSecureCoding>
{
    BOOL _termsAccepted;
    BOOL _isInstallment;
    NSString *_applicationIdentifier;
    NSString *_applicationTermsIdentifier;
    NSString *_offerTermsIdentifier;
    NSURL *_baseURL;
    PKPaymentDeviceMetadata *_deviceMetadata;
    NSDecimalNumber *_installmentAmount;
    NSString *_installmentCurrencyCode;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *installmentCurrencyCode; // @synthesize installmentCurrencyCode=_installmentCurrencyCode;
@property(retain, nonatomic) NSDecimalNumber *installmentAmount; // @synthesize installmentAmount=_installmentAmount;
@property(nonatomic) BOOL isInstallment; // @synthesize isInstallment=_isInstallment;
@property(retain, nonatomic) PKPaymentDeviceMetadata *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) BOOL termsAccepted; // @synthesize termsAccepted=_termsAccepted;
@property(copy, nonatomic) NSString *offerTermsIdentifier; // @synthesize offerTermsIdentifier=_offerTermsIdentifier;
@property(copy, nonatomic) NSString *applicationTermsIdentifier; // @synthesize applicationTermsIdentifier=_applicationTermsIdentifier;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

