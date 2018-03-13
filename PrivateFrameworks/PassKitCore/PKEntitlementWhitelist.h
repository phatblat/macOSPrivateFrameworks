//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface PKEntitlementWhitelist : NSObject
{
    BOOL _passesAllAccess;
    BOOL _passesAddSilently;
    BOOL _passPresentationSuppression;
    BOOL _paymentAllAccess;
    BOOL _paymentConfiguration;
    BOOL _paymentPresentation;
    BOOL _inAppPayments;
    BOOL _inAppPaymentsPrivate;
    BOOL _webPayments;
    BOOL _winterpegPayments;
    BOOL _cardOnFilePayments;
    BOOL _trustedDeviceEnrollmentInfo;
    BOOL _peerPaymentAllAccess;
    BOOL _addSilently;
    int _processIdentifier;
    NSString *_applicationID;
    NSArray *_merchantIdentifiers;
    NSArray *_teamIDs;
    NSArray *_passTypeIDs;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) int processIdentifier; // @synthesize processIdentifier=_processIdentifier;
@property BOOL addSilently; // @synthesize addSilently=_addSilently;
@property(copy) NSArray *passTypeIDs; // @synthesize passTypeIDs=_passTypeIDs;
@property(copy) NSArray *teamIDs; // @synthesize teamIDs=_teamIDs;
@property(readonly, copy) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property(readonly, copy) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly) BOOL peerPaymentAllAccess; // @synthesize peerPaymentAllAccess=_peerPaymentAllAccess;
@property(readonly) BOOL trustedDeviceEnrollmentInfo; // @synthesize trustedDeviceEnrollmentInfo=_trustedDeviceEnrollmentInfo;
@property(readonly) BOOL cardOnFilePayments; // @synthesize cardOnFilePayments=_cardOnFilePayments;
@property(readonly) BOOL winterpegPayments; // @synthesize winterpegPayments=_winterpegPayments;
@property(readonly) BOOL webPayments; // @synthesize webPayments=_webPayments;
@property(readonly) BOOL inAppPaymentsPrivate; // @synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate;
@property(readonly) BOOL inAppPayments; // @synthesize inAppPayments=_inAppPayments;
@property(readonly) BOOL paymentPresentation; // @synthesize paymentPresentation=_paymentPresentation;
@property(readonly) BOOL paymentConfiguration; // @synthesize paymentConfiguration=_paymentConfiguration;
@property(readonly) BOOL paymentAllAccess; // @synthesize paymentAllAccess=_paymentAllAccess;
@property(readonly) BOOL passPresentationSuppression; // @synthesize passPresentationSuppression=_passPresentationSuppression;
@property(readonly) BOOL passesAddSilently; // @synthesize passesAddSilently=_passesAddSilently;
@property(readonly) BOOL passesAllAccess; // @synthesize passesAllAccess=_passesAllAccess;
- (void).cxx_destruct;
- (void)_probeEntitlementsWithConnection:(id)arg1;
- (BOOL)isEntitledForPaymentRequest:(id)arg1;
- (BOOL)supportsWebPayments;
@property(readonly) BOOL allAccess;
- (id)initWithConnection:(id)arg1;

@end

