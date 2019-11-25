//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioHistoryObjectDelegate.h"
#import "dspd_DSPDelegate.h"

@class AudioDSPManager, AudioHistoryObject, NSString;

__attribute__((visibility("hidden")))
@interface AudioDSPManagerProxy : NSObject <AudioHistoryObjectDelegate, dspd_DSPDelegate>
{
    AudioDSPManager *_audioDSPManager;
    AudioHistoryObject *_audioHistory;
    struct mutex _mutex;
    id <AudioDSPManagerProxyDelegate> _delegate;
}

+ (id)deserializeStateForAudioHistorySystem:(id)arg1 fromData:(id)arg2;
@property(nonatomic) __weak id <AudioDSPManagerProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)simulateAudioHistoryEventForSystem:(id)arg1 withType:(id)arg2 andPayload:(id)arg3;
- (BOOL)shouldSerializeStateForAudioHistorySystem:(id)arg1;
- (id)serializeStateForAudioHistorySystem:(id)arg1;
- (expected_60ac6007)virtualMasterStereoPan:(unsigned long long)arg1;
- (struct error_code)setVirtualMasterStereoPan:(unsigned long long)arg1 stereoPan:(float)arg2;
- (expected_60ac6007)virtualMasterVolume:(unsigned long long)arg1;
- (struct error_code)setVirtualMasterVolume:(unsigned long long)arg1 scalarVolume:(float)arg2;
- (expected_336b2855)volumeCapabilities:(unsigned long long)arg1;
- (struct error_code)setGraphVolumeDelegate:(id)arg1;
- (struct error_code)setVolumeNotificationDelegate:(id)arg1;
- (struct error_code)setHardwareVolumeDelegate:(id)arg1;
@property(readonly, nonatomic) vector_df89e1f1 scalarVolumeRecords;
- (vector_e9e5d60e)setScalarVolumeRecords:(const vector_df89e1f1 *)arg1;
- (struct error_code)fadeVolumeLevel:(float)arg1 ioControllerID:(unsigned long long)arg2 direction:(unsigned char)arg3 portID:(optional_5c48748e)arg4 duration:(duration_34584d68)arg5 completionHandler:(function_f5b89e9d)arg6;
- (expected_ea5d568f)stereoPanChannels:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)stereoPanControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setStereoPan:(unsigned long long)arg1 element:(unsigned int)arg2 stereoPan:(float)arg3;
- (expected_60ac6007)stereoPan:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_1e8b1ea0)stereoPanControlSettable:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)muteControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setMute:(unsigned long long)arg1 element:(unsigned int)arg2 isMute:(_Bool)arg3;
- (expected_1e8b1ea0)mute:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_1e8b1ea0)muteControlSettable:(unsigned long long)arg1 element:(unsigned int)arg2;
- (void)levelControlChanged:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_60ac6007)convertDecibelsToScalar:(unsigned long long)arg1 element:(unsigned int)arg2 decibelVolume:(float)arg3;
- (expected_60ac6007)convertScalarToDecibels:(unsigned long long)arg1 element:(unsigned int)arg2 scalarVolume:(float)arg3;
- (expected_5f904053)decibelVolumeRange:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setDecibelVolume:(unsigned long long)arg1 element:(unsigned int)arg2 decibelVolume:(float)arg3;
- (expected_60ac6007)decibelVolume:(unsigned long long)arg1 element:(unsigned int)arg2;
- (struct error_code)setScalarVolume:(unsigned long long)arg1 element:(unsigned int)arg2 scalarVolume:(float)arg3;
- (expected_60ac6007)scalarVolume:(unsigned long long)arg1 element:(unsigned int)arg2;
- (expected_1e8b1ea0)levelControlSettable:(unsigned long long)arg1 element:(unsigned int)arg2;
@property(readonly, nonatomic) vector_a93e9522 muteRecords;
- (vector_e9e5d60e)setMuteRecords:(const vector_a93e9522 *)arg1;
- (expected_27549f77)supportedPublicStreamFormats:(id)arg1;
- (optional_95a1d2b1)activeMicrophoneConfiguration:(unsigned long long)arg1 ioControllerID:(unsigned long long)arg2;
- (optional_4a6ac3f9)simulateMicrophoneConfigurationAvailability:(unsigned long long)arg1 configuration:(id)arg2;
- (expected_af0f637c)simulateConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_af0f637c)simulateConfigurationChange:(id)arg1;
- (expected_025c1a52)configurationChangeComplete:(int)arg1 dspMutation:(function_71b6729b)arg2;
- (expected_0910f26e)adaptToConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_0910f26e)adaptToConfigurationChange:(id)arg1;
- (expected_2b9a0a05)negotiateConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_2b9a0a05)negotiateConfigurationChange:(id)arg1;
- (id)supportedPublicStreamFormatRequest;
- (id)deactivationChangeRequestWithSession:(unsigned int)arg1;
- (id)activationChangeRequestWithSession:(unsigned int)arg1;
- (id)initWithAudioDSPManager:(id)arg1;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

