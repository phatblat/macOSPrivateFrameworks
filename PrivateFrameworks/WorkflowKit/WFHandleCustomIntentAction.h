//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFHandleIntentAction.h>

#import "WFDynamicEnumerationDataSource.h"
#import "WFDynamicResolveParameterDataSource.h"
#import "WFIntentDynamicResolverDataSource.h"

@class INSchema, NSString, WFIntentDynamicResolutionRequest, WFIntentDynamicResolver;

@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource>
{
    NSString *_appIdentifier;
    long long _intentCategory;
    NSString *_localizedName;
    NSString *_className;
    NSString *_bundleIdentifier;
    INSchema *_schema;
    WFIntentDynamicResolver *_dynamicResolver;
    WFIntentDynamicResolutionRequest *_lastDynamicResolutionRequest;
}

@property(retain, nonatomic) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest; // @synthesize lastDynamicResolutionRequest=_lastDynamicResolutionRequest;
@property(readonly, nonatomic) WFIntentDynamicResolver *dynamicResolver; // @synthesize dynamicResolver=_dynamicResolver;
@property(readonly, copy, nonatomic) INSchema *schema; // @synthesize schema=_schema;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (long long)intentCategory;
- (void).cxx_destruct;
- (void)dynamicResolveParameterDidEndResolutionSession:(id)arg1;
- (void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 dynamicResolveParameter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resolveOptionsForUserInput:(id)arg1 forDynamicResolveParameter:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateSkeletonIntentForDynamicResolver:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)setUpResolverIfNeededForParameter:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)prettyErrorForIntentsExtensionError:(id)arg1;
- (BOOL)enumerationAllowsMultipleValues:(id)arg1;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (void)loadPossibleStatesForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startExecutingIntent:(id)arg1;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)generatedIntentWithInput:(id)arg1 error:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
- (id)slots;
- (id)codableDescription;
- (id)localizedKeyParameterDisplayName;
- (id)intentDescription;
- (BOOL)populatesInputFromInputParameter;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)arg1;
- (void)setupParameter:(id)arg1;
- (void)initializeParameters;
- (id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2;
- (id)parametersByIntentSlotName;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 schema:(id)arg4 className:(id)arg5 bundleIdentifier:(id)arg6;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

