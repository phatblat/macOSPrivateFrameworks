//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSDate, NSDecimalNumber, NSNumber, NSString;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_historySequenceNumber;
    unsigned long long _type;
    unsigned long long _subtype;
    unsigned long long _detail;
    NSDate *_time;
    NSDecimalNumber *_balance;
    NSNumber *_loyaltyBalance;
    NSDecimalNumber *_amount;
    NSNumber *_loyaltyAmount;
    NSData *_startStation;
    NSData *_endStation;
    NSString *_transitDetail;
    long long _paymentTransactionType;
    long long _recordType;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long recordType; // @synthesize recordType=_recordType;
@property(readonly, nonatomic) long long paymentTransactionType; // @synthesize paymentTransactionType=_paymentTransactionType;
@property(copy, nonatomic) NSString *transitDetail; // @synthesize transitDetail=_transitDetail;
@property(copy, nonatomic) NSData *endStation; // @synthesize endStation=_endStation;
@property(copy, nonatomic) NSData *startStation; // @synthesize startStation=_startStation;
@property(copy, nonatomic) NSNumber *loyaltyAmount; // @synthesize loyaltyAmount=_loyaltyAmount;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSNumber *loyaltyBalance; // @synthesize loyaltyBalance=_loyaltyBalance;
@property(copy, nonatomic) NSDecimalNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSDate *time; // @synthesize time=_time;
@property(nonatomic) unsigned long long detail; // @synthesize detail=_detail;
@property(nonatomic) unsigned long long subtype; // @synthesize subtype=_subtype;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSNumber *historySequenceNumber; // @synthesize historySequenceNumber=_historySequenceNumber;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setTransactionHistoryDetailsFromString:(id)arg1;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned long long transitTransactionModifier;
@property(readonly, nonatomic) long long transitTransactionSubtype;
- (id)concreteTransactionWithCurrency:(id)arg1;
- (id)felicaHistoryRecord;

@end

