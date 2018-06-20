//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCAudioIODelegate.h"
#import "VCAudioIOSink.h"
#import "VCAudioIOSource.h"
#import "VCConnectionChangedHandler.h"
#import "VCMediaStreamDelegate.h"
#import "VCRedundancyControllerDelegate.h"
#import "VCSecurityEventHandler.h"

@class AVCBasebandCongestionDetector, AVCStatisticsCollector, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, VCAudioIO, VCAudioPowerSpectrumSource, VCAudioRuleCollection, VCCallInfoBlob, VCMediaNegotiator, VCRedundancyControllerAudio, VCRedundancyControllerVideo;

__attribute__((visibility("hidden")))
@interface VCSessionParticipant : NSObject <VCMediaStreamDelegate, VCSecurityEventHandler, VCAudioIOSink, VCAudioIOSource, VCAudioIODelegate, VCConnectionChangedHandler, VCRedundancyControllerDelegate>
{
    unsigned int _state;
    union tagNTP _creationTime;
    NSObject<OS_dispatch_queue> *_participantQueue;
    int _processId;
    id _delegate;
    id _streamDelegate;
    long long _participantVideoToken;
    NSString *_uuid;
    NSString *_sessionUUID;
    NSString *_idsDestination;
    unsigned long long _idsParticipantID;
    NSData *_opaqueData;
    VCCallInfoBlob *_callInfoBlob;
    NSData *_mediaBlobCompressed;
    NSDictionary *_participantInfo;
    unsigned int _transportSessionID;
    VCAudioRuleCollection *_supportedAudioRules;
    NSMutableSet *_startingAudioStreams;
    NSMutableSet *_stoppingAudioStreams;
    NSMutableSet *_runningAudioStreams;
    NSMutableSet *_pausingAudioStreams;
    NSMutableSet *_resumingAudioStreams;
    NSMutableSet *_pausedAudioStreams;
    NSMutableSet *_startingVideoStreams;
    NSMutableSet *_stoppingVideoStreams;
    NSMutableSet *_runningVideoStreams;
    NSMutableSet *_pausingVideoStreams;
    NSMutableSet *_resumingVideoStreams;
    NSMutableSet *_pausedVideoStreams;
    NSMutableArray *_audioStreams;
    NSMutableArray *_videoStreams;
    NSMutableDictionary *_streamMap;
    AVCStatisticsCollector *_statisticsCollector;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    float _volume;
    float _audioPosition;
    BOOL _isMuted;
    BOOL _audioEnabled;
    BOOL _videoEnabled;
    BOOL _audioPaused;
    BOOL _videoPaused;
    BOOL _audioPausedToStart;
    BOOL _videoPausedToStart;
    BOOL _audioStateChangeInProgress;
    BOOL _videoStateChangeInProgress;
    BOOL _audioIOStateChangeInProgress;
    VCAudioIO *_audioIO;
    struct opaqueVCAudioBufferList *_sourceBuffer;
    VCMediaNegotiator *_mediaNegotiator;
    VCAudioPowerSpectrumSource *_powerSpectrumSource;
    BOOL _localOnWiFi;
    VCRedundancyControllerAudio *_audioRedundancyController;
    VCRedundancyControllerVideo *_videoRedundancyController;
    id _reportingAgentWeak;
}

@property(nonatomic, getter=isLocalOnWiFi) BOOL localOnWiFi; // @synthesize localOnWiFi=_localOnWiFi;
@property(readonly, nonatomic) VCMediaNegotiator *mediaNegotiator; // @synthesize mediaNegotiator=_mediaNegotiator;
@property(readonly, nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property(readonly, nonatomic) VCAudioRuleCollection *supportedAudioRules; // @synthesize supportedAudioRules=_supportedAudioRules;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(readonly, nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isVideoPaused) BOOL videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isAudioPaused) BOOL audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) long long participantVideoToken; // @synthesize participantVideoToken=_participantVideoToken;
@property(readonly, nonatomic) union tagNTP creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSData *opaqueData; // @synthesize opaqueData=_opaqueData;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)handleEncryptionInfoChange:(id)arg1;
- (void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3;
- (void)collectAudioChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_1c8e0384 *)arg1;
- (void)createRedundancyControllers;
- (BOOL)setAudioPosition:(float)arg1;
- (BOOL)setVolume:(float)arg1;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_isMuted;
@property(readonly, nonatomic) NSArray *allParticipantStreamInfo;
@property(readonly, nonatomic) NSArray *audioStreams;
- (void)updateVideoPaused:(BOOL)arg1;
- (void)applyVideoEnabledSetting:(BOOL)arg1;
- (void)stop;
- (void)start;
@property(nonatomic) id <VCSessionParticipantStreamDelegate> streamDelegate;
@property(readonly, nonatomic) id <VCSessionParticipantDelegate> delegate;
- (char *)participantStateToString:(unsigned int)arg1;
- (BOOL)setState:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3 sessionUUID:(id)arg4;
- (BOOL)configureWithIsContinuity:(BOOL)arg1;
- (BOOL)configureAudioIO;
- (void)completeStreamSetup:(id)arg1;
- (void)setupNetworkAddressesForMediaConfig:(id)arg1;
- (void)processPausedStream:(id)arg1 didPause:(BOOL)arg2;
- (void)processResumedStream:(id)arg1 didResume:(BOOL)arg2;
- (void)processStoppedStream:(id)arg1;
- (void)processStartedStream:(id)arg1 didStart:(BOOL)arg2;
- (void)pauseVideoStreams;
- (void)pauseAudioStreams;
- (void)resumeVideoStreams;
- (void)resumeAudioStreams;
- (void)stopVideoStreams;
- (void)stopAudioStreams;
- (void)stopAudioStreamsCompletion;
- (void)startVideoStreams;
- (void)startAudioStreams;
- (void)startAudioIO;
- (BOOL)isVideoStream:(id)arg1;
- (BOOL)isAudioStream:(id)arg1;
- (BOOL)shouldStartAudioIO;
- (BOOL)isAnyStreamRunning;
- (BOOL)allPausingStreamsPaused;
- (BOOL)allResumingStreamsResumed;
- (BOOL)allStartingStreamsStarted;
- (BOOL)allStoppingStreamsStopped;
- (void)tearDown;
- (id)generateEncryptionKey;
- (id)streamsToString;
@property(readonly, copy) NSString *description;
- (void)dispatchedSetVideoPaused:(BOOL)arg1;
- (void)dispatchedSetAudioPaused:(BOOL)arg1;
- (void)dispatchedSetVideoEnabled:(BOOL)arg1;
- (void)dispatchedSetAudioEnabled:(BOOL)arg1;
- (void)dispatchedStream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
- (void)dispatchedStream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
- (void)dispatchedStreamDidStop:(id)arg1;
- (void)dispatchedStream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)dispatchedStop;
- (void)dispatchedStart;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

