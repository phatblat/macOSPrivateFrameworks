//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@protocol _INPBPayBillIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property(readonly, nonatomic) BOOL hasTransactionNote;
@property(retain, nonatomic) _INPBString *transactionNote;
@property(readonly, nonatomic) BOOL hasTransactionAmount;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasFromAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@property(readonly, nonatomic) BOOL hasDueDate;
@property(retain, nonatomic) _INPBDateTimeRange *dueDate;
@property(nonatomic) BOOL hasBillType;
@property(nonatomic) int billType;
@property(readonly, nonatomic) BOOL hasBillPayee;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee;
- (int)StringAsBillType:(NSString *)arg1;
- (NSString *)billTypeAsString:(int)arg1;
@end

