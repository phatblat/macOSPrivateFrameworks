//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<PREResponsesMetricsProtocol>, NSObject<PREResponsesProtocol>, NSObject<PREResponsesTrialProtocol>, PREResponsesGeneratedEvent, RKMessageResponseManager, _PASLock;

@interface PREResponsesExperiment : NSObject
{
    NSObject<PREResponsesTrialProtocol> *_trial;
    NSObject<PREResponsesMetricsProtocol> *_metrics;
    NSObject<PREResponsesProtocol> *_xpcClient;
    RKMessageResponseManager *_rkClient;
    _PASLock *_cacheLock;
    PREResponsesGeneratedEvent *_cachedResponsesGeneratedEvent;
    BOOL _registerDisplayed;
}

+ (id)sharedManager;
@property(nonatomic) BOOL registerDisplayed; // @synthesize registerDisplayed=_registerDisplayed;
- (void).cxx_destruct;
- (BOOL)isStringEmpty:(id)arg1;
- (int)preInputMethodFrom:(id)arg1;
- (id)inputMethodStringFrom:(int)arg1;
- (BOOL)shouldUseDefaultRKTreatment;
- (id)stringArrayFromPreResponseItems:(id)arg1;
- (id)stringArrayFromConversationTurns:(id)arg1;
- (id)waitForPreResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7;
- (void)registerImpressionWithPreResponseItems:(id)arg1 language:(id)arg2 isCached:(BOOL)arg3 responseTimePerf:(unsigned long long)arg4 promptMessage:(id)arg5 generationStatus:(int)arg6;
- (id)responsesCacheLock;
- (void)primeResponsesExperimentsIfNeeded;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 time:(id)arg3 metadata:(id)arg4 withLanguage:(id)arg5;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 time:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7;
- (id)activeExperimentName;
- (id)cacheKeyForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 time:(id)arg3 language:(id)arg4;
- (id)clippedMessageIfNecessary:(id)arg1;
- (id)init;
- (id)initWithTrialClient:(id)arg1 metricsClient:(id)arg2 xpcClient:(id)arg3 rkClient:(id)arg4;

@end

