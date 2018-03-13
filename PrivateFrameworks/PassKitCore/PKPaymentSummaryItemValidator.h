//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPaymentValidating.h"

@class NSString, PKPaymentSummaryItem;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating>
{
    PKPaymentSummaryItem *_item;
}

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)arg1;
@property(readonly, nonatomic) PKPaymentSummaryItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)arg1;
- (id)initWithPaymentSummaryItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

