//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBPayBillIntent.h"

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntent : PBCodable <_INPBPayBillIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int billType:1;
    } _has;
    int _billType;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTimeRange *_dueDate;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBPaymentAmountValue *_transactionAmount;
    _INPBString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
}

@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(retain, nonatomic) _INPBString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // @synthesize fromAccount=_fromAccount;
@property(retain, nonatomic) _INPBDateTimeRange *dueDate; // @synthesize dueDate=_dueDate;
@property(nonatomic) int billType; // @synthesize billType=_billType;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property(readonly, nonatomic) BOOL hasTransactionNote;
@property(readonly, nonatomic) BOOL hasTransactionAmount;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(readonly, nonatomic) BOOL hasFromAccount;
@property(readonly, nonatomic) BOOL hasDueDate;
- (int)StringAsBillType:(id)arg1;
- (id)billTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasBillType;
@property(readonly, nonatomic) BOOL hasBillPayee;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

