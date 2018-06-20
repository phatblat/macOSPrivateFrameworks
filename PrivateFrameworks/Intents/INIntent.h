//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "INGenericIntent.h"
#import "INImageProxyInjecting.h"
#import "INIntentExport.h"
#import "INIntentSlotComposing.h"
#import "INKeyImageProducing.h"
#import "INRuntimeObject.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class INImage, NSArray, NSDictionary, NSMutableDictionary, NSOrderedSet, NSString, PBCodable, _INPBIntentMetadata;

@interface INIntent : NSObject <INImageProxyInjecting, INIntentSlotComposing, INKeyImageProducing, INIntentExport, INGenericIntent, INRuntimeObject, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_intentInstanceDescriptionMapping;
    NSArray *_parameterImages;
    NSDictionary *_parameterCombinations;
    NSString *_identifier;
    PBCodable *_backingStore;
    NSArray *_airPlayRouteIds;
}

+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;
+ (id)typeName;
+ (void)initialize;
+ (id)_ignoredParameters;
@property(retain, nonatomic, setter=_setAirPlayRouteIds:) NSArray *airPlayRouteIds; // @synthesize airPlayRouteIds=_airPlayRouteIds;
@property(copy, nonatomic) PBCodable *backingStore; // @synthesize backingStore=_backingStore;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic, setter=_setParameterCombinations:) NSDictionary *_parameterCombinations; // @synthesize _parameterCombinations;
- (void).cxx_destruct;
- (BOOL)configureAttributeSet:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *_associatedImageAttributes;
@property(readonly, nonatomic) NSOrderedSet *_displayOrderedAttributes;
@property(readonly, nonatomic) NSArray *_codableAttributes;
- (id)_inCodable;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (id)_baseClassName;
- (id)_className;
- (id)_intentInstanceDescription;
- (BOOL)isGenericIntent;
@property(copy) NSDictionary *parametersByName;
@property(copy) NSString *verb;
@property(copy) NSString *domain;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)_typedBackingStore;
- (id)protoData;
- (id)_impl;
- (id)_dictionaryRepresentation;
@property(readonly, copy) NSString *debugDescription;
- (id)_redactedDictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(id)arg2;
@property(nonatomic, getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:) BOOL _userConfirmationRequired;
@property(readonly, nonatomic) long long _type;
- (id)_emptyCopy;
- (id)_nonNilParameters;
@property(readonly, nonatomic) BOOL _supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
@property(readonly, nonatomic) NSDictionary *_validParameterCombinations;
@property(copy, nonatomic, getter=_parameterImages, setter=_setParameterImages:) NSArray *parameterImages;
- (id)_imageForParameter:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (id)keyImage;
- (id)imageForParameterNamed:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
@property(readonly, copy) NSString *intentDescription;
@property(copy) NSString *suggestedInvocationPhrase;
@property(readonly, nonatomic) long long triggerMethod;
@property(nonatomic, setter=_setExecutionContext:) long long _executionContext;
@property(retain, nonatomic, setter=_setNanoLaunchId:) NSString *_nanoLaunchId;
@property(retain, nonatomic, setter=_setExtensionBundleId:) NSString *extensionBundleId;
@property(retain, nonatomic, setter=_setLaunchId:) NSString *launchId;
- (void)_setCategoryVerb:(id)arg1;
@property(readonly, nonatomic) NSString *_categoryVerb;
- (void)_setIntentCategory:(long long)arg1;
@property(readonly, nonatomic) long long _intentCategory;
@property(readonly, nonatomic) NSString *intentId;
@property(readonly, nonatomic) NSString *utteranceString;
@property(retain, nonatomic, setter=_setMetadata:) _INPBIntentMetadata *_metadata;
@property(readonly, nonatomic) NSString *typeName;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 error:(id *)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)init;
- (void)_injectProxiesForImages:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) long long _intents_toggleState;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)intentSlotDescriptions;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
@property(readonly, copy) NSString *_localizedVerb;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_subtitleForLanguage:(id)arg1;
@property(readonly, copy) NSString *_subtitle;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleForLanguage:(id)arg1;
@property(readonly, copy) NSString *_title;
@property(readonly) BOOL _hasTitle;
- (id)intentSummaryForLanguage:(id)arg1;
@property(readonly, copy) NSString *intentSummary;
- (id)nameForLanguage:(id)arg1;
@property(readonly, copy) NSString *name;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_launchIdForCurrentPlatform;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
@property(readonly) INImage *_keyImage;
- (id)_keyImageWithCustomCodableStrategy;
- (id)_keyImageWithIntentDescriptionStrategy;

// Remaining properties
@property(readonly) Class superclass;

@end

