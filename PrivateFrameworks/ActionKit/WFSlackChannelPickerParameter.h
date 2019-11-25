//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFEnumerationParameter.h"

#import "WFActionEventObserver.h"

@class NSArray, NSString, WFAction;

@interface WFSlackChannelPickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    NSArray *_possibleStates;
    WFAction *_action;
}

@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (void)possibleStatesDidChange;
- (BOOL)isHidden;
- (id)identifierForChannelWithName:(id)arg1;
- (id)localizedLabelForPossibleState:(id)arg1;
@property(readonly, nonatomic) NSArray *possibleStates; // @synthesize possibleStates=_possibleStates;
- (id)defaultSerializedRepresentation;
- (void)updateSlackChannels;
- (void)wasAddedToWorkflow;
- (id)account;
@property(readonly, nonatomic) NSString *accountParameterKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

