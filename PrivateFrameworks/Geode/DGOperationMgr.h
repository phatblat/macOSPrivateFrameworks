//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSSet;

@interface DGOperationMgr : NSObject
{
    NSMutableDictionary *_operationInfoByIdentifier;
    NSMutableDictionary *_operationInfoByClassName;
    NSMutableDictionary *_namesByIdentifier;
    NSSet *_nonReorderableOperationIds;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (id)sortedIdentifiersForRenderPipelineVersion:(long long)arg1;
- (void).cxx_destruct;
- (Class)operationClassWithIdentifier:(id)arg1;
- (id)_operationFromDictionary:(id)arg1;
- (id)operationWithIdentifier:(id)arg1;
- (id)_operationWithIdentifier:(id)arg1 fromInfoDictionary:(id)arg2;
- (id)longDisplayNameForIdentifier:(id)arg1;
- (id)displayNameForIdentifier:(id)arg1 key:(id)arg2;
- (id)displayNameForIdentifier:(id)arg1;
- (BOOL)allowsMultipleAdjustmentsForIdentifier:(id)arg1;
- (id)registeredInfoDictionaryForClassName:(id)arg1;
- (id)registeredInfoDictionaryForIdentifier:(id)arg1;
- (id)registeredOperationIdentifiers;
- (void)registerOperationInfoDictionary:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (id)_localizedStringForKey:(id)arg1 forOperationIdentifier:(id)arg2;
- (unsigned long long)sortOrderForOperationWithIdentifier:(id)arg1 renderPipelineVersion:(long long)arg2;
- (void)loadOperationPlugIns;

@end
