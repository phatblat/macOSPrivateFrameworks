//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDate, PKCurrencyAmount, PKPaymentTransactionGroup;

@interface PKSpendingSummary : NSObject <NSSecureCoding>
{
    BOOL _isLoading;
    unsigned long long _summaryType;
    unsigned long long _summaryUnit;
    NSDate *_startDate;
    NSDate *_endDate;
    PKCurrencyAmount *_totalSpending;
    NSArray *_orderedSpendingCategories;
    NSArray *_orderedSpendingPerMerchants;
    PKCurrencyAmount *_previousTotalSpending;
    PKCurrencyAmount *_previousMaxAmount;
    PKPaymentTransactionGroup *_rewards;
    PKPaymentTransactionGroup *_interest;
    PKPaymentTransactionGroup *_payments;
    PKPaymentTransactionGroup *_refunds;
    PKPaymentTransactionGroup *_adjustments;
    NSArray *_spendingsPerCalendarUnit;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *spendingsPerCalendarUnit; // @synthesize spendingsPerCalendarUnit=_spendingsPerCalendarUnit;
@property(retain, nonatomic) PKPaymentTransactionGroup *adjustments; // @synthesize adjustments=_adjustments;
@property(retain, nonatomic) PKPaymentTransactionGroup *refunds; // @synthesize refunds=_refunds;
@property(retain, nonatomic) PKPaymentTransactionGroup *payments; // @synthesize payments=_payments;
@property(retain, nonatomic) PKPaymentTransactionGroup *interest; // @synthesize interest=_interest;
@property(retain, nonatomic) PKPaymentTransactionGroup *rewards; // @synthesize rewards=_rewards;
@property(retain, nonatomic) PKCurrencyAmount *previousMaxAmount; // @synthesize previousMaxAmount=_previousMaxAmount;
@property(retain, nonatomic) PKCurrencyAmount *previousTotalSpending; // @synthesize previousTotalSpending=_previousTotalSpending;
@property(copy, nonatomic) NSArray *orderedSpendingPerMerchants; // @synthesize orderedSpendingPerMerchants=_orderedSpendingPerMerchants;
@property(copy, nonatomic) NSArray *orderedSpendingCategories; // @synthesize orderedSpendingCategories=_orderedSpendingCategories;
@property(retain, nonatomic) PKCurrencyAmount *totalSpending; // @synthesize totalSpending=_totalSpending;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) unsigned long long summaryUnit; // @synthesize summaryUnit=_summaryUnit;
@property(nonatomic) unsigned long long summaryType; // @synthesize summaryType=_summaryType;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

