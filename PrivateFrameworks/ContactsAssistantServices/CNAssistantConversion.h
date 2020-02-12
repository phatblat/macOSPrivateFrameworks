//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CNAssistantConversion : NSObject
{
}

+ (void)applyUpdate:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (void)removeFieldsFromPerson:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (void)setFieldsFromPerson:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (void)addFieldsFromPerson:(id)arg1 toContactWithIdentifier:(id)arg2 usingStore:(id)arg3 saveRequest:(id)arg4;
+ (id)relationsFromPerson:(id)arg1;
+ (id)phoneNumbersFromPerson:(id)arg1;
+ (id)emailAddressesFromPerson:(id)arg1;
+ (id)addressesFromPerson:(id)arg1;
+ (id)keysFromPerson:(id)arg1;
+ (void)markMeContactInPeople:(id)arg1 usingStore:(id)arg2;
+ (id)verifyContact:(id)arg1 hasDescriptorsForRequiredKeys:(id)arg2;
+ (id)socialProfilesFromContact:(id)arg1;
+ (id)relationsForSyncFromContact:(id)arg1;
+ (id)relationsFromContact:(id)arg1;
+ (id)addressesForSyncFromContact:(id)arg1;
+ (id)addressesFromContact:(id)arg1;
+ (id)phoneNumbersForSyncFromContact:(id)arg1;
+ (id)phoneNumbersFromContact:(id)arg1;
+ (id)emailAddressesForSyncFromContact:(id)arg1;
+ (id)emailAddressesFromContact:(id)arg1;
+ (id)filterLabeledValues:(id)arg1 droppingEmptyLabels:(BOOL)arg2 droppingDuplicates:(BOOL)arg3;
+ (id)createSASourceFromCNContainer:(id)arg1;
+ (id)createSAPersonFromCNContactWithExternalIdentifier:(id)arg1;
+ (id)createSAPersonFromCNContact:(id)arg1;
+ (id)createSAPersonFromCNContact:(id)arg1 conversionType:(long long)arg2;
+ (id)personFromContact:(id)arg1;
+ (id)personFromContact:(id)arg1 useABPerson:(BOOL)arg2;
+ (id)personForSyncFromContact:(id)arg1;
+ (id)personFromMeContact:(id)arg1;
+ (id)descriptorsForRequiredKeys;
+ (id)descriptorsForRequiredKeysForConversionType:(long long)arg1;

@end

