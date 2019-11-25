//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPassContent.h>

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding>
{
    BOOL _supportsTransitOnly;
    NSString *_cobrandName;
    NSURL *_transactionServiceURL;
    NSURL *_transactionServiceRegistrationURL;
    NSString *_transactionPushTopic;
    NSURL *_messageServiceURL;
    NSString *_messagePushTopic;
    NSString *_appURLScheme;
    NSDictionary *_localizedSuspendedReasonsByAID;
    NSArray *_availableActions;
    NSArray *_upgradeRequests;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *upgradeRequests; // @synthesize upgradeRequests=_upgradeRequests;
@property(copy, nonatomic) NSArray *availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) BOOL supportsTransitOnly; // @synthesize supportsTransitOnly=_supportsTransitOnly;
@property(copy, nonatomic) NSDictionary *localizedSuspendedReasonsByAID; // @synthesize localizedSuspendedReasonsByAID=_localizedSuspendedReasonsByAID;
@property(copy, nonatomic) NSString *appURLScheme; // @synthesize appURLScheme=_appURLScheme;
@property(copy, nonatomic) NSString *messagePushTopic; // @synthesize messagePushTopic=_messagePushTopic;
@property(copy, nonatomic) NSURL *messageServiceURL; // @synthesize messageServiceURL=_messageServiceURL;
@property(copy, nonatomic) NSString *transactionPushTopic; // @synthesize transactionPushTopic=_transactionPushTopic;
@property(copy, nonatomic) NSURL *transactionServiceRegistrationURL; // @synthesize transactionServiceRegistrationURL=_transactionServiceRegistrationURL;
@property(copy, nonatomic) NSURL *transactionServiceURL; // @synthesize transactionServiceURL=_transactionServiceURL;
@property(copy, nonatomic) NSString *cobrandName; // @synthesize cobrandName=_cobrandName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;

@end

