//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSSet;

@interface AMSAcknowledgePrivacyTask : AMSTask
{
    ACAccount *_account;
    NSSet *_privacyIdentifiers;
}

+ (id)_storePrivacyIdentifiers;
+ (id)_multiplexPrivacyIdentifier:(id)arg1 contentVersion:(unsigned long long)arg2;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)arg1;
+ (id)_accountStoreForPrivacyIdentifier:(id)arg1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)arg1;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg1 account:(id)arg2;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)arg1;
@property(copy) NSSet *privacyIdentifiers; // @synthesize privacyIdentifiers=_privacyIdentifiers;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifiers:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifier:(id)arg1 account:(id)arg2;
- (id)initWithPrivacyIdentifiers:(id)arg1;
- (id)initWithPrivacyIdentifier:(id)arg1;

@end

