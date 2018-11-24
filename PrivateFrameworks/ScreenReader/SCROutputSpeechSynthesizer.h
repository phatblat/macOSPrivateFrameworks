//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReader/SCRSpeechSynthesizer.h>

#import "SCROutputSpeechSynthesizerProtocol.h"

@class NSLock, NSString, SCROutputAction, SCRSpeechSynthesizerOptions;

__attribute__((visibility("hidden")))
@interface SCROutputSpeechSynthesizer : SCRSpeechSynthesizer <SCROutputSpeechSynthesizerProtocol>
{
    float _customizedNormalRate;
    float _customizedMinRate;
    float _customizedMaxRate;
    float _customizedNormalPitch;
    float _customizedMinPitch;
    float _customizedMaxPitch;
    float _customizedNormalVolume;
    float _customizedMaxVolume;
    float _customizedNormalIntonation;
    float _customizedMinIntonation;
    float _customizedMaxIntonation;
    id _owner;
    SCROutputAction *_action;
    NSString *_category;
    SCRSpeechSynthesizerOptions *_synthesizerOptions;
    NSLock *__synthesizerLock;
}

@property(retain, nonatomic) NSLock *_synthesizerLock; // @synthesize _synthesizerLock=__synthesizerLock;
@property(nonatomic) float customizedMaxIntonation; // @synthesize customizedMaxIntonation=_customizedMaxIntonation;
@property(nonatomic) float customizedMinIntonation; // @synthesize customizedMinIntonation=_customizedMinIntonation;
@property(nonatomic) float customizedNormalIntonation; // @synthesize customizedNormalIntonation=_customizedNormalIntonation;
@property(nonatomic) float customizedMaxVolume; // @synthesize customizedMaxVolume=_customizedMaxVolume;
@property(nonatomic) float customizedNormalVolume; // @synthesize customizedNormalVolume=_customizedNormalVolume;
@property(nonatomic) float customizedMaxPitch; // @synthesize customizedMaxPitch=_customizedMaxPitch;
@property(nonatomic) float customizedMinPitch; // @synthesize customizedMinPitch=_customizedMinPitch;
@property(nonatomic) float customizedNormalPitch; // @synthesize customizedNormalPitch=_customizedNormalPitch;
@property(nonatomic) float customizedMaxRate; // @synthesize customizedMaxRate=_customizedMaxRate;
@property(nonatomic) float customizedMinRate; // @synthesize customizedMinRate=_customizedMinRate;
@property(nonatomic) float customizedNormalRate; // @synthesize customizedNormalRate=_customizedNormalRate;
@property(retain, nonatomic) SCRSpeechSynthesizerOptions *synthesizerOptions; // @synthesize synthesizerOptions=_synthesizerOptions;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) SCROutputAction *action; // @synthesize action=_action;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
- (void)_outputTestingLogging:(id)arg1;
- (BOOL)_setObject:(id)arg1 forProperty:(struct __CFString *)arg2;
- (void)_clearOptions;
- (void)unlockSynthesizer;
- (void)lockSynthesizer;
- (void)setVoice:(id)arg1;
- (BOOL)canBePaused;
- (void)adjustOnTheFlyChangesForAction:(id)arg1 adjustRate:(BOOL)arg2 adjustPitch:(BOOL)arg3 adjustVolume:(BOOL)arg4 adjustIntonation:(BOOL)arg5 adjustVoice:(BOOL)arg6 adjustingCurrentSpeech:(BOOL)arg7 lastSpokenWordRange:(struct _NSRange)arg8 speakResults:(BOOL)arg9;
- (void)startAction;
- (BOOL)shouldPostWhenSpeechCompletes;
@property(nonatomic) float volume;
@property(nonatomic) float pitchBase;
@property(nonatomic) float pitchMod;
@property(nonatomic) float rate;
- (void)dealloc;
- (id)initWithVoice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

