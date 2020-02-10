//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKit/HMAccessoryProfile.h>

#import "_HMNetworkConfigurationProfileDelegate.h"

@class HMAccessoryNetworkAccessViolation, NSArray, NSString;

@interface HMNetworkConfigurationProfile : HMAccessoryProfile <_HMNetworkConfigurationProfileDelegate>
{
    id <HMNetworkConfigurationProfileDelegate> _delegate;
}

@property(nonatomic) __weak id <HMNetworkConfigurationProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkConfigurationProfileDidUpdateWiFiCredentialType:(id)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(id)arg1;
- (void)networkConfigurationProfileDidUpdateAccessViolation:(id)arg1;
- (void)networkConfigurationProfileDidUpdateAllowedHosts:(id)arg1;
- (void)networkConfigurationProfileDidUpdateNetworkAccessMode:(id)arg1;
- (void)networkConfigurationProfileDidUpdateProtectionMode:(id)arg1;
@property(readonly, nonatomic, getter=isNetworkAccessRestricted) BOOL networkAccessRestricted;
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateProtectionMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
@property(readonly) long long credentialType;
@property(readonly) BOOL supportsWiFiReconfiguration;
@property(readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property(readonly) NSArray *allowedHosts;
@property(readonly) long long targetProtectionMode;
@property(readonly) long long currentProtectionMode;
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(BOOL)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(BOOL)arg7 credentialType:(long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
