//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFEnumerationParameter.h"

#import "WFActionEventObserver.h"

@class NSString, WFAction;

@interface WFSpeakTextVoicePickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    WFAction *_action;
}

+ (id)defaultVoiceForLanguageCode:(id)arg1;
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
- (id)localizedLabelForPossibleState:(id)arg1;
- (id)possibleStates;
- (id)defaultSerializedRepresentation;
- (BOOL)isHidden;
- (id)voiceForIdentifier:(id)arg1 languageCode:(id)arg2;
- (id)sortedVoicesForLanguageCode:(id)arg1;
- (id)selectedLanguageCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

