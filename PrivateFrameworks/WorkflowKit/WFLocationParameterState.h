//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@interface WFLocationParameterState : WFVariableSubstitutableParameterState
{
}

+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (Class)processingValueClass;
- (void)getContentItemFromValue:(id)arg1 withVariableSource:(id)arg2 parameter:(id)arg3 environment:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)getContentCollectionWithVariableSource:(id)arg1 parameter:(id)arg2 environment:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 environment:(long long)arg3 userInputRequiredHandler:(CDUnknownBlockType)arg4 valueHandler:(CDUnknownBlockType)arg5;
- (id)initWithValue:(id)arg1;

@end

