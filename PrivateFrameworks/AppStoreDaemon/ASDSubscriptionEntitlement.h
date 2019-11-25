//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@interface ASDSubscriptionEntitlement : NSObject <NSSecureCoding>
{
    NSDictionary *_dictionary;
    unsigned long long _segment;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_valueForKey:(id)arg1 ofType:(Class)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *vendorID;
@property(readonly, copy) NSNumber *quantity;
@property(readonly) unsigned long long segment;
@property(readonly, copy) NSNumber *purchaseDownloadID;
@property(readonly, copy) NSNumber *purchasabilityType;
@property(readonly, copy) NSNumber *originalPurchaseDownloadID;
@property(readonly, copy) NSString *offerID;
@property(readonly, getter=isNewsAppPurchase) BOOL newsAppPurchase;
@property(readonly) BOOL isPurchaser;
@property(readonly) BOOL isOfferPeriod;
@property(readonly) BOOL isTrialPeriod;
@property(readonly, copy) NSString *inAppVersion;
@property(readonly, copy) NSNumber *inAppAdamID;
@property(readonly, copy) NSNumber *familyID;
@property(readonly, copy) NSDate *expiryDate;
@property(readonly, copy) NSNumber *chargeStoreFrontID;
@property(readonly, copy) NSString *chargeCurrencyCode;
@property(readonly, copy) NSString *chargeCountryCode;
@property(readonly) BOOL autoRenewEnabled;
@property(readonly, copy) NSNumber *appVersion;
@property(readonly, copy) NSNumber *appAdamID;
- (id)initWithDictionary:(id)arg1 forAppAdamID:(id)arg2 segment:(unsigned long long)arg3;

@end

