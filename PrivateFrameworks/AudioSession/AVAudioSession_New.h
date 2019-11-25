//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioHardwareControlling.h"

@class AVAudioIOController, AVAudioSessionPortDescription_New, AVAudioSessionRouteDescription_New, NSArray, NSString;

@interface AVAudioSession_New : NSObject <AVAudioHardwareControlling>
{
    void *_impl;
    struct synchronized<std::__1::shared_ptr<as::client::Session>, caulk::shared_ptr_mutex<as::client::KVOMutex>, as::client::unguarded_accessor<std::__1::shared_ptr<as::client::Session>>> _guarded_impl;
}

+ (id)auxiliarySessionWithName:(id)arg1;
+ (id)sharedInstance;
+ (id)primarySession;
+ (id)auxiliarySession;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)destroyIOStateChangeBlock:(long long)arg1;
- (long long)createIOStateChangeBlock:(CDUnknownBlockType)arg1;
@property(readonly) __weak AVAudioIOController *decoupledInputIOController;
@property(readonly) __weak AVAudioIOController *IOController;
@property(readonly) AVAudioSessionRouteDescription_New *currentRoute;
@property(readonly, copy) NSArray *connectedOutputs;
@property(readonly, copy) NSArray *connectedInputs;
@property(readonly) NSArray *availableOutputs;
@property(readonly) NSArray *availableInputs;
- (void)setMicrophoneFollowsCamera:(BOOL)arg1;
- (BOOL)microphoneFollowsCamera;
- (BOOL)setPreferredOutput:(id)arg1 error:(id *)arg2;
@property(readonly) AVAudioSessionPortDescription_New *preferredOutput;
- (BOOL)setPreferredInput:(id)arg1 error:(id *)arg2;
@property(readonly) AVAudioSessionPortDescription_New *preferredInput;
- (BOOL)setPreferredMasterDevice:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *preferredMasterDevice;
- (BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)overriddenOutputAudioPort;
- (BOOL)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
@property(readonly) unsigned long long routeSharingPolicy;
- (BOOL)setMode:(id)arg1 error:(id *)arg2;
- (BOOL)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setCategory:(id)arg1 error:(id *)arg2;
@property(readonly) unsigned long long categoryOptions;
@property(readonly) NSString *mode;
@property(readonly) NSString *category;
- (BOOL)reconfigureWhileActiveUsingBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned int hardwareControlToken;
- (void)_invalidate;
- (id)initAuxiliarySessionWithName:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 manager:(id)arg2 proxying:(unsigned int)arg3;
- (void)deactivateWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)activateWithOptions:(unsigned long long)arg1 activationHandler:(CDUnknownBlockType)arg2;
- (BOOL)deactivateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)activateWithOptions:(unsigned long long)arg1 ioStateChangeEvent:(id *)arg2 error:(id *)arg3;
- (BOOL)activateWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)setActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)setActive:(BOOL)arg1 error:(id *)arg2;
@property(readonly) float outputVolume;
@property(readonly) unsigned long long promptStyle;
@property(readonly) BOOL secondaryAudioShouldBeSilencedHint;
@property(readonly, getter=isOtherAudioPlaying) BOOL otherAudioPlaying;
- (id)portFromUID:(id)arg1;
- (BOOL)setAggregatedIOPreference:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly) unsigned long long aggregatedIOPreference;
- (BOOL)setProcessOwningIOResources:(int)arg1 error:(id *)arg2;
- (int)processOwningIOResources;
- (unsigned int)opaqueSessionToken;
- (unsigned int)opaqueSessionID;
- (BOOL)selectIndependentRoutingContext:(id *)arg1;
- (BOOL)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)setBypassRingerSwitchPolicy:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setInterruptionPriority:(long long)arg1 error:(id *)arg2;
- (long long)interruptionPriority;
- (BOOL)silenceOutput:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)preferredIOBufferFrameSize;
- (BOOL)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)setDisallowedPorts:(id)arg1 error:(id *)arg2;
- (BOOL)clearInputPreferences:(id *)arg1;
- (BOOL)setActivationContext:(id)arg1 error:(id *)arg2;
- (BOOL)setDefaultChatMode:(id)arg1 error:(id *)arg2;
- (BOOL)setIAmTheAssistant:(BOOL)arg1 error:(id *)arg2;
- (BOOL)fixHardwareFormatToMultiChannel:(BOOL)arg1 error:(id *)arg2;
- (BOOL)isHardwareFormatFixedToMultiChannel;
- (void)setAllowAllBuiltInDataSources:(BOOL)arg1;
- (BOOL)allowAllBuiltInDataSources;
- (BOOL)setInterruptionFadeDuration:(id)arg1 error:(id *)arg2;
- (BOOL)setRecordingFromRemoteInput:(BOOL)arg1 error:(id *)arg2;
- (BOOL)recordingFromRemoteInput;
- (BOOL)setRequiresNoAudioResources:(BOOL)arg1 error:(id *)arg2;
- (BOOL)setUsingLongFormAudio:(BOOL)arg1 error:(id *)arg2;
- (BOOL)usingLongFormAudio;
- (BOOL)setForceSoundCheck:(BOOL)arg1 error:(id *)arg2;
- (BOOL)forceSoundCheck;
- (BOOL)isPiPAvailable;
- (BOOL)isEarpieceActiveNoiseCancelationEnabled;
- (BOOL)isDolbyAtmosAvailable;
- (BOOL)isDolbyDigitalEncoderAvailable;
- (long long)audioFormat;
- (id)audioFormats;
- (id)initAuxiliarySession;
- (BOOL)preferDecoupledIO:(BOOL)arg1 error:(id *)arg2;
- (BOOL)decoupledIO;
- (void)registerWithServer;
- (void)requestRecordPermission:(CDUnknownBlockType)arg1;
- (unsigned long long)recordPermission;
- (void)activateWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)setAudioClockDevice:(id)arg1 error:(id *)arg2;
- (id)audioClockDevice;
- (id)availableModes;
- (id)availableCategories;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

