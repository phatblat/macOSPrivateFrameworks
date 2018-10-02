//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBTransferMoneyIntentResponse.h"

@class NSString, _INPBCurrencyAmountValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue;

@interface _INPBTransferMoneyIntentResponse : PBCodable <_INPBTransferMoneyIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBFinancialAccountValue *_toAccount;
    _INPBPaymentAmountValue *_transactionAmount;
    NSString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
    _INPBCurrencyAmountValue *_transferFee;
}

@property(retain, nonatomic) _INPBCurrencyAmountValue *transferFee; // @synthesize transferFee=_transferFee;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(copy, nonatomic) NSString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBFinancialAccountValue *toAccount; // @synthesize toAccount=_toAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // @synthesize fromAccount=_fromAccount;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTransferFee;
@property(readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property(readonly, nonatomic) BOOL hasTransactionNote;
@property(readonly, nonatomic) BOOL hasTransactionAmount;
@property(readonly, nonatomic) BOOL hasToAccount;
@property(readonly, nonatomic) BOOL hasFromAccount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

