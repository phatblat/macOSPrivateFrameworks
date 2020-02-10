//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFActionParameterInputProvider.h"
#import "WFRemoteQuarantinePolicyEvaluatorDelegate.h"
#import "WFVariableDataSource.h"

@class NSDictionary, NSMapTable, NSProgress, NSString, WFContentCollection, WFWorkflow, WFWorkflowControllerState;

@interface WFWorkflowController : NSObject <WFRemoteQuarantinePolicyEvaluatorDelegate, WFVariableDataSource, WFActionParameterInputProvider>
{
    WFWorkflowController *_strongSelf;
    BOOL _donateInteraction;
    BOOL _paused;
    BOOL _running;
    BOOL _stepping;
    WFWorkflow *_workflow;
    WFContentCollection *_input;
    WFContentCollection *_output;
    id <WFWorkflowControllerDelegate> _delegate;
    NSProgress *_progress;
    NSString *_runSource;
    NSString *_automationType;
    unsigned long long _currentIndex;
    NSMapTable *_variableTable;
    WFWorkflowControllerState *_pendingState;
    NSDictionary *_pendingProcessedParameters;
}

+ (void)initialize;
@property(retain, nonatomic) NSDictionary *pendingProcessedParameters; // @synthesize pendingProcessedParameters=_pendingProcessedParameters;
@property(retain, nonatomic) WFWorkflowControllerState *pendingState; // @synthesize pendingState=_pendingState;
@property(retain, nonatomic) NSMapTable *variableTable; // @synthesize variableTable=_variableTable;
@property(nonatomic, getter=isStepping) BOOL stepping; // @synthesize stepping=_stepping;
@property(nonatomic, getter=isRunning) BOOL running; // @synthesize running=_running;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) NSString *automationType; // @synthesize automationType=_automationType;
@property(copy, nonatomic) NSString *runSource; // @synthesize runSource=_runSource;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <WFWorkflowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL donateInteraction; // @synthesize donateInteraction=_donateInteraction;
@property(retain, nonatomic) WFContentCollection *output; // @synthesize output=_output;
@property(retain, nonatomic) WFContentCollection *input; // @synthesize input=_input;
@property(retain, nonatomic) WFWorkflow *workflow; // @synthesize workflow=_workflow;
- (void).cxx_destruct;
- (id)userInterfaceForAction:(id)arg1;
- (id)parameterInputProviderForAction:(id)arg1;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(BOOL)arg3;
- (void)workflowControllerWillRun:(id)arg1;
- (void)logStartEvent;
- (void)logRunEvent:(BOOL)arg1;
- (BOOL)action:(id)arg1 canProvideInputForParameter:(id)arg2;
- (void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)autoreleaseSelf;
- (void)retainSelf;
- (id)workflowInput;
- (id)contentForVariableWithName:(id)arg1;
- (BOOL)setContent:(id)arg1 forVariableWithName:(id)arg2;
- (void)evaluateRemoteQuarantinePolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;
- (void)reset;
- (void)setFinishedRunningWithSuccess:(BOOL)arg1;
- (void)stop;
- (void)run;
- (void)_stepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)stateWithActionIndex:(unsigned long long)arg1 input:(id)arg2 processedParameters:(id)arg3;
@property(retain, nonatomic) WFWorkflowControllerState *currentState;
- (id)currentAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
