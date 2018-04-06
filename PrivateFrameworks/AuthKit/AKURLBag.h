//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface AKURLBag : NSObject
{
    id <AKURLBagDictionaryProvider> _bagProvider;
}

+ (id)_requestEnvironmentsWithBag:(id)arg1;
+ (unsigned long long)_IDMSEnvironmentFromString:(id)arg1;
+ (unsigned long long)IDMSEnvironmentFromBag:(id)arg1;
+ (BOOL)looksLikeiForgotURLKey:(id)arg1;
+ (id)keyForEscapeHatchURL;
+ (id)sharedBag;
@property(retain, nonatomic) id <AKURLBagDictionaryProvider> bagProvider; // @synthesize bagProvider=_bagProvider;
- (void).cxx_destruct;
- (void)_fetchURLBagWithCompletion:(CDUnknownBlockType)arg1;
- (id)_urlBag:(id *)arg1;
- (id)_requestConfigurationsWithError:(id *)arg1;
- (id)_requestEnvironmentsWithError:(id *)arg1;
- (id)_requestNewURLBagIfNecessaryWithError:(id *)arg1;
- (id)_urlAtKey:(id)arg1;
- (id)urlAtKey:(id)arg1;
- (BOOL)requestNewURLBagIfNecessaryWithError:(id *)arg1;
- (void)requestNewURLBagIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)configurationAtKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property(readonly, nonatomic) unsigned long long IDMSEnvironment;
@property(readonly, nonatomic) NSString *APSEnvironment;
@property(readonly, nonatomic, getter=isPhoneNumberSupportedConfig) BOOL phoneNumberSupportedConfig;
@property(readonly, nonatomic) NSURL *storeModernRecoveryURL;
@property(readonly, nonatomic) NSURL *fetchUserInfoURL;
@property(readonly, nonatomic) NSURL *fetchFollowUps;
@property(readonly, nonatomic) NSURL *circleURL;
@property(readonly, nonatomic) NSURL *renewRecoveryTokenURL;
@property(readonly, nonatomic) NSURL *validateVettingTokenURL;
@property(readonly, nonatomic) NSURL *changePasswordURL;
@property(readonly, nonatomic) NSURL *fetchConfigDataURL;
@property(readonly, nonatomic) NSURL *configurationInfoURL;
@property(readonly, nonatomic) NSURL *tokenUpgradeURL;
@property(readonly, nonatomic) NSURL *absintheSessionURL;
@property(readonly, nonatomic) NSURL *absintheCertURL;
@property(readonly, nonatomic) NSURL *trustedDevicesSummaryURL;
@property(readonly, nonatomic) NSURL *trustedDevicesURL;
@property(readonly, nonatomic) NSURL *deviceListURL;
@property(readonly, nonatomic) NSURL *createAppleIDURL;
@property(readonly, nonatomic) NSURL *iForgotContinuationURL;
@property(readonly, nonatomic) NSURL *iForgotURL;
@property(readonly, nonatomic) NSURL *notificationAckURL;
@property(readonly, nonatomic) NSURL *checkInURL;
@property(readonly, nonatomic) NSURL *escapeHatchURL;
@property(readonly, nonatomic) NSURL *validateCodeURL;
@property(readonly, nonatomic) NSURL *upgradeUIURL;
@property(readonly, nonatomic) NSURL *upgradeEligibilityCheckURL;
@property(readonly, nonatomic) NSURL *syncAnisetteURL;
@property(readonly, nonatomic) NSURL *endProvisioningURL;
@property(readonly, nonatomic) NSURL *startProvisioningURL;
@property(readonly, nonatomic) NSURL *basicAuthURL;

@end
