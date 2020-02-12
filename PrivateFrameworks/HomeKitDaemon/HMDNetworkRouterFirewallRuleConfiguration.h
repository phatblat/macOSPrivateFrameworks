//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>
{
    BOOL _fullAccessLAN;
    BOOL _fullAccessWAN;
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;
    NSDate *_lastModifiedTime;
    NSArray *_lanRules;
    NSArray *_wanRules;
}

+ (id)__decodeRulesFromNetworkDeclarations:(struct NSDictionary *)arg1 key:(id)arg2 class:(Class)arg3 required:(BOOL)arg4;
+ (BOOL)__decodeFullAccessFromNetworkDeclarations:(struct NSDictionary *)arg1 key:(id)arg2 fullAccess:(char *)arg3;
+ (BOOL)__decodeNetworkDeclarationsFromJSONDictionary:(struct NSDictionary *)arg1 networkDeclarations:(struct NSDictionary **)arg2;
+ (id)logCategory;
@property(readonly, nonatomic, getter=hasFullAccessToWAN) BOOL fullAccessWAN; // @synthesize fullAccessWAN=_fullAccessWAN;
@property(readonly, nonatomic) NSArray *wanRules; // @synthesize wanRules=_wanRules;
@property(readonly, nonatomic, getter=hasFullAccessToLAN) BOOL fullAccessLAN; // @synthesize fullAccessLAN=_fullAccessLAN;
@property(readonly, nonatomic) NSArray *lanRules; // @synthesize lanRules=_lanRules;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(struct NSDictionary *)arg2;
- (id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(BOOL)arg3 lanRules:(id)arg4 fullAccessWAN:(BOOL)arg5 wanRules:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

