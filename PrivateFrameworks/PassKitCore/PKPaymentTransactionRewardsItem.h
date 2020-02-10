//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDecimalNumber, NSString, PKCurrencyAmount;

@interface PKPaymentTransactionRewardsItem : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;
    unsigned long long _type;
    unsigned long long _state;
    PKCurrencyAmount *_currencyAmount;
    NSDecimalNumber *_eligibleValue;
    unsigned long long _eligibleValueUnit;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long eligibleValueUnit; // @synthesize eligibleValueUnit=_eligibleValueUnit;
@property(retain, nonatomic) NSDecimalNumber *eligibleValue; // @synthesize eligibleValue=_eligibleValue;
@property(retain, nonatomic) PKCurrencyAmount *currencyAmount; // @synthesize currencyAmount=_currencyAmount;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToRewardsItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (void)_initWithRewardsDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
