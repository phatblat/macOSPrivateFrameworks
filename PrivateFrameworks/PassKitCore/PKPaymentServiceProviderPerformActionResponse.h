//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse
{
    PKServiceProviderPurchase *_updatedPurchase;
}

@property(readonly, retain, nonatomic) PKServiceProviderPurchase *updatedPurchase; // @synthesize updatedPurchase=_updatedPurchase;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

