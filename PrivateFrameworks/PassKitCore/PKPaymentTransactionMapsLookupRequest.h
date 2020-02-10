//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, PKPaymentApplication, PKPaymentTransaction;

@interface PKPaymentTransactionMapsLookupRequest : NSObject
{
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _clearingAttempt;
}

@property(nonatomic, getter=isClearingAttempt) BOOL clearingAttempt; // @synthesize clearingAttempt=_clearingAttempt;
- (void).cxx_destruct;
- (id)_brandFromMapItem:(id)arg1;
- (id)_merchantFromMapItem:(id)arg1;
- (id)_merchantLookupRequest;
- (void)startLookupWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2;

@end
