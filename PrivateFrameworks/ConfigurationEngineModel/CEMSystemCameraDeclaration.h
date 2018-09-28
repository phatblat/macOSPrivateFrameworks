//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMSystemCameraDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowCamera;
    NSNumber *_payloadAllowScreenShot;
    NSNumber *_payloadAllowScreenRecording;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowCamera:(id)arg2 withAllowScreenShot:(id)arg3 withAllowScreenRecording:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowScreenRecording; // @synthesize payloadAllowScreenRecording=_payloadAllowScreenRecording;
@property(copy, nonatomic) NSNumber *payloadAllowScreenShot; // @synthesize payloadAllowScreenShot=_payloadAllowScreenShot;
@property(copy, nonatomic) NSNumber *payloadAllowCamera; // @synthesize payloadAllowCamera=_payloadAllowCamera;
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

