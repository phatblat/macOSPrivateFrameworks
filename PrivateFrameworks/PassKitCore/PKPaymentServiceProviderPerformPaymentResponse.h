//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformPaymentResponse : PKPaymentWebServiceResponse
{
    PKServiceProviderPurchase *_purchase;
}

@property(readonly, retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

