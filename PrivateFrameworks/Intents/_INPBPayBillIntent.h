//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class PBUnknownFields, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBIntentMetadata, _INPBPaymentAmountValue, _INPBString;

@interface _INPBPayBillIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBBillPayeeValue *_billPayee;
    int _billType;
    _INPBDateTimeRange *_dueDate;
    _INPBFinancialAccountValue *_fromAccount;
    _INPBIntentMetadata *_intentMetadata;
    _INPBPaymentAmountValue *_transactionAmount;
    _INPBString *_transactionNote;
    _INPBDateTimeRange *_transactionScheduledDate;
    struct {
        unsigned int billType:1;
    } _has;
}

+ (id)options;
@property(retain, nonatomic) _INPBDateTimeRange *dueDate; // @synthesize dueDate=_dueDate;
@property(retain, nonatomic) _INPBString *transactionNote; // @synthesize transactionNote=_transactionNote;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate; // @synthesize transactionScheduledDate=_transactionScheduledDate;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount; // @synthesize transactionAmount=_transactionAmount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount; // @synthesize fromAccount=_fromAccount;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDueDate;
- (int)StringAsBillType:(id)arg1;
- (id)billTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasBillType;
@property(nonatomic) int billType; // @synthesize billType=_billType;
@property(readonly, nonatomic) BOOL hasTransactionNote;
@property(readonly, nonatomic) BOOL hasTransactionScheduledDate;
@property(readonly, nonatomic) BOOL hasTransactionAmount;
@property(readonly, nonatomic) BOOL hasFromAccount;
@property(readonly, nonatomic) BOOL hasBillPayee;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end

