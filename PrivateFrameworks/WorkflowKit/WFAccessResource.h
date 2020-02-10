//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFResource.h>

#import "WFWorkflowReferencingResource.h"

@class NSDictionary, NSError, NSString, WFDatabase, WFImage, WFWorkflow;

@interface WFAccessResource : WFResource <WFWorkflowReferencingResource>
{
    WFWorkflow *_workflow;
    id <WFAccessResourcePerWorkflowState> _currentPerWorkflowState;
    NSString *_persistentIdentifier;
    id <NSObject> _resourceAvailabilityChangedNotificationObserver;
}

+ (Class)perWorkflowStateClass;
+ (BOOL)isSystemResource;
+ (id)accessResourceFromDatabaseState:(id)arg1;
@property(readonly, nonatomic) id <NSObject> resourceAvailabilityChangedNotificationObserver; // @synthesize resourceAvailabilityChangedNotificationObserver=_resourceAvailabilityChangedNotificationObserver;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(retain, nonatomic) id <WFAccessResourcePerWorkflowState> currentPerWorkflowState; // @synthesize currentPerWorkflowState=_currentPerWorkflowState;
@property(nonatomic) __weak WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (id)localizedAttemptRecoveryFromErrorMessage;
@property(readonly, nonatomic) NSString *attemptRecoveryFromGlobalLevelErrorMessage;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSString *workflowLevelDeniedStatusMessage;
@property(readonly, nonatomic) NSString *workflowLevelNotDeterminedStatusMessage;
@property(readonly, nonatomic) NSString *workflowLevelMessageTemplate;
@property(readonly, nonatomic) NSString *workflowLevelPromptTemplate;
@property(readonly, nonatomic) NSError *computedAvailabilityError;
@property(readonly, nonatomic) NSError *globalLevelAvailabilityError;
@property(readonly, nonatomic) NSError *workflowLevelAvailabilityError;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelDeniedStatusMessage;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelNotDeterminedStatusMessage;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelMessageTemplate;
@property(readonly, nonatomic) NSString *localizedWorkflowLevelPromptTemplate;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2;
@property(readonly, nonatomic) unsigned long long workflowLevelStatus;
@property(readonly, nonatomic) unsigned long long globalLevelStatus;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAuthorizedAtWorkflowLevel:(BOOL)arg1 forReference:(id)arg2 inDatabase:(id)arg3 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg4;
- (void)persistPerWorkflowState:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3;
- (void)refreshCurrentPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)refreshCurrentPerWorkflowState;
- (id)loadPersistedPerWorkflowStateForReference:(id)arg1 inDatabase:(id)arg2;
- (void)attemptRecoveryFromWorkflowLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WFDatabase *database;
- (BOOL)isEquivalentToAccessResource:(id)arg1;
- (void)setAuthorizedAtWorkflowLevel:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2;
- (void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)availabilityErrorForLevel:(unsigned long long)arg1;
- (unsigned long long)statusAtLevel:(unsigned long long)arg1;
- (void)makeAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshAvailability;
- (void)refreshAvailabilityWithNotification:(BOOL)arg1;
@property(readonly, nonatomic) unsigned long long status;
@property(readonly, nonatomic) NSString *protectedResourceDescription;
@property(readonly, nonatomic) WFImage *icon;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *associatedAppIdentifier;
- (void)dealloc;
- (id)initWithPersistentIdentifier:(id)arg1;
- (id)initWithDefinition:(id)arg1;
- (id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2;
@property(readonly, nonatomic) NSDictionary *settingsUIDefinition;
- (void)logOut;
@property(readonly, nonatomic) BOOL logOutAffectsOtherApps;
@property(readonly, nonatomic) BOOL canLogOut;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *resourceName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
