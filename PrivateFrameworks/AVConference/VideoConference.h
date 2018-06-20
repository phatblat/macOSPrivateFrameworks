//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKNATObserverDelegate.h"
#import "VCAudioIODelegate.h"
#import "VCAudioIOSink.h"
#import "VCAudioIOSource.h"
#import "VCAudioPowerLevelMonitorDelegate.h"
#import "VCCallSessionDelegate.h"
#import "VCMomentTransportDelegate.h"
#import "VCVideoCaptureClient.h"

@class CameraConferenceSynchronizer, FFTMeter, GKNATObserver, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<VideoConferenceChannelQualityDelegate>, NSObject<VideoConferenceDelegate>, NSObject<VideoConferenceSpeakingDelegate>, NSString, VCAudioIO, VCAudioPowerLevelMonitor, VCCallSession, VCImageQueue, VCMoments, VCVideoRule, VideoConferenceManager;

@interface VideoConference : NSObject <VCCallSessionDelegate, VCVideoCaptureClient, GKNATObserverDelegate, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate, VCAudioPowerLevelMonitorDelegate, VCMomentTransportDelegate>
{
    int _clientPid;
    id delegate;
    id _captionsDelegate;
    VCAudioIO *_audioIO;
    struct opaqueVCAudioBufferList *_sourceBuffer;
    struct opaqueVCAudioBufferList *_sinkBuffer;
    struct opaqueVCAudioBufferList *_sinkBufferMix;
    VideoConferenceManager *manager;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableDictionary *sessionDict;
    NSArray *sessionArray;
    NSMutableArray *_startedSessions;
    BOOL outputMeteringEnabled;
    BOOL inputMeteringEnabled;
    BOOL inputFrequencyMeteringEnabled;
    BOOL outputFrequencyMeteringEnabled;
    FFTMeter *_inputFFTMeter;
    FFTMeter *_outputFFTMeter;
    float outputMeterLevel;
    float inputMeterLevel;
    BOOL microphoneMuted;
    VCImageQueue *frontQueue;
    VCImageQueue *backQueue;
    VCImageQueue *screenQueue;
    VCImageQueue *currentQueue;
    char *currentFacing;
    int localFrameWidth;
    int localFrameHeight;
    int remoteFrameWidth;
    int remoteFrameHeight;
    VCVideoRule *conferenceCaptureRule;
    CameraConferenceSynchronizer *synchronizer;
    double dAudioHostTime;
    struct _opaque_pthread_mutex_t xRemoteLayer;
    struct _opaque_pthread_mutex_t xAudioTS;
    unsigned int dwAudioTS;
    BOOL forceNoICE;
    BOOL useViceroyBlobFormat;
    int chatMode;
    BOOL isFocus;
    NSString *currentFocus;
    VCCallSession *currentFocusSession;
    BOOL hasMic;
    float conferenceVolume;
    NSArray *mutedPeers;
    NSArray *connectedPeers;
    unsigned int talkingPeersLimit;
    unsigned char speakingArray[16];
    NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    float longTerm;
    float shortTerm;
    BOOL isTalking;
    unsigned int talkTime;
    int packetsPerBundle;
    unsigned int recvRTPTimeStamp;
    BOOL disableVAD;
    BOOL requiresWifi;
    unsigned int preferredCodec;
    int upstreamBandwidth;
    int downstreamBandwidth;
    BOOL useRateControl;
    BOOL isGKVoiceChat;
    BOOL isUsingSuppression;
    BOOL shouldTimeoutPackets;
    unsigned char requestedCameraType;
    BOOL useCompressedConnectionData;
    NSDictionary *natTypeDictionary;
    struct _opaque_pthread_mutex_t natMutex;
    unsigned int lastSentAudioSampleTime;
    VCAudioPowerLevelMonitor *_remoteAudioPowerLevelMonitor;
    GKNATObserver *natObserver;
    unsigned int mostRecentStartedCall;
    unsigned int lastActiveCall;
    BOOL _isWarmedUp;
    BOOL bweOperatingModeInitialized;
    BOOL useNewBWEMode;
    BOOL useActiveProbingSenderLog;
    BOOL useFakeLargeFrameMode;
    BOOL shouldPrioritizeParticipantIDForSIPInvite;
    BOOL shouldResumeAudio;
    BOOL shouldResumeVideo;
    unsigned int timeStampUpdateCounter;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    unsigned int _transportType;
    int conferenceOperatingMode;
    int _deviceRole;
    BOOL isValid;
    VCMoments *_vcMoments;
}

@property(nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;
@property(readonly) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property BOOL isValid; // @synthesize isValid;
@property unsigned int lastActiveCall; // @synthesize lastActiveCall;
@property(readonly, nonatomic) VCVideoRule *conferenceCaptureRule; // @synthesize conferenceCaptureRule;
@property(nonatomic) BOOL shouldPrioritizeParticipantIDForSIPInvite; // @synthesize shouldPrioritizeParticipantIDForSIPInvite;
@property(readonly) int localFrameHeight; // @synthesize localFrameHeight;
@property(readonly) int localFrameWidth; // @synthesize localFrameWidth;
@property BOOL disableVAD; // @synthesize disableVAD;
@property unsigned int talkingPeersLimit; // @synthesize talkingPeersLimit;
@property(nonatomic) BOOL requiresWifi; // @synthesize requiresWifi;
@property(nonatomic) BOOL isGKVoiceChat; // @synthesize isGKVoiceChat;
@property(nonatomic) BOOL useCompressedConnectionData; // @synthesize useCompressedConnectionData;
@property BOOL shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property(nonatomic) BOOL isUsingSuppression; // @synthesize isUsingSuppression;
@property(nonatomic) BOOL useViceroyBlobFormat; // @synthesize useViceroyBlobFormat;
@property NSObject<VideoConferenceSpeakingDelegate> *speakingDelegate; // @synthesize speakingDelegate;
@property int downstreamBandwidth; // @synthesize downstreamBandwidth;
@property int upstreamBandwidth; // @synthesize upstreamBandwidth;
@property(nonatomic) unsigned int preferredCodec; // @synthesize preferredCodec;
@property(nonatomic) int packetsPerBundle; // @synthesize packetsPerBundle;
@property(copy, nonatomic) NSString *currentFocus; // @synthesize currentFocus;
@property(nonatomic) BOOL isFocus; // @synthesize isFocus;
@property(nonatomic) int chatMode; // @synthesize chatMode;
- (void)setCanProcessAudio:(BOOL)arg1;
- (BOOL)canProcessAudio;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (float)powerIntToFloat:(unsigned char)arg1;
- (unsigned char)powerFloatToInt:(float)arg1;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)processRelayUpdate:(unsigned int)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayRequestResponse:(unsigned int)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property float conferenceVolume;
@property BOOL hasMic;
- (void)forceNoICE:(BOOL)arg1;
- (id)statsForCallID:(unsigned int)arg1;
- (struct CGSize)remoteFrameSizeForCallID:(unsigned int)arg1;
- (double)roundTripTimeForCallID:(unsigned int)arg1;
- (double)localPacketLossRateForCallID:(unsigned int)arg1;
- (double)remotePacketLossRateForCallID:(unsigned int)arg1;
- (double)remoteBitrateForCallID:(unsigned int)arg1;
- (double)remoteFramerateForCallID:(unsigned int)arg1;
- (double)localBitrateForCallID:(unsigned int)arg1;
- (double)localFramerateForCallID:(unsigned int)arg1;
@property(nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
- (void)setCallReportProtobuf:(unsigned int)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3;
- (void)setCallReport:(unsigned int)arg1 withReport:(id)arg2;
- (void)remoteCancelledCallID:(unsigned int)arg1;
- (void)cancelCallID:(unsigned int)arg1;
- (void)stopCallID:(unsigned int)arg1;
- (void)stopAllCalls:(id)arg1;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
- (BOOL)setActive:(BOOL)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id *)arg8;
- (void)setUpAudioIO:(int)arg1;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id *)arg10;
- (BOOL)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 oldCallID:(unsigned int)arg3 usingInviteData:(id)arg4 isCaller:(BOOL)arg5 relayResponseDict:(id)arg6 didOriginateRelayRequest:(BOOL)arg7 capabilities:(id)arg8 idsSocket:(int)arg9 destination:(id)arg10 error:(id *)arg11;
- (int)conferenceOperatingMode;
- (void)setConferenceOperatingMode:(int)arg1;
- (BOOL)shouldReinitializeCallWithDuration:(double)arg1 forCallID:(unsigned int)arg2;
- (void)updateCapabilities:(id)arg1 forCallID:(unsigned int)arg2;
- (void)updateCapabilities:(id)arg1 forSession:(id)arg2;
- (void)setPeerReportingID:(id)arg1 sessionID:(id)arg2 callID:(unsigned int)arg3;
- (void)setSessionID:(id)arg1 callID:(unsigned int)arg2;
- (void)setPeerCN:(id)arg1 callID:(unsigned int)arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (void)setSendAudio:(BOOL)arg1 forCallID:(unsigned int)arg2;
- (BOOL)shouldSendAudioForCallID:(unsigned int)arg1;
- (BOOL)getIsAudioPaused:(char *)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)getIsVideoPaused:(char *)arg1 callID:(unsigned int)arg2 error:(id *)arg3;
- (void)didReceiveCaptions:(id)arg1 remoteClient:(unsigned int)arg2;
- (void)vcAudioPowerLevelMonitor:(id)arg1 isAudioBelowThreshold:(BOOL)arg2;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
- (id)callMetadataForCallID:(unsigned int)arg1;
- (void)notifyDelegateOfLocalVariablesChange;
- (int)natTypeForCallSessions:(const char *)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (id)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int *)arg2 error:(id *)arg3;
- (void)connectionBlobForParticipantID:(id)arg1 callID:(unsigned int)arg2 block:(CDUnknownBlockType)arg3 queue:(id)arg4 caller:(id)arg5;
- (void)inviteDataForParticipantID:(id)arg1 callID:(unsigned int)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(unsigned long long)arg4 block:(CDUnknownBlockType)arg5 queue:(id)arg6 caller:(id)arg7;
- (void)cleanupQueues;
@property(readonly, nonatomic) float inputMeterLevel;
@property(readonly, nonatomic) float outputMeterLevel;
@property(nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(nonatomic) NSObject<VideoConferenceDelegate> *delegate;
- (double)networkQualityForCallID:(unsigned int)arg1;
- (double)packetLossRateForCallID:(unsigned int)arg1;
- (int)natType;
- (void)setupNATObserver;
- (void)warmupForCall;
- (void)sendData:(id)arg1 toCallID:(unsigned int)arg2 encrypted:(BOOL)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)cleanupManager;
- (id)newSessionWithDeviceRole:(int)arg1;
- (unsigned int)initializeNewCallWithDeviceRole:(int)arg1;
- (void)dealloc;
- (id)initWithClientPid:(int)arg1;
- (int)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (int)pullDecodedAsFocusClient:(struct opaqueVCAudioBufferList *)arg1;
- (int)pullDecodedAsFocus:(struct opaqueVCAudioBufferList *)arg1;
- (BOOL)recvSamplesForSession:(id)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2;
- (void)updateMeters:(unsigned short)arg1;
- (void)updateMeter:(unsigned char)arg1 forParticipant:(id)arg2 atIndex:(unsigned int)arg3;
- (void)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)updateAudioTimestampsForSession:(id)arg1 withNewSampleTime:(unsigned int)arg2 hostTime:(double)arg3 numSamples:(int)arg4;
- (void)captureAsFocusClient:(struct opaqueVCAudioBufferList *)arg1;
- (void)captureAsFocus:(struct opaqueVCAudioBufferList *)arg1;
- (void)calculateMixingArrays:(unsigned int *)arg1 talkingMask:(unsigned int)arg2;
- (unsigned int)calculateTalkingMaskAtTimeStamp:(unsigned int)arg1;
- (unsigned int)pruneQuietestPeers:(unsigned int)arg1 talking:(unsigned int)arg2 mask:(unsigned int)arg3 meters:(char *)arg4;
- (BOOL)updateSpeaking:(unsigned int)arg1 timeStamp:(unsigned int)arg2;
- (int)sipCallbackNotification:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (int)stateForCallID:(unsigned int)arg1;
- (id)sessionForIncomingParticipantID:(id)arg1;
- (id)loopbackSessionWaitingForSIPInvite;
- (BOOL)hasSessionWaitingForSIPInvite;
- (id)sessionForSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)conferenceMatchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (id)sessionForParticipantID:(id)arg1;
- (BOOL)matchesParticipantID:(id)arg1;
- (id)openSessionForParticipant:(id)arg1;
- (unsigned int)callIDForOpenSessionWithParticipantID:(id)arg1;
- (BOOL)matchesOpenSessionForParticipantID:(id)arg1;
- (BOOL)matchesCallID:(unsigned int)arg1;
- (void)markUnfinishedSessions;
- (BOOL)setPauseVideo:(BOOL)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1;
- (void)cleanupSession:(id)arg1 didRemoteCancel:(BOOL)arg2;
- (void)threadSafeCleanupSession:(id)arg1;
- (void)defaultCleanupSession:(id)arg1;
- (void)cleanupProc:(id)arg1;
- (void)cleanupSession:(id)arg1 withDelay:(unsigned long long)arg2;
- (void)cancelCallID:(unsigned int)arg1 error:(id)arg2;
- (void)stopCallID:(unsigned int)arg1 didRemoteCancel:(BOOL)arg2 error:(id)arg3;
- (void)unlock;
- (void)rdlock;
- (int)tryrdlock;
- (void)wrlock;
- (void)session:(id)arg1 didReceiveMomentsRequest:(id)arg2;
- (unsigned int)momentsCapabilitiesWithNegotiationBlobMomentsSettings_Capabilities:(int)arg1;
- (void)session:(id)arg1 setMomentsCapabilities:(int)arg2;
- (struct AudioStreamBasicDescription)audioIOFormat;
- (void)session:(id)arg1 setRemoteBasebandCodecType:(unsigned int)arg2 sampleRate:(double)arg3;
- (void)session:(id)arg1 stopAudioWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)session:(id)arg1 startAudioWithFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg2 internalFormat:(struct AudioStreamBasicDescription)arg3 internalSamplesPerFrame:(unsigned int)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)session:(id)arg1 changeVideoRulesToCaptureRule:(id)arg2 encodeRule:(id)arg3 featuresListString:(id)arg4;
- (void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
- (void)session:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)session:(id)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3;
- (void)didChangeLocalVariablesForSession:(id)arg1;
- (void)session:(id)arg1 didChangeRemoteScreenAttributes:(id)arg2;
- (void)session:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)session:(id)arg1 sendRelayResponse:(id)arg2;
- (void)session:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)session:(id)arg1 didPauseVideo:(BOOL)arg2 error:(id)arg3;
- (void)session:(id)arg1 didPauseAudio:(BOOL)arg2 error:(id)arg3;
- (BOOL)session:(id)arg1 didStopVideoIO:(BOOL)arg2 error:(id *)arg3;
- (BOOL)session:(id)arg1 stopVideoReceive:(id *)arg2 isPausing:(BOOL)arg3;
- (BOOL)deregisterForVideoFramesWithDeviceRole:(int)arg1;
- (BOOL)stopVideoSend:(BOOL)arg1 error:(id *)arg2;
- (BOOL)session:(id)arg1 startVideoReceive:(id *)arg2;
- (BOOL)registerForVideoFramesWithDeviceRole:(int)arg1 captureRule:(id)arg2 isUnpausing:(BOOL)arg3;
- (BOOL)session:(id)arg1 startVideoSend:(id *)arg2 captureRuleWifi:(id)arg3 captureRuleCell:(id)arg4 interface:(int)arg5 isUnpausing:(BOOL)arg6;
- (void)session:(id)arg1 didReceiveData:(id)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned int)arg3;
- (_Bool)session:(id)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withScreenAttributes:(id)arg4 videoAttributes:(id)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7;
- (void)session:(id)arg1 didChangeVideoRule:(id)arg2;
- (void)session:(id)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(id)arg1 remoteMediaStalled:(BOOL)arg2;
- (void)session:(id)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(id)arg1 didStopWithError:(id)arg2;
- (void)session:(id)arg1 cleanUpWithDelay:(long long)arg2 error:(id)arg3;
- (void)session:(id)arg1 didStart:(BOOL)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(id)arg4 remoteInterfaceType:(id)arg5 error:(id)arg6;
- (void)session:(id)arg1 connectionDidChangeWithLocalInterfaceType:(id)arg2 remoteInterfaceType:(id)arg3 callID:(unsigned int)arg4;
- (void)session:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)session:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (void)thermalLevelDidChange:(int)arg1;
- (void)setConferenceVisualRectangle:(struct CGRect)arg1 forCallID:(unsigned int)arg2;
- (void)setConferenceState:(unsigned int)arg1 forCallID:(unsigned int)arg2;
- (void)shouldSendBlackFrame:(BOOL)arg1 callID:(id)arg2;
- (void)avConferenceScreenCaptureError:(id)arg1;
- (void)avConferencePreviewError:(id)arg1;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (_Bool)initiateResolutionChangeToWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (id)clientCaptureRule;
- (void)NATTypeDictionaryUpdated:(id)arg1;
- (void)triggerInterfaceChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

