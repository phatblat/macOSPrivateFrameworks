//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFExpandingParameter : WFParameter
{
    NSString *_hintLabel;
    id <WFExpandingParameterHintProvider> _hintProvider;
}

@property(nonatomic) __weak id <WFExpandingParameterHintProvider> hintProvider; // @synthesize hintProvider=_hintProvider;
- (void).cxx_destruct;
- (BOOL)supportsImportQuestions;
- (id)defaultSupportedVariableTypes;
@property(readonly, nonatomic) NSString *hintLabel; // @synthesize hintLabel=_hintLabel;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end

