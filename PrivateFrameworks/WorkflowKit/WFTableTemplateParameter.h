//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@interface WFTableTemplateParameter : WFParameter
{
    Class _contentItemClass;
}

@property(readonly, nonatomic) Class contentItemClass; // @synthesize contentItemClass=_contentItemClass;
- (void).cxx_destruct;
- (BOOL)supportsImportQuestions;
@property(readonly, copy, nonatomic) id additionalRowSerializedRepresentation;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

