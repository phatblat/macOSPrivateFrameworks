//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, PKApplePayTrustSignatureRequest;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>
{
    PKApplePayTrustSignatureRequest *_signatureRequest;
    NSData *_signatureData;
    NSData *_paymentData;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(readonly, copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest; // @synthesize signatureRequest=_signatureRequest;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatureRequest:(id)arg1 signature:(id)arg2;

@end

