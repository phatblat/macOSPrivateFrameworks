//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKAccountFeatureDescriptor.h>

@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor : PKAccountFeatureDescriptor
{
    unsigned long long _paymentFundingSourceTypes;
    unsigned long long _paymentPresets;
    unsigned long long _paymentFrequencies;
    NSArray *_supportedFileFormatsForTransactionData;
    NSString *_paymentTermsIdentifier;
    NSString *_fundingSourceTermsIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property(copy, nonatomic) NSString *paymentTermsIdentifier; // @synthesize paymentTermsIdentifier=_paymentTermsIdentifier;
@property(copy, nonatomic) NSArray *supportedFileFormatsForTransactionData; // @synthesize supportedFileFormatsForTransactionData=_supportedFileFormatsForTransactionData;
@property(nonatomic) unsigned long long paymentFrequencies; // @synthesize paymentFrequencies=_paymentFrequencies;
@property(nonatomic) unsigned long long paymentPresets; // @synthesize paymentPresets=_paymentPresets;
@property(nonatomic) unsigned long long paymentFundingSourceTypes; // @synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToCreditAccountFeatureDescriptor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
