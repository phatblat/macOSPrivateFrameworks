//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class CEMAccountCardDAVDeclaration_CommunicationServiceRules, NSNumber, NSString;

@interface CEMAccountCardDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCardDAVAccountDescription;
    NSString *_payloadCardDAVHostName;
    NSString *_payloadCardDAVPrincipalURL;
    NSNumber *_payloadCardDAVUseSSL;
    NSNumber *_payloadCardDAVPort;
    CEMAccountCardDAVDeclaration_CommunicationServiceRules *_payloadCommunicationServiceRules;
    NSString *_payloadCardDAVCredentials;
}

+ (id)buildWithIdentifier:(id)arg1 withCardDAVAccountDescription:(id)arg2 withCardDAVHostName:(id)arg3 withCardDAVPrincipalURL:(id)arg4 withCardDAVUseSSL:(id)arg5 withCardDAVPort:(id)arg6 withCommunicationServiceRules:(id)arg7 withCardDAVCredentials:(id)arg8;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadCardDAVCredentials; // @synthesize payloadCardDAVCredentials=_payloadCardDAVCredentials;
@property(copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules; // @synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules;
@property(copy, nonatomic) NSNumber *payloadCardDAVPort; // @synthesize payloadCardDAVPort=_payloadCardDAVPort;
@property(copy, nonatomic) NSNumber *payloadCardDAVUseSSL; // @synthesize payloadCardDAVUseSSL=_payloadCardDAVUseSSL;
@property(copy, nonatomic) NSString *payloadCardDAVPrincipalURL; // @synthesize payloadCardDAVPrincipalURL=_payloadCardDAVPrincipalURL;
@property(copy, nonatomic) NSString *payloadCardDAVHostName; // @synthesize payloadCardDAVHostName=_payloadCardDAVHostName;
@property(copy, nonatomic) NSString *payloadCardDAVAccountDescription; // @synthesize payloadCardDAVAccountDescription=_payloadCardDAVAccountDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
