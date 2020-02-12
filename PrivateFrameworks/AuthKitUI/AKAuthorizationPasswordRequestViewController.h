//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationPaneViewController.h>

#import "AKAuthorizationEditableDataSources.h"
#import "AKAuthorizationPasswordAuthenticationDelegate.h"
#import "AKAuthorizationSubPaneConfirmButtonDelegate.h"
#import "AKAuthorizationSubPaneLoginChoiceDelegate.h"

@class AKAuthorizationLoginChoice, AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, AKAuthorizationSubPaneConfirmButton, AKAuthorizationSubPaneLoginChoice, AKAuthorizationViewController, AKTiburonPasswordUIReport, NSMutableArray, NSString;

@interface AKAuthorizationPasswordRequestViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, AKAuthorizationSubPaneLoginChoiceDelegate, AKAuthorizationEditableDataSources>
{
    AKTiburonPasswordUIReport *_analyticsReport;
    BOOL _editableScopeChoicesChanged;
    AKAuthorizationScopeChoices *_editableScopeChoices;
    AKAuthorizationPresentationContext *_presentationContext;
    AKAuthorizationViewController *_authorizationViewController;
    NSMutableArray *_cellChoices;
    AKAuthorizationSubPaneLoginChoice *_subPaneLoginChoice;
    AKAuthorizationSubPaneConfirmButton *_confirmButton;
}

@property(retain, nonatomic) AKAuthorizationSubPaneConfirmButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) AKAuthorizationSubPaneLoginChoice *subPaneLoginChoice; // @synthesize subPaneLoginChoice=_subPaneLoginChoice;
@property(retain, nonatomic) NSMutableArray *cellChoices; // @synthesize cellChoices=_cellChoices;
@property(nonatomic) __weak AKAuthorizationViewController *authorizationViewController; // @synthesize authorizationViewController=_authorizationViewController;
@property(readonly, nonatomic) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property BOOL editableScopeChoicesChanged; // @synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged;
@property(readonly) AKAuthorizationScopeChoices *editableScopeChoices; // @synthesize editableScopeChoices=_editableScopeChoices;
- (void).cxx_destruct;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (void)_performAppleIDPasswordAuthenticationIfNeeded;
- (BOOL)validateReadyForAuthorization;
- (void)performPasswordAuthentication;
- (void)performAuthorization;
- (void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
- (void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)_addSeparatorToContext:(id)arg1;
- (void)loginChoiceChanged:(unsigned long long)arg1;
- (void)_cancelButtonSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_setCancelButtonEnabled:(BOOL)arg1;
- (void)_handleAuthorizationError:(id)arg1;
- (void)_performAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_performAuthorization;
@property(readonly) BOOL _canPerformAuthorization;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (id)_buttonText;
- (id)_infoLabelText;
@property(readonly) AKAuthorizationLoginChoice *_firstLoginChoice;
@property(readonly) BOOL _hasOneLoginChoice;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

