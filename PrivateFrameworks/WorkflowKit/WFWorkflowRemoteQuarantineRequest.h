//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class NSDictionary, WFWorkflow;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest
{
    WFWorkflow *_workflow;
    NSDictionary *_workflowJavaScriptCoreRepresentation;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation; // @synthesize workflowJavaScriptCoreRepresentation=_workflowJavaScriptCoreRepresentation;
@property(readonly, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (id)policyFunctionName;
- (id)javaScriptCoreRepresentationWithError:(id *)arg1;
- (id)defaultLocalizedDeniedErrorMessage;
- (id)defaultLocalizedDeniedErrorTitle;
- (id)workflowJavaScriptCoreRepresentationWithError:(id *)arg1;
- (id)initWithWorkflow:(id)arg1;

@end

