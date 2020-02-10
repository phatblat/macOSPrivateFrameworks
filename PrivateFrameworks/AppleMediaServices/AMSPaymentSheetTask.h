//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AKAppleIDAuthenticationContext, AMSPaymentSheetAssetCache, AMSPaymentSheetRequest, AMSPromise, NSObject<OS_dispatch_queue>, _PaymentSheetState;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetTask : AMSTask
{
    id <AMSBagProtocol> _bag;
    AMSPaymentSheetAssetCache *_assetCache;
    AKAppleIDAuthenticationContext *_authenticationContext;
    AMSPromise *_paymentSheetPromise;
    NSObject<OS_dispatch_queue> *_presentationQueue;
    _PaymentSheetState *_state;
    AMSPaymentSheetRequest *_request;
}

@property(retain) AMSPaymentSheetRequest *request; // @synthesize request=_request;
@property(retain) _PaymentSheetState *state; // @synthesize state=_state;
@property(retain) NSObject<OS_dispatch_queue> *presentationQueue; // @synthesize presentationQueue=_presentationQueue;
@property(retain) AMSPromise *paymentSheetPromise; // @synthesize paymentSheetPromise=_paymentSheetPromise;
@property(retain) AKAppleIDAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(retain) AMSPaymentSheetAssetCache *assetCache; // @synthesize assetCache=_assetCache;
@property(retain) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (id)perform;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;

@end
