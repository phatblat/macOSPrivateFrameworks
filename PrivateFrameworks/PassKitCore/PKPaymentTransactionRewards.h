//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "PKCloudStoreCoding.h"

@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying>
{
    NSArray *_rewardsItems;
}

+ (id)_rewardsItemsSetFromJsonString:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSArray *rewardsItems; // @synthesize rewardsItems=_rewardsItems;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToRewards:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNames;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)jsonString;
- (id)jsonArrayRepresentation;
- (id)initWithJsonString:(id)arg1;
- (id)initWithRewardsItems:(id)arg1;

@end
