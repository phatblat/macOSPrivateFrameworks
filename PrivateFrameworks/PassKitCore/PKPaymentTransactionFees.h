//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PKCloudStoreCoding.h"

@class NSSet;

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    NSSet *_fees;
}

+ (id)_feesSetFromJsonString:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSSet *fees; // @synthesize fees=_fees;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToFees:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordTypesAndNames;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (id)initWithJsonString:(id)arg1;
- (id)initWithFeeItems:(id)arg1;

@end
