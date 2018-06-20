//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INCacheableContainer.h"
#import "INGenericIntentResponse.h"
#import "INImageProxyInjecting.h"
#import "INIntentResponseExport.h"
#import "INIntentSlotComposing.h"
#import "INRuntimeObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INIntentResponseCodableCode, INIntentResponseDescription, NSDictionary, NSString, NSUserActivity, PBCodable, _INPBIntentResponse;

@interface INIntentResponse : NSObject <INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding>
{
    BOOL __userConfirmationRequired;
    long long _code;
    _INPBIntentResponse *_backingStore;
    PBCodable *_responseMessagePBRepresentation;
    NSUserActivity *_userActivity;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (BOOL)_appLaunchRequestedFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
@property(readonly, nonatomic) BOOL _userConfirmationRequired; // @synthesize _userConfirmationRequired=__userConfirmationRequired;
@property(copy) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)_inCodable;
@property(retain, nonatomic, setter=_setResponseMessagePBRepresentation:) PBCodable *_responseMessagePBRepresentation; // @synthesize _responseMessagePBRepresentation;
@property(copy) NSDictionary *propertiesByName;
- (id)initWithPropertiesByName:(id)arg1;
- (id)protoData;
- (id)_impl;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(nonatomic, setter=_setRequiresProtectedData:) BOOL _requiresProtectedData;
@property(nonatomic, setter=_setRequiresAuthentication:) BOOL _requiresAuthentication;
@property(readonly, nonatomic) long long _type;
@property(readonly, nonatomic) NSString *_className;
@property(readonly, nonatomic) BOOL _shouldForwardIntentToApp;
@property(readonly, nonatomic) INIntentResponseDescription *_instanceDescription;
@property(readonly, nonatomic) INIntentResponseCodableCode *_intentResponseCodableCode;
@property(readonly, nonatomic) long long _intentResponseCode;
- (long long)_intentHandlingStatus;
@property(retain, nonatomic, setter=_setPayloadResponseTypeName:) NSString *_payloadResponseTypeName;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (id)_payloadResponseMessageData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) BOOL shouldOpenContainingApplication;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore; // @synthesize backingStore=_backingStore;
- (long long)_code;
- (void)_setCode:(long long)arg1;
- (void)_commonInit;
- (id)initWithBackingStore:(id)arg1;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)intentSlotDescriptions;
@property(readonly) long long _intents_toggleState;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2;
- (id)_responseTemplateForLanguage:(id)arg1;
@property(readonly, nonatomic, getter=_isSuccess) BOOL _success;
- (id)_originatingBundleIdentifier;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

