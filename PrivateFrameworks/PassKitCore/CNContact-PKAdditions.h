//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNContact.h"

@class CRRecentContact;

@interface CNContact (PKAdditions)
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;
+ (id)contactWithPkDictionary:(id)arg1;
+ (id)pkPassbookRequiredKeys;
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;
- (id)pkDeconstructContactUsingKey:(id)arg1;
- (id)localizedDisplayNameWithLabel:(id)arg1;
- (id)contactWithCleanedUpDistrict;
- (id)sanitizedContact;
- (id)nameComponents;
- (id)_phoneticNameFromComponents:(id)arg1 style:(long long)arg2;
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;
- (id)pkFullAndPhoneticName;
- (id)pkPhoneticName;
- (id)pkFullName;
- (id)pkFullyQualifiedName;
- (BOOL)isSubsetOfMeCard;
@property(nonatomic) unsigned long long contactSource;
@property(retain, nonatomic) CRRecentContact *recentContact;
- (id)pkSingleLineFormattedContactAddress;
- (id)pkFormattedContactAddressIncludingPhoneticName:(BOOL)arg1 showName:(BOOL)arg2;
- (id)pkFormattedContactAddressIncludingPhoneticName:(BOOL)arg1;
- (id)pkFormattedContactAddressWithoutName;
- (id)pkFormattedContactAddress;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
@end

