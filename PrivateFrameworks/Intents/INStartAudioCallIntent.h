//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INStartAudioCallIntentExport.h"

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>
{
}

+ (id)_ignoredParameters;
- (id)_spotlightContentType;
- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
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
@property(setter=setTTYType:) long long ttyType;
@property long long recordTypeForRedialing;
- (void)setContacts:(id)arg1;
@property(readonly, copy) NSArray *contacts;
@property long long preferredCallProvider;
- (void)setDestinationType:(long long)arg1;
@property(readonly) long long destinationType;
@property long long audioRoute;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)initWithContacts:(id)arg1;
- (void)setUseSpeaker:(BOOL)arg1;
@property(readonly) BOOL useSpeaker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

