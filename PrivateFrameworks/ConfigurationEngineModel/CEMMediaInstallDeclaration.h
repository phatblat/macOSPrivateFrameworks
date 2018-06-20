//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMMediaInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadMedia;
    NSNumber *_payloadMandatory;
    NSNumber *_payloadInstallWhenActivated;
    NSNumber *_payloadRemoveWhenDeactivated;
}

+ (id)buildWithIdentifier:(id)arg1 withMedia:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated; // @synthesize payloadRemoveWhenDeactivated=_payloadRemoveWhenDeactivated;
@property(copy, nonatomic) NSNumber *payloadInstallWhenActivated; // @synthesize payloadInstallWhenActivated=_payloadInstallWhenActivated;
@property(copy, nonatomic) NSNumber *payloadMandatory; // @synthesize payloadMandatory=_payloadMandatory;
@property(copy, nonatomic) NSString *payloadMedia; // @synthesize payloadMedia=_payloadMedia;
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

