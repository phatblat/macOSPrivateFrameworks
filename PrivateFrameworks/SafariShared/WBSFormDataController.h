//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, WBSKeychainCredentialNotificationMonitor, WBSPair, WBSURLCredentialCache;

@interface WBSFormDataController : NSObject
{
    WBSURLCredentialCache *_credentialCache;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
    NSMutableDictionary *_completionDB;
    NSMutableDictionary *_valuesDB;
    NSMutableDictionary *_preferredLabelsMap;
    unsigned long long _completionDBSize;
    NSMutableDictionary *_domainToLastUsedUsernameAndProtectionSpace;
    NSMutableArray *_recentlyUsedAutoFillSets;
    NSMutableDictionary *_preferredLabelForUniqueIDOfPersonMap;
    WBSPair *_cachedBirthdayAndLocalizedStrings;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)contactKeyForString:(id)arg1;
+ (BOOL)contactIsMe:(id)arg1;
+ (id)localizedLowercaseContactProperty:(id)arg1;
+ (BOOL)isNameProperty:(id)arg1;
+ (id)controlsConsideredByAutoFillInForm:(id)arg1;
+ (id)lastFieldInControls:(id)arg1 inForm:(id)arg2;
+ (id)nextFieldAfterControls:(id)arg1 inForm:(id)arg2;
+ (id)domainFromURL:(id)arg1;
+ (long long)availableManualAutoFillActionForTextField:(id)arg1 form:(id)arg2 outUsernameElementUniqueID:(id *)arg3 outPasswordElementUniqueID:(id *)arg4 outConfirmPasswordElementUniqueID:(id *)arg5;
+ (BOOL)canAutocompleteTextField:(id)arg1 inForm:(id)arg2;
+ (id)continuingFieldsInFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 textFieldsOnly:(BOOL)arg3 ignorePositioning:(BOOL)arg4;
+ (id)stringWithAddressBookValue:(id)arg1 key:(id)arg2;
+ (id)specifierForControl:(id)arg1;
+ (BOOL)formContainsDateFields:(id)arg1 matchingAddressBookMatch:(id)arg2;
+ (id)allSynonymsForMatch:(id)arg1;
+ (id)specifierForAddressBookLabel:(id)arg1;
+ (id)allAddressBookNonAddressPropertyKeys;
+ (id)allAddressBookAddressComponentKeys;
+ (id)addressBookAddressPropertyKey;
+ (BOOL)formContainsCreditCardNumberField:(id)arg1;
+ (BOOL)formContainsCreditCardData:(id)arg1;
+ (BOOL)stringLooksLikeCreditCardNumber:(id)arg1;
+ (id)valueOfControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (id)_metadataForControlWithUniqueID:(id)arg1 inForm:(id)arg2;
+ (BOOL)convertNumber:(id)arg1 toAutoFillFormType:(unsigned long long *)arg2;
+ (id)dontSaveMarker;
- (void).cxx_destruct;
- (void)notifyKeychainWasDirectlyAffectedBySafari;
- (id)addressBookMatchesForFullNameForContact:(id)arg1;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (void)updateLastUsedUsernameAndExtractUsernameAndPasswordFromForm:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;
- (void)willSubmitFormWithCredentials:(id)arg1 atURL:(id)arg2 username:(id *)arg3 password:(id *)arg4;
- (BOOL)hasCredentialsForPageWithMainFrame:(id)arg1;
- (id)metadataOfActiveFormOrBestFormForPageLevelAutoFill:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2 forPrefillingCredentials:(BOOL)arg3;
- (id)activeOrFirstAutoFillableFormFromProvider:(id)arg1 frame:(struct OpaqueFormAutoFillFrame **)arg2 forPrefillingCredentials:(BOOL)arg3;
- (void)_getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 withCredentialsByProtectionSpace:(id)arg3 forURL:(id)arg4 matchingPartialUsername:(id)arg5 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg6;
- (void)getCredentialMatchesForURL:(id)arg1 matchingPartialUsername:(id)arg2 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg5;
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 forURL:(id)arg3 matchingPartialUsername:(id)arg4;
- (id)credentialMatchesForURL:(id)arg1 matchingPartialString:(id)arg2;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2;
- (id)completionDBPath;
- (BOOL)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillFromAddressBook;
- (id)lastUsedUsernameForURL:(id)arg1 protectionSpace:(id *)arg2;
- (id)lastUsedUsernameForURL:(id)arg1;
- (void)_setLastUsedUsername:(id)arg1 andProtectionSpace:(id)arg2 forDomain:(id)arg3;
- (id)_lastUsedUsernameForDomain:(id)arg1 protectionSpace:(id *)arg2;
- (id)annotationsFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (id)valuesFromCredential:(id)arg1 forLoginOrChangePasswordForm:(id)arg2;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (id)credentialMatchesForForm:(id)arg1 atURL:(id)arg2 potentialMatches:(id *)arg3;
- (id)valuesForLoginOrChangePasswordForm:(id)arg1 atURL:(id)arg2;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg5 contact:(id)arg6;
- (id)valuesForContactFormWithMetadata:(id)arg1 matches:(id *)arg2 multiRoundAutoFillManager:(id)arg3 existingMatches:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4 contact:(id)arg5;
- (id)valuesForContactFormWithMetadata:(id)arg1 inDomain:(id)arg2 matches:(id *)arg3 multiRoundAutoFillManager:(id)arg4;
- (void)_addControlIDToAutoFillValuesToAutoFillItems:(id)arg1 formMetadata:(id)arg2 startingAtIndex:(unsigned long long)arg3;
- (void)saveRecentlyUsedAutoFillSetWithMatchesToFill:(id)arg1 matchesForDoNotFill:(id)arg2;
- (id)activeElementMetadataInForm:(id)arg1;
- (unsigned long long)_addMatchesForControl:(id)arg1 startingAtIndex:(unsigned long long)arg2 formMetadata:(id)arg3 fromExistingMatches:(id)arg4 fromAllMatchesIfNecessary:(id)arg5 addToFoundMatches:(id)arg6 addToAutoFillValues:(id)arg7 multiRoundAutoFillManager:(id)arg8 propertyToIdentifierMapForFoundMatches:(id)arg9 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg10;
- (BOOL)_matchHasPreferredIdentifierOrShouldBeFilledInMultiRoundAutoFill:(id)arg1 specifier:(id)arg2 multiRoundAutoFillManager:(id)arg3 contact:(id)arg4;
- (id)_valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 wantAllMatches:(BOOL)arg7 contact:(id)arg8 existingMatches:(id)arg9 shouldUseExistingMatchesToFillFocusedField:(BOOL)arg10 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg11;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (id)valuesForStandardForm:(id)arg1 inDomain:(id)arg2 autoFillDataType:(long long)arg3 matches:(id *)arg4 preferredLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 contact:(id)arg7 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg8;
- (id)contactAutoFillSetForRecentlyUsedAutoFillSet:(id)arg1 contact:(id)arg2 form:(id)arg3;
- (id)orderedHomeAndWorkSetsForContact:(id)arg1 form:(id)arg2;
- (id)_autoFillSetFromMatches:(id)arg1 label:(id)arg2 contact:(id)arg3 form:(id)arg4;
- (void)getFormFieldValues:(id *)arg1 andFieldToFocus:(id *)arg2 forCreditCardForm:(id)arg3 fromCreditCardData:(id)arg4;
- (id)valuesForCreditCardForm:(id)arg1 fromCreditCardData:(id)arg2;
- (unsigned long long)addValuesForStandardFormControls:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 formTextSample:(id)arg5 multiRoundAutoFillManager:(id)arg6;
- (unsigned long long)addValuesForStandardFormControlsInForm:(id)arg1 startingAtIndex:(unsigned long long)arg2 fromAutoFillItem:(id)arg3 toDictionary:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (void)_fillPhoneNumber:(id)arg1 intoValues:(id)arg2 controls:(id)arg3 formTextSample:(id)arg4 multiRoundAutoFillManager:(id)arg5;
- (id)_phoneNumberCandidates:(id)arg1 fillingMultipleFields:(BOOL)arg2;
- (id)_singleFieldPhoneNumberCandidates:(id)arg1;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2 contact:(id)arg3;
- (void)addAllAddressDataIfNecessary:(id)arg1 contactLabel:(id)arg2;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)bestMatchForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)cascadingAddressMatchesForMatch:(id)arg1 contact:(id)arg2;
- (id)_matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)_matchesForControl:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 preferredLabel:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)matchesForControl:(id)arg1 atURL:(id)arg2 matchingPartialString:(id)arg3 autoFillDataType:(long long)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5;
- (BOOL)addressBookHasDataForLabel:(id)arg1;
- (id)bestAddressBookLabelForFormMetadata:(id)arg1 formControlValue:(id)arg2;
- (id)_cachedLocalizedStringsForBirthdate:(id)arg1;
- (void)_currentLocaleDidChange:(id)arg1;
- (void)addABMatchesForValueSpecifier:(id)arg1 matchingPartialString:(id)arg2 toArray:(id)arg3 preferredLabel:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (void)addPreviousDataMatchesForFieldWithName:(id)arg1 inDomain:(id)arg2 matchingPartialString:(id)arg3 toArray:(id)arg4;
- (id)recentlyUsedAutoFillSets;
- (void)addRecentlyUsedAutoFillSet:(id)arg1 appendToTheEnd:(BOOL)arg2;
- (id)_recentlyUsedAutoFillDictionaries;
- (BOOL)preferredIdentifierExistsForProperty:(id)arg1 withContact:(id)arg2;
- (id)preferredIdentifierForProperty:(id)arg1 withContact:(id)arg2;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2 withContact:(id)arg3;
- (id)uniqueIDOfContact:(id)arg1;
- (BOOL)preferredIdentifierExistsForProperty:(id)arg1;
- (id)preferredIdentifierForProperty:(id)arg1;
- (void)setPreferredIdentifier:(id)arg1 forProperty:(id)arg2;
- (void)reapABMarker:(id)arg1 domain:(id)arg2 fieldName:(id)arg3;
- (void)domainsWithPreviousDataChanged;
- (void)setInfo:(id)arg1 forDomain:(id)arg2;
- (id)infoForDomain:(id)arg1;
- (void)clearPreviousDataDatabase;
- (void)clearPreviousDataDatabaseItemsAddedAfterDate:(id)arg1;
- (void)clearPreviousDataForDomain:(id)arg1;
- (id)domainsWithPreviousData;
- (id)_domainsWithPreviousDataOnInternalQueue;
- (void)saveCompletionDBSoon;
- (id)allFormDataForSaving;
- (id)_completionDB;
- (void)pruneCompletionDB;
- (void)loadCompletionDBIfNeeded;
- (void)_loadCompletionDBIfNeededOnInternalQueue;
- (void)dealloc;
- (id)initWithAggressiveKeychainCaching:(BOOL)arg1;
- (id)init;

@end

