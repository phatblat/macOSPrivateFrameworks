//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "INCodableAttribute.h"

#import "WFIntentParameterDescription.h"

@class NSString;

@interface INCodableAttribute (Workflow) <WFIntentParameterDescription>
- (id)wf_processedParameterValueForValue:(id)arg1;
- (id)wf_contentItemForValue:(id)arg1;
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2;
@property(readonly, nonatomic) Class wf_parameterClass;
@property(readonly, nonatomic) BOOL wf_multipleValues;
@property(readonly, nonatomic) NSString *wf_outputDisplayName;
@property(readonly, nonatomic) Class wf_contentItemClass;
@property(readonly, nonatomic) Class wf_facadeClass;
@property(readonly, nonatomic) Class wf_objectClass;
@property(readonly, nonatomic) NSString *wf_slotName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

