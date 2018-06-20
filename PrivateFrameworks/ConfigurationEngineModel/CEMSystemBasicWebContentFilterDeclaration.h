//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSNumber, NSString;

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadRestrictWeb;
    NSNumber *_payloadUseContentFilter;
    NSNumber *_payloadWhiteListEnabled;
    NSArray *_payloadSiteWhiteList;
    NSArray *_payloadFilterWhiteList;
    NSArray *_payloadFilterBlackList;
}

+ (id)buildWithIdentifier:(id)arg1 withRestrictWeb:(id)arg2 withUseContentFilter:(id)arg3 withWhiteListEnabled:(id)arg4 withSiteWhiteList:(id)arg5 withFilterWhiteList:(id)arg6 withFilterBlackList:(id)arg7;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadFilterBlackList; // @synthesize payloadFilterBlackList=_payloadFilterBlackList;
@property(copy, nonatomic) NSArray *payloadFilterWhiteList; // @synthesize payloadFilterWhiteList=_payloadFilterWhiteList;
@property(copy, nonatomic) NSArray *payloadSiteWhiteList; // @synthesize payloadSiteWhiteList=_payloadSiteWhiteList;
@property(copy, nonatomic) NSNumber *payloadWhiteListEnabled; // @synthesize payloadWhiteListEnabled=_payloadWhiteListEnabled;
@property(copy, nonatomic) NSNumber *payloadUseContentFilter; // @synthesize payloadUseContentFilter=_payloadUseContentFilter;
@property(copy, nonatomic) NSNumber *payloadRestrictWeb; // @synthesize payloadRestrictWeb=_payloadRestrictWeb;
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
