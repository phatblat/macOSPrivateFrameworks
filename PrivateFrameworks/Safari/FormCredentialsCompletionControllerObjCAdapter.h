//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Safari/FormCompletionControllerObjCAdapter.h>

@class AutoFillLocalAuthenticationManager;

__attribute__((visibility("hidden")))
@interface FormCredentialsCompletionControllerObjCAdapter : FormCompletionControllerObjCAdapter
{
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
}

- (void).cxx_destruct;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const struct CompletionListItem *)arg1;
- (void)didRefreshCompletionListItems:(const Vector_9c080eda *)arg1;
- (id)_firstExistingCellViewPassingTest:(CDUnknownBlockType)arg1;
- (void)_registerCredentialAutoFillTableViewCellClasses;
- (id)_url;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
-     // Error parsing type: ^{FormCredentialsCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB@BBB@@@i@@@@}16@0:8, name: _formCredentialsCompletionController
@property(readonly, nonatomic) BOOL abortCompletionBlocked;
- (double)widthOfWidestCell;
-     // Error parsing type: @24@0:8^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem, WTF::DumbPtrTraits<Safari::CompletionListItem> >}II}@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB@BBB@}16, name: initWithCompletionController:

@end

