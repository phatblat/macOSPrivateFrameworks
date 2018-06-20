//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSArray, NSData, NSNumber, NSString, PKDSPContext, PKPaymentDeviceProvisioningData, PKPaymentEligibilityResponse;

@interface PKPaymentProvisioningRequest : PKPaymentWebServiceRequest
{
    NSNumber *_primaryJSBLSequenceCounter;
    NSArray *_certChain;
    BOOL _devSigned;
    PKPaymentDeviceProvisioningData *_deviceData;
    PKPaymentEligibilityResponse *_eligibilityResponse;
    NSString *_nonce;
    NSString *_cardholderName;
    NSString *_cardSecurityCode;
    NSData *_activationData;
    PKDSPContext *_context;
    NSData *_cryptogram;
    NSData *_challengeResponse;
    NSString *_referrerIdentifier;
}

@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(copy, nonatomic) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
@property(copy, nonatomic) NSData *cryptogram; // @synthesize cryptogram=_cryptogram;
@property(copy, nonatomic) PKDSPContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSData *activationData; // @synthesize activationData=_activationData;
@property(copy, nonatomic) NSString *cardSecurityCode; // @synthesize cardSecurityCode=_cardSecurityCode;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) PKPaymentEligibilityResponse *eligibilityResponse; // @synthesize eligibilityResponse=_eligibilityResponse;
- (void).cxx_destruct;
- (void)_updateContextUsingWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deviceScoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)_requestBodyWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5 deviceData:(id)arg6 webService:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)initWithEligibilityResponse:(id)arg1;

@end

