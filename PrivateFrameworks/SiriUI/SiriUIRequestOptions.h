//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AFBulletin, AFRequestInfo, AFSpeechRequestOptions, NSDictionary, NSNumber, NSString, NSURL, SASPronunciationContext;

@interface SiriUIRequestOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _pronunciationRequest;
    BOOL _initialBringUp;
    BOOL _useAutomaticEndpointing;
    BOOL _useStreamingDictation;
    BOOL _acousticIdEnabled;
    BOOL _releaseAudioSessionOnRecordingCompletion;
    BOOL _forListenAfterSpeaking;
    long long _requestSource;
    NSString *_activationDeviceIdentifier;
    AFBulletin *_bulletin;
    NSString *_appBundleIdentifier;
    NSDictionary *_messagesDirectActionContext;
    long long _directActionEvent;
    NSString *_serverCommandId;
    SASPronunciationContext *_pronunciationContext;
    NSString *_text;
    NSURL *_speechFileURL;
    double _expectedTimestamp;
    double _timestamp;
    double _buttonDownTimestamp;
    double _buttonUpTimestamp;
    NSNumber *_homeButtonUpFromBeep;
    NSDictionary *_continuityInfo;
    AFRequestInfo *_requestInfo;
    AFSpeechRequestOptions *_speechRequestOptions;
    long long _listenAfterSpeakingOriginalRequestSource;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long listenAfterSpeakingOriginalRequestSource; // @synthesize listenAfterSpeakingOriginalRequestSource=_listenAfterSpeakingOriginalRequestSource;
@property(nonatomic) BOOL forListenAfterSpeaking; // @synthesize forListenAfterSpeaking=_forListenAfterSpeaking;
@property(nonatomic) BOOL releaseAudioSessionOnRecordingCompletion; // @synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion;
@property(nonatomic) BOOL acousticIdEnabled; // @synthesize acousticIdEnabled=_acousticIdEnabled;
@property(retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions; // @synthesize speechRequestOptions=_speechRequestOptions;
@property(retain, nonatomic) AFRequestInfo *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(copy, nonatomic) NSDictionary *continuityInfo; // @synthesize continuityInfo=_continuityInfo;
@property(retain, nonatomic) NSNumber *homeButtonUpFromBeep; // @synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep;
@property(nonatomic) BOOL useStreamingDictation; // @synthesize useStreamingDictation=_useStreamingDictation;
@property(nonatomic) BOOL useAutomaticEndpointing; // @synthesize useAutomaticEndpointing=_useAutomaticEndpointing;
@property(nonatomic, getter=isInitialBringUp) BOOL initialBringUp; // @synthesize initialBringUp=_initialBringUp;
@property(nonatomic) double buttonUpTimestamp; // @synthesize buttonUpTimestamp=_buttonUpTimestamp;
@property(nonatomic) double buttonDownTimestamp; // @synthesize buttonDownTimestamp=_buttonDownTimestamp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double expectedTimestamp; // @synthesize expectedTimestamp=_expectedTimestamp;
@property(copy, nonatomic) NSURL *speechFileURL; // @synthesize speechFileURL=_speechFileURL;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) SASPronunciationContext *pronunciationContext; // @synthesize pronunciationContext=_pronunciationContext;
@property(nonatomic, getter=isPronunciationRequest) BOOL pronunciationRequest; // @synthesize pronunciationRequest=_pronunciationRequest;
@property(copy, nonatomic) NSString *serverCommandId; // @synthesize serverCommandId=_serverCommandId;
@property(nonatomic) long long directActionEvent; // @synthesize directActionEvent=_directActionEvent;
@property(copy, nonatomic) NSDictionary *messagesDirectActionContext; // @synthesize messagesDirectActionContext=_messagesDirectActionContext;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) AFBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(copy, nonatomic) NSString *activationDeviceIdentifier; // @synthesize activationDeviceIdentifier=_activationDeviceIdentifier;
@property(nonatomic) long long requestSource; // @synthesize requestSource=_requestSource;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isForStark) BOOL forStark;
@property(readonly, nonatomic, getter=isForSpeechRequest) BOOL forSpeechRequest;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_configureStreamingDictationForSource:(long long)arg1;
- (id)init;
- (id)initWithRequestSource:(long long)arg1;

@end

