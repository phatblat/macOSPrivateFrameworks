//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMNetworkVPNDeclaration_OnDemandRulesElementActionParameters : CEMPayloadBase
{
    NSArray *_payloadDomains;
    NSString *_payloadDomainAction;
    NSArray *_payloadRequiredDNSServers;
    NSString *_payloadRequiredURLStringProbe;
}

+ (id)buildRequiredOnlyWithDomains:(id)arg1 withDomainAction:(id)arg2;
+ (id)buildWithDomains:(id)arg1 withDomainAction:(id)arg2 withRequiredDNSServers:(id)arg3 withRequiredURLStringProbe:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadRequiredURLStringProbe; // @synthesize payloadRequiredURLStringProbe=_payloadRequiredURLStringProbe;
@property(copy, nonatomic) NSArray *payloadRequiredDNSServers; // @synthesize payloadRequiredDNSServers=_payloadRequiredDNSServers;
@property(copy, nonatomic) NSString *payloadDomainAction; // @synthesize payloadDomainAction=_payloadDomainAction;
@property(copy, nonatomic) NSArray *payloadDomains; // @synthesize payloadDomains=_payloadDomains;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end
