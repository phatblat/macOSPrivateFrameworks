//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMApplicationStoreDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadAllowAppInstallation;
    NSNumber *_payloadAllowUIAppInstallation;
    NSNumber *_payloadAllowAutomaticAppDownloads;
    NSNumber *_payloadAllowSystemAppRemoval;
    NSNumber *_payloadAllowAppRemoval;
    NSNumber *_payloadAllowInAppPurchases;
    NSNumber *_payloadForceITunesStorePasswordEntry;
}

+ (id)buildWithIdentifier:(id)arg1 withAllowAppInstallation:(id)arg2 withAllowUIAppInstallation:(id)arg3 withAllowAutomaticAppDownloads:(id)arg4 withAllowSystemAppRemoval:(id)arg5 withAllowAppRemoval:(id)arg6 withAllowInAppPurchases:(id)arg7 withForceITunesStorePasswordEntry:(id)arg8;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadForceITunesStorePasswordEntry; // @synthesize payloadForceITunesStorePasswordEntry=_payloadForceITunesStorePasswordEntry;
@property(copy, nonatomic) NSNumber *payloadAllowInAppPurchases; // @synthesize payloadAllowInAppPurchases=_payloadAllowInAppPurchases;
@property(copy, nonatomic) NSNumber *payloadAllowAppRemoval; // @synthesize payloadAllowAppRemoval=_payloadAllowAppRemoval;
@property(copy, nonatomic) NSNumber *payloadAllowSystemAppRemoval; // @synthesize payloadAllowSystemAppRemoval=_payloadAllowSystemAppRemoval;
@property(copy, nonatomic) NSNumber *payloadAllowAutomaticAppDownloads; // @synthesize payloadAllowAutomaticAppDownloads=_payloadAllowAutomaticAppDownloads;
@property(copy, nonatomic) NSNumber *payloadAllowUIAppInstallation; // @synthesize payloadAllowUIAppInstallation=_payloadAllowUIAppInstallation;
@property(copy, nonatomic) NSNumber *payloadAllowAppInstallation; // @synthesize payloadAllowAppInstallation=_payloadAllowAppInstallation;
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

