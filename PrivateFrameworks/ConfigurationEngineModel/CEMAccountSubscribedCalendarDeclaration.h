//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMAccountSubscribedCalendarDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadSubCalAccountDescription;
    NSString *_payloadSubCalAccountHostName;
    NSNumber *_payloadSubCalAccountUseSSL;
    NSString *_payloadSubCalAccountCredentials;
}

+ (id)buildWithIdentifier:(id)arg1 withSubCalAccountDescription:(id)arg2 withSubCalAccountHostName:(id)arg3 withSubCalAccountUseSSL:(id)arg4 withSubCalAccountCredentials:(id)arg5;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSString *payloadSubCalAccountCredentials; // @synthesize payloadSubCalAccountCredentials=_payloadSubCalAccountCredentials;
@property(copy, nonatomic) NSNumber *payloadSubCalAccountUseSSL; // @synthesize payloadSubCalAccountUseSSL=_payloadSubCalAccountUseSSL;
@property(copy, nonatomic) NSString *payloadSubCalAccountHostName; // @synthesize payloadSubCalAccountHostName=_payloadSubCalAccountHostName;
@property(copy, nonatomic) NSString *payloadSubCalAccountDescription; // @synthesize payloadSubCalAccountDescription=_payloadSubCalAccountDescription;
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
