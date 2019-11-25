//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFVariableSubstitutableParameterState.h"

@class NSString, SAAlarmObject;

@interface WFAlarmSubstitutableState : WFVariableSubstitutableParameterState
{
    NSString *_localizedTime;
}

+ (void)searchForAlarms:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)alarmWithIdentifier:(id)arg1 label:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)localizedTimeForAlarm:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (Class)processingValueClass;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedTime; // @synthesize localizedTime=_localizedTime;
- (BOOL)willProcessToSameValue:(id)arg1;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SAAlarmObject *value; // @dynamic value;

@end

