//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFGetHomeAccessoryStateAction : WFAction
{
}

+ (id)homeAccessoryStateActionWithHome:(id)arg1;
- (void)updateCharacteristicsEnumeration;
- (id)characteristic;
- (id)homeName;
- (id)home;
- (id)localizedDefaultOutputName;
- (id)outputMeasurementUnitType;
- (id)outputContentClasses;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (id)localizedName;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)initializeParameters;

@end

