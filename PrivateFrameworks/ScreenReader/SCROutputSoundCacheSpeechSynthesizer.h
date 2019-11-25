//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCROutputSpeechSynthesizerProtocol.h"

@class NSString, SCRSound;

__attribute__((visibility("hidden")))
@interface SCROutputSoundCacheSpeechSynthesizer : NSObject <SCROutputSpeechSynthesizerProtocol>
{
    id _delegate;
    SCRSound *_sound;
    id _owner;
    id _action;
    NSString *_category;
    NSString *_spokenString;
}

@property(copy, nonatomic) NSString *spokenString; // @synthesize spokenString=_spokenString;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) id action; // @synthesize action=_action;
@property(retain, nonatomic) id owner; // @synthesize owner=_owner;
@property(retain, nonatomic) SCRSound *sound; // @synthesize sound=_sound;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unlockSynthesizer;
- (void)lockSynthesizer;
- (void)stopSpeaking;
- (BOOL)isSpeaking;
- (BOOL)isPaused;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (id)supportedLiteralCharacterRanges;
- (void)startAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

