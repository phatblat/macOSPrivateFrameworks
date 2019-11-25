//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INStartCallIntentExport.h"

@class NSArray, NSString;

@interface INStartCallIntent : INIntent <INStartCallIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (BOOL)_supportsBackgroundExecution;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setCallCapability:(long long)arg1;
@property(readonly) long long callCapability;
@property(setter=setTTYType:) long long ttyType;
- (void)setRecordTypeForRedialing:(long long)arg1;
@property(readonly) long long recordTypeForRedialing;
- (void)setContacts:(id)arg1;
@property(readonly, copy) NSArray *contacts;
@property long long preferredCallProvider;
- (void)setDestinationType:(long long)arg1;
@property(readonly) long long destinationType;
- (void)setAudioRoute:(long long)arg1;
@property(readonly) long long audioRoute;
- (id)_emptyCopy;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

