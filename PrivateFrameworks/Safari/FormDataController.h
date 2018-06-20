//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFormDataController.h"

#import "WBSFormAutoFillCorrectionManagerDelegate.h"
#import "WBSFormFieldClassificationCorrectorDelegate.h"

@class NSMutableDictionary, NSString, WBSCoalescedAsynchronousWriter, WBSFormAutoFillCorrectionManager, WBSFormAutoFillParsecFeedbackProcessor;

__attribute__((visibility("hidden")))
@interface FormDataController : WBSFormDataController <WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate>
{
    WBSCoalescedAsynchronousWriter *_formDataWriter;
    WBSFormAutoFillCorrectionManager *_autoFillCorrectionManager;
    WBSFormAutoFillParsecFeedbackProcessor *_autoFillFeedbackProcessor;
    id <EncryptionProvider> _encryptionProvider;
    BOOL _shouldUseInsecureEncryptionKeyForMigration;
    NSMutableDictionary *_threadUnsafeDeniedCredentialsByProtectionSpace;
}

+ (BOOL)contactIsMe:(id)arg1;
+ (id)localizedLowercaseContactProperty:(id)arg1;
+ (unsigned long long)numberOfTextFieldsInForm:(id)arg1;
+ (BOOL)isAddressBookPropertyAnAddressProperty:(id)arg1;
+ (id)sharedFormDataController;
- (void).cxx_destruct;
- (id)uniqueIDOfMe;
- (id)feedbackProcessorForAutoFillCorrectionManager:(id)arg1;
- (BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)arg1;
- (id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg1;
- (BOOL)formFieldClassificationCorrector:(id)arg1 hasAddressBookDataForAddressBookLabel:(id)arg2;
- (id)formFieldClassificationCorrector:(id)arg1 bestAddressBookLabelForControlValue:(id)arg2;
- (BOOL)_processCorrectionsIfPossibleForSourceFrame:(const struct Frame *)arg1 formMetadata:(id)arg2 formValues:(id)arg3;
- (id)_autoFillCorrectionManager;
- (void)displayNoAutoFillDialogForBrowserContentViewController:(id)arg1 result:(int)arg2;
- (void)migrateToSecureEncryptionKey;
- (id)_decryptDataUsingInsecureEncryptionKey:(id)arg1;
- (id)encryptOrDecryptData:(id)arg1 encrypt:(BOOL)arg2;
- (void)verifyKeychainAccessWithContentViewController:(id)arg1;
- (id)_ensureKeychainEncryptionProvider;
- (void)displayInternetAccountSetupPromptForFrame:(const struct Frame *)arg1 sourceFrame:(const struct Frame *)arg2 userName:(id)arg3 password:(id)arg4;
- (id)completionDBPath;
- (id)substituteCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)hasUserDeniedAccessToCredential:(id)arg1 inProtectionSpace:(id)arg2;
- (BOOL)shouldAutoFillPasswords;
- (BOOL)shouldAutoFillFromPreviousData;
- (BOOL)shouldAutoFillFromAddressBook;
- (BOOL)_shouldSynchronizeKeychainItems;
- (BOOL)_shouldSaveCreditCardDataInFrame:(const struct Frame *)arg1;
- (id)localizedAddressBookDescriptionForTextField:(id)arg1;
- (id)autogeneratedPasswordIfAllowedForURL:(id)arg1 frame:(const struct Frame *)arg2 formMetadata:(id)arg3 textField:(id)arg4;
- (BOOL)canSaveGeneratedPasswordsForURL:(id)arg1;
- (BOOL)shouldSaveUsernamesAndPasswordsInFrame:(const struct Frame *)arg1;
- (BOOL)_shouldSaveFormDataInFrame:(const struct Frame *)arg1;
- (unsigned long long)_numberOfAddressBookAutoFillableFieldsInControls:(id)arg1;
- (unsigned long long)_numberOfAddressBookElementsInControls:(id)arg1;
- (BOOL)shouldOfferAddressBookAutoFillInTextField:(id)arg1 formMetadata:(id)arg2;
- (id)preferredAddressLabelForContact:(id)arg1;
- (id)preferredAddressLabel;
- (id)_mutableSetForWBSAddressBookMatches;
-     // Error parsing type: v56@0:8@16^{FormAddressBookAutoFillCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}^^?@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBBB@BB@@@B}24@32@40@48, name: _findAllContactsWithSameFullNameAsContact:andGetValuesForContactFormWithCompletionController:metadata:inDomain:contactLabel:
-     // Error parsing type: v40@0:8^{FormAddressBookAutoFillCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}^^?@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBBB@BB@@@B}16@24@32, name: showFlexibleContactsAutoFillUIForCompletionController:metadataProvider:contactLabel:
- (BOOL)shouldDeferLoadingWhileSavingFormDataInPage:(const struct Page *)arg1 frame:(const struct Frame *)arg2 sourceFrame:(const struct Frame *)arg3 formMetadata:(id)arg4 passwordGenerationCredentials:(id)arg5;
- (void)_saveFormDataIfNecessary:(id)arg1 page:(const struct Page *)arg2 frame:(const struct Frame *)arg3 sourceFrame:(const struct Frame *)arg4 values:(id)arg5 forceConfirmationIfOverwritingSavedPassword:(BOOL)arg6 passwordGenerationCredentials:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)saveUnsubmittedFormDataFromRemovedFrameIfNecessary:(id)arg1 page:(const struct Page *)arg2 frame:(const struct Frame *)arg3 sourceFrame:(const struct Frame *)arg4 passwordGenerationCredentials:(id)arg5;
- (void)willSubmitFormInPage:(const struct Page *)arg1 toFrame:(const struct Frame *)arg2 fromFrame:(const struct Frame *)arg3 values:(id)arg4 userData:(const struct Type *)arg5 listener:(const struct FormSubmissionListener *)arg6;
- (void)willSubmitFormWithCredentials:(id)arg1 toFrame:(const struct Frame *)arg2 fromFrame:(const struct Frame *)arg3 forceConfirmationIfOverwritingSavedPassword:(BOOL)arg4 passwordGenerationCredentials:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)offerToSaveCredentialsFromForm:(id)arg1 forFrame:(const struct Frame *)arg2 passwordGenerationCredentials:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)willSubmitStandardForm:(id)arg1 values:(id)arg2 toFrame:(const struct Frame *)arg3 fromFrame:(const struct Frame *)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)formContainsNonEmptyTextField:(id)arg1;
- (void)saveCreditCardDataIfNecessary:(id)arg1 frame:(const struct Frame *)arg2 sourceFrame:(const struct Frame *)arg3 exitHandler:(struct ScopeExitHandler *)arg4;
- (int)_performCredentialAutoFillActionForForm:(id)arg1 ofType:(unsigned long long)arg2 inViewController:(id)arg3 isPreFill:(BOOL)arg4 frame:(const struct Frame *)arg5;
- (int)sendAutoFillDataForStandardForm:(id)arg1 inViewController:(id)arg2 frame:(const struct Frame *)arg3 autoFillDataType:(long long)arg4 contactLabel:(id)arg5 multiRoundAutoFillManager:(id)arg6 contact:(id)arg7 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg8;
- (int)preFillActiveOrFirstLoginFormInViewController:(id)arg1 metadataOfFormToPreFill:(id)arg2 ancestorFramesOfFormToPreFill:(const struct Array *)arg3 pageContainsAtLeastOneForm:(_Bool)arg4;
- (_Bool)_mayPrefillInFrame:(const struct Frame *)arg1 ancestorFramesOfFormToPreFill:(const struct Array *)arg2;
- (void)autoFillActiveFormOrBestFormForPageLevelAutoFillInViewController:(id)arg1 metadataProvider:(id)arg2 autoFillDataType:(long long)arg3 contactLabel:(id)arg4 multiRoundAutoFillManager:(id)arg5 contact:(id)arg6 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg7;
- (id)noAutoFillDialogDetailTextForResult:(int)arg1;
- (id)noAutoFillDialogTitleForResult:(int)arg1;
- (id)_peopleWithWBSABProperty:(id)arg1 containingPrefix:(id)arg2 contactStore:(id)arg3;
- (id)_addressBookMatchesForValue:(id)arg1 property:(id)arg2 key:(id)arg3 label:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 contact:(id)arg4 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg5;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)uniqueIDOfContact:(id)arg1;
- (void)domainsWithPreviousDataChanged;
- (void)savePendingChangesBeforeTermination;
- (void)warmUp;
- (void)saveCompletionDBSoon;
- (void)notifyKeychainWasDirectlyAffectedBySafari:(id)arg1;
- (id)initWithAggressiveKeychainCaching:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

