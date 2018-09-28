//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCAudioIOControllerDelegate.h"
#import "VCAudioIOControllerSink.h"
#import "VCAudioIOControllerSource.h"

@class NSString, VCAudioIOControllerClient;

__attribute__((visibility("hidden")))
@interface VCAudioIO : NSObject <VCAudioIOControllerSource, VCAudioIOControllerSink, VCAudioIOControllerDelegate>
{
    id <VCAudioIOControllerControl> _audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id _delegate;
    id <VCAudioIODelegate><VCAudioIOSource><VCAudioIOSink> _loadedDelegate;
    struct AudioStreamBasicDescription _clientFormat;
    unsigned int _clientSamplesPerFrame;
    BOOL _isMuted;
    BOOL _isGKVoiceChat;
    struct AudioStreamBasicDescription _controllerFormat;
    unsigned int _controllerSamplesPerFrame;
    BOOL _isControllerAudioFormatValid;
    BOOL _isControllerReset;
    BOOL _isConverterNeeded;
    struct _opaque_pthread_mutex_t _stateMutex;
    unsigned int _state;
    CDUnknownBlockType _startCompletionBlock;
    CDUnknownBlockType _stopCompletionBlock;
    struct _VCAudioEndpointData _sourceData;
    struct _VCAudioEndpointData _sinkData;
}

+ (id)controllerForDeviceRole:(int)arg1;
@property(readonly, nonatomic) struct AudioStreamBasicDescription controllerFormat; // @synthesize controllerFormat=_controllerFormat;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_isMuted;
@property(readonly, nonatomic) struct AudioStreamBasicDescription clientAudioFormat; // @synthesize clientAudioFormat=_clientFormat;
@property(readonly, nonatomic) unsigned int samplesPerFrame; // @synthesize samplesPerFrame=_clientSamplesPerFrame;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1 controllerTime:(const struct _VCAudioIOControllerTime *)arg2;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1 controllerTime:(const struct _VCAudioIOControllerTime *)arg2;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didResume;
- (void)didSuspend;
- (void)controllerFormatChanged:(struct AudioStreamBasicDescription)arg1;
- (void)didStop:(BOOL)arg1 error:(id)arg2;
- (void)didStart:(BOOL)arg1 error:(id)arg2;
- (void)setClientFormat:(struct AudioStreamBasicDescription)arg1;
- (void)releaseConverters;
- (BOOL)createConverterForSource:(BOOL)arg1 error:(id *)arg2;
- (unsigned int)computeTimestampForControllerTime:(const struct _VCAudioIOControllerTime *)arg1 hostTime:(double)arg2 endpoint:(struct _VCAudioEndpointData *)arg3;
@property(nonatomic) unsigned char direction;
- (void)setMute:(BOOL)arg1;
@property(nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
- (void)setRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo *)arg1;
- (id)delegate;
- (void)forceCleanup;
- (void)dealloc;
- (BOOL)reconfigureWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(BOOL)arg4;
- (id)initWithOperatingMode:(int)arg1 deviceRole:(int)arg2 direction:(unsigned char)arg3 allowAudioRecording:(BOOL)arg4 delegate:(id)arg5 clientPid:(int)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

