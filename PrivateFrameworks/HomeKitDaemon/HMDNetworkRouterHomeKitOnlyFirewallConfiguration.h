//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleConfiguration.h>

@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration
{
    BOOL _isFiltered;
    BOOL _useFallbackForRTP;
    BOOL _useFallbackForHDS;
    BOOL _useFallbackForAirPlay2;
}

+ (id)fallbackConfigurationForRuleset:(id)arg1;
+ (id)fallbackIdentifier;
- (id)description;
- (id)initWithAccessory:(id)arg1 sourceConfiguration:(id)arg2;

@end
