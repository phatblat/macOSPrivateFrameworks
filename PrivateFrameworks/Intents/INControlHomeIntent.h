//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INControlHomeIntentExport.h"

@class INDateComponentsRange, INHomeUserTask, NSArray, NSString;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (void)setContents:(id)arg1;
@property(readonly, copy) NSArray *contents;
- (id)initWithContents:(id)arg1;
- (void)setTime:(id)arg1;
@property(readonly, copy) INDateComponentsRange *time;
- (void)setFilters:(id)arg1;
@property(readonly, copy) NSArray *filters;
- (void)setUserTask:(id)arg1;
@property(readonly, copy) INHomeUserTask *userTask;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3;
- (id)_categoryVerb;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (BOOL)_hasTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

