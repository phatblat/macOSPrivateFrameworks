//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _CKPurchaseQueueDelegateWrapper;

@interface CKPurchaseQueue : NSObject
{
    NSMutableArray *_transactions;
    NSString *_identifier;
    NSArray *_transactions;
    _CKPurchaseQueueDelegateWrapper *_delegateWrapper;
}

+ (id)purchaseQueueForIdentifier:(id)arg1;
+ (void)_resumeTransactionWithResumeData:(id)arg1 storeResponse:(id)arg2;
+ (void)_cancelTransactionWithResumeData:(id)arg1;
@property(retain) _CKPurchaseQueueDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(readonly) NSArray *transactions; // @synthesize transactions=_transactions;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)cancelTransactionGroup:(id)arg1;
- (void)cancelTransaction:(id)arg1;
- (id)addPurchases:(id)arg1;
- (id)addPurchase:(id)arg1;
- (void)removeTransactionObserver:(id)arg1;
- (id)addTransactionObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDialogContext:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
@property(readonly) NSArray *transactions;
- (void)_updateTransactions:(id)arg1;

@end

