//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FormCompletionDelegate.h"
#import "FormCompletionPresentationContext.h"

@class NSURL, NSView, NSWindow;

__attribute__((visibility("hidden")))
@interface FormCompletionAdapter : NSObject <FormCompletionPresentationContext, FormCompletionDelegate>
{
    NSWindow *_window;
    struct Frame _frame;
}

+ (id)adapterWithWindow:(id)arg1 frame:(const struct Frame *)arg2;
@property(readonly, nonatomic) struct Frame frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) __weak NSWindow *window; // @synthesize window=_window;
- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v48@0:8^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}^^?@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB}16@24@32@40, name: formCompletion:collectFormMetadataForSafeAutoFillConfirmationContactProperty:contractIdentifier:contactLabel:
-     // Error parsing type: c40@0:8^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}^^?@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB}16@24@32, name: formCompletion:fillFormWithSuggestedPassword:formMetadata:
-     // Error parsing type: v40@0:8^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}^^?@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB}16@24@32, name: formCompletion:fillFormWithPassword:formMetadata:
-     // Error parsing type: v32@0:8^{FormCompletionController=^^?{atomic<unsigned int>=AI}Bq@@@@{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}@@dBBBBB{Vector<WTF::RefPtr<Safari::CompletionListItem>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<Safari::CompletionListItem>}III}^^?@QB^{SafeAutoFillConfirmationController}@@{Frame={WKRetainPtr<const void *>=^v}}@@BBB}16@24, name: formCompletion:fillFormWithValues:
- (void)getCredentialMatches:(id *)arg1 andPotentialMatches:(id *)arg2 matchingPartialUsername:(id)arg3 omittingCredentialsUserHasDeniedAccessTo:(BOOL)arg4;
@property(readonly, nonatomic) BOOL shouldSavePasswordsToCloudKeychain;
@property(readonly, nonatomic) BOOL shouldSaveUsernamesAndPasswords;
@property(readonly, nonatomic) NSView *browserView;
@property(readonly, nonatomic) NSURL *url;
- (id)initWithWindow:(id)arg1 frame:(const struct Frame *)arg2;

@end

