//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSSet, NSString, NSURL, PKAccountAdditionalPushTopics, PKAccountDetails, PKCreditAccountDetails;

@interface PKAccount : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _blockNotifications;
    BOOL _accountStateDirty;
    NSString *_accountIdentifier;
    NSURL *_accountBaseURL;
    unsigned long long _feature;
    unsigned long long _type;
    PKAccountDetails *_details;
    unsigned long long _state;
    unsigned long long _stateReason;
    unsigned long long _accessLevel;
    NSSet *_supportedFeatures;
    PKAccountAdditionalPushTopics *_additionalPushTopics;
    NSDate *_lastUpdated;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(nonatomic) BOOL accountStateDirty; // @synthesize accountStateDirty=_accountStateDirty;
@property(retain, nonatomic) PKAccountAdditionalPushTopics *additionalPushTopics; // @synthesize additionalPushTopics=_additionalPushTopics;
@property(copy, nonatomic) NSSet *supportedFeatures; // @synthesize supportedFeatures=_supportedFeatures;
@property(nonatomic) BOOL blockNotifications; // @synthesize blockNotifications=_blockNotifications;
@property(nonatomic) unsigned long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property(nonatomic) unsigned long long stateReason; // @synthesize stateReason=_stateReason;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) PKAccountDetails *details; // @synthesize details=_details;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSURL *accountBaseURL; // @synthesize accountBaseURL=_accountBaseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (BOOL)supportsExtendedFetch;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isContentEqualToAccount:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) PKCreditAccountDetails *creditDetails;
- (id)associatedPassUniqueID;
- (id)initWithDictionary:(id)arg1;
- (id)_featureWithIdentifier:(id)arg1;
- (id)provisioningAllowedFeatureDescriptor;
- (BOOL)provisioningAllowed;
- (id)showVirtualCardFeatureDescriptor;
- (BOOL)supportsShowVirtualCard;
- (id)addFundingSourceFeatureDescriptor;
- (BOOL)supportsAddFundingSource;
- (id)showAccountSummaryFeatureDescriptor;
- (BOOL)supportsShowAccountSummary;
- (id)showNotificationsFeatureDescriptor;
- (BOOL)supportsShowNotifications;
- (id)redeemRewardsFeatureDescriptor;
- (BOOL)supportsRedeemRewards;
- (id)requestPhysicalCardFeatureDescriptor;
- (BOOL)supportsRequestPhysicalCard;
- (id)exportTransactionDataFeatureDescriptor;
- (BOOL)supportsExportTransactionData;
- (id)requestStatementFeatureDescriptor;
- (BOOL)supportsRequestStatement;
- (id)viewStatementFeatureDescriptor;
- (BOOL)supportsViewStatement;
- (id)scheduleRecurringPaymentsFeatureDescriptor;
- (BOOL)supportsScheduleRecurringPayments;
- (id)schedulePaymentFeatureDescriptor;
- (BOOL)supportsSchedulePayment;

@end

