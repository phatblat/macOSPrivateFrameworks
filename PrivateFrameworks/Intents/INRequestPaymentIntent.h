//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import "INRequestPaymentIntentExport.h"

@class INCurrencyAmount, INPerson, NSString;

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>
{
}

- (BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2;
- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (BOOL)_isUserConfirmationRequired;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setNote:(id)arg1;
@property(readonly, copy) NSString *note;
- (void)setCurrencyAmount:(id)arg1;
@property(readonly, copy) INCurrencyAmount *currencyAmount;
- (void)setPayer:(id)arg1;
@property(readonly, copy) INPerson *payer;
- (id)initWithPayer:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;
- (id)_categoryVerb;
- (long long)_intentCategory;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

