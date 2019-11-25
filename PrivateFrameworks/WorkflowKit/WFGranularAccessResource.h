//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFAccessResource.h>

@class NSSet, WFGranularAccessResourcePerWorkflowState;

@interface WFGranularAccessResource : WFAccessResource
{
    WFGranularAccessResourcePerWorkflowState *_stateForRequestedEntries;
}

+ (Class)perWorkflowStateClass;
@property(retain, nonatomic) WFGranularAccessResourcePerWorkflowState *stateForRequestedEntries; // @synthesize stateForRequestedEntries=_stateForRequestedEntries;
- (void).cxx_destruct;
- (id)updatedPerWorkflowStateForAuthorizationChoice:(BOOL)arg1 overridingPreviouslyDeterminedAuthorizations:(BOOL)arg2;
- (unsigned long long)workflowLevelStatus;
- (void)setCurrentPerWorkflowState:(id)arg1;
@property(readonly, nonatomic) WFGranularAccessResourcePerWorkflowState *currentGranularPerWorkflowState;
- (id)description;
@property(readonly, nonatomic) NSSet *valuesWithDeniedAccess;
@property(readonly, nonatomic) NSSet *valuesWithNotDeterminedAccess;
- (void)updateStateForRequestedEntries;
@property(readonly, nonatomic) NSSet *requestedEntries;

@end

