//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogCore/PLOperator.h>

@class NSMutableDictionary, NSSet;

@interface PLAccountingOperator : PLOperator
{
    NSSet *_rules;
    NSMutableDictionary *_ruleIDToPendingJobs;
}

+ (id)entryAggregateDefinitionQualificationEnergy;
+ (id)entryAggregateDefinitionEnergy;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitionQualificationEvents;
+ (id)entryEventPointDefinitionDistributionEvents;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitionQualificationEvents;
+ (id)entryEventIntervalDefinitionDistributionEvents;
+ (id)entryEventIntervalDefinitionEnergyEstimateEvents;
+ (id)entryEventIntervalDefinitionPowerEvents;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitionQualificationEvents;
+ (id)entryEventBackwardDefinitionDistributionEvents;
+ (id)entryEventBackwardDefinitionPowerEvents;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionQualificationEvents;
+ (id)entryEventForwardDefinitionDistributionEvents;
+ (id)entryEventForwardDefinitionPowerEvents;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitionQualificationRules;
+ (id)entryEventNoneDefinitionDistributionRules;
+ (id)entryEventNoneDefinitionNodes;
+ (id)entryEventNoneDefinitions;
+ (void)load;
@property(retain) NSMutableDictionary *ruleIDToPendingJobs; // @synthesize ruleIDToPendingJobs=_ruleIDToPendingJobs;
@property(retain, nonatomic) NSSet *rules; // @synthesize rules=_rules;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)stopAccounting;
- (void)startAccounting;
- (void)initOperatorDependancies;
- (id)init;

@end

