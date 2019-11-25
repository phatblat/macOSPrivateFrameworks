//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SAUIAudioData, VSSpeechRequest;

@interface AFUISpeechSynthesisElement : NSObject
{
    NSString *_text;
    BOOL _isPhonetic;
    BOOL _isSilent;
    BOOL _synthesizesWhileRecording;
    BOOL _eligibleForSynthesis;
    BOOL _provisional;
    BOOL _preprationBlockCompleted;
    BOOL _durationHasElapsed;
    SAUIAudioData *_audioData;
    NSString *_identifier;
    VSSpeechRequest *_speechRequest;
    long long _synthesisResult;
    id <AFUISpeechSynthesisElementDelegate> _delegate;
    NSString *_animationIdentifier;
    CDUnknownBlockType _completion;
}

@property(setter=_setDurationHasElapsed:) BOOL durationHasElapsed; // @synthesize durationHasElapsed=_durationHasElapsed;
@property(setter=_setPreparationBlockCompleted:) BOOL preprationBlockCompleted; // @synthesize preprationBlockCompleted=_preprationBlockCompleted;
@property(readonly, nonatomic, getter=_completion) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *animationIdentifier; // @synthesize animationIdentifier=_animationIdentifier;
@property(nonatomic) __weak id <AFUISpeechSynthesisElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long synthesisResult; // @synthesize synthesisResult=_synthesisResult;
@property(retain, nonatomic) VSSpeechRequest *speechRequest; // @synthesize speechRequest=_speechRequest;
@property(readonly, nonatomic, getter=isProvisional) BOOL provisional; // @synthesize provisional=_provisional;
@property(nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) BOOL eligibleForSynthesis; // @synthesize eligibleForSynthesis=_eligibleForSynthesis;
@property(nonatomic) BOOL synthesizesWhileRecording; // @synthesize synthesizesWhileRecording=_synthesizesWhileRecording;
@property(nonatomic) BOOL isSilent; // @synthesize isSilent=_isSilent;
@property(nonatomic) BOOL isPhonetic; // @synthesize isPhonetic=_isPhonetic;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) SAUIAudioData *audioData; // @synthesize audioData=_audioData;
@property(copy, nonatomic, setter=_setText:) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)description;
- (id)init;
- (id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 isPhonetic:(BOOL)arg4 isSilent:(BOOL)arg5 synthesizesWhileRecording:(BOOL)arg6 provisional:(BOOL)arg7 eligibleAfterDuration:(double)arg8 preparation:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10 animationIdentifier:(id)arg11;

@end

