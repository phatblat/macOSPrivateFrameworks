//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VCDefaults : NSObject
{
    int _forceCaptureWidth;
    int _forceCaptureHeight;
    int _forceEncodeWidth;
    int _forceEncodeHeight;
    int _forceEncodeFramerate;
    int _forceFramerate;
    int _forceBitrate;
    int _forceVideoPayload;
    int _forceRecvVideoPayload;
    int _forceKeyFrameInterval;
}

+ (long long)integerValueForKey:(struct __CFString *)arg1 defaultValue:(long long)arg2;
+ (long long)integerValueForKey:(struct __CFString *)arg1;
+ (double)getDoubleValueForKey:(struct __CFString *)arg1 defaultValue:(double)arg2;
+ (id)sharedInstance;
@property(readonly) unsigned int prominenceInactiveAccumulationThreshold;
@property(readonly) unsigned int prominenceInactiveProbabilityThreshold;
@property(readonly) unsigned int prominenceActiveAccumulationThreshold;
@property(readonly) unsigned int prominenceActiveProbabilityThreshold;
@property(readonly) BOOL forceDisableMessageEncryption;
@property(readonly) BOOL forceDisableMediaEncryption;
- (BOOL)shouldOverrideEffectsFramerate:(unsigned int *)arg1;
@property(readonly) BOOL forceDisableMediaStalled;
@property(readonly) BOOL forceDisableVideoDegraded;
@property(readonly) BOOL forceFaceZoom;
@property(readonly) unsigned int multiwayVideoNetworkBitrateCapCellular;
@property(readonly) unsigned int multiwayVideoNetworkBitrateCapWifi;
@property(readonly) unsigned int multiwayAudioNetworkBitrateCapCellular;
@property(readonly) unsigned int multiwayAudioNetworkBitrateCapWifi;
@property(readonly) BOOL forceAudioPriorityEnabled;
@property(readonly) unsigned char forceAudioPriorityValue;
@property(readonly) unsigned int silenceLevelMovingAveragePeriod;
@property(readonly) float audioVoiceDetectionSensitivity;
@property(readonly) unsigned char audioPriorityRampUpSpeed;
@property(readonly) unsigned char audioPriorityDecayFast;
@property(readonly) unsigned char audioPriorityDecaySlow;
@property(readonly) BOOL forceDisableMediaPriority;
@property(readonly) unsigned int minParticipantCountSendVoiceActiveOnly;
@property(readonly) BOOL forceMuteAtStart;
@property(readonly) BOOL forceEVSWideBand;
@property(readonly) unsigned int maxActiveVideoDecoders;
@property(readonly) unsigned int maxActiveVideoEncoders;
@property(readonly) BOOL dumpMediaBlob;
@property(readonly) BOOL momentsUserPreferenceEnabled;
@property(readonly) BOOL shouldDisplayVideoInfoLayer;
@property(readonly) int localWRMLinkType;
@property(readonly) NSNumber *enableiRATSuggestion;
@property(readonly) BOOL forceIPv6;
@property(readonly) int max2GRate;
@property(readonly) int rateControlForceRxRate;
@property(readonly) int rateControlForceTxRate;
@property(readonly) int rateControlForceRxCap;
@property(readonly) int rateControlForceTxCap;
@property(readonly) BOOL rateControlLogEnabled;
@property(readonly) BOOL rateControlDumpEnabled;
@property(readonly) BOOL mediaQueueDumpEnabled;
@property(readonly) BOOL forceDisableMediaQueue;
@property(readonly) BOOL cannedReplayEnabled;
@property(readonly) int videoStreamRateControlAlgorithm;
@property(readonly) BOOL videoStreamRateControlDumpEnabled;
@property(readonly) int forceVideoStreamRxMinBitrate;
@property(readonly) int forceVideoStreamRxMaxBitrate;
@property(readonly) int forceVideoStreamKeyFrameInterval;
@property(readonly) int forceVideoStreamFramerate;
@property(readonly) int forceVideoStreamTxMinBitrate;
@property(readonly) int forceVideoStreamTxMaxBitrate;
@property(readonly) int forceVideoStreamResolution;
@property(readonly) unsigned int aacBlockSize;
@property(readonly) BOOL useSBR;
@property(readonly) int forceRedMaxDelay;
@property(readonly) int forceRedNumPayloads;
@property(readonly) BOOL disableRed;
@property(readonly) int forceAudioChannelCount;
@property(readonly) BOOL forceUseFloat;
@property(readonly) int forceAudioPowerTimeInterval;
@property(readonly) float forceAudioPowerThreshold;
@property(readonly) int forceAudioHardwareSampleRate;
@property(readonly) int forceAudioPacketsPerBundle;
@property(readonly) int forceAudioBitrate;
@property(readonly) int forceAudioPayload;
@property(readonly) BOOL audioRecordingEnabled;
@property(readonly) int bundleAudio;
@property(readonly) BOOL disableVAD;
@property(readonly) BOOL canDecodeHD;
@property(readonly) int encodingScore;
@property(readonly) int extraPayloads;
@property(readonly) BOOL enablePacketLogging;
@property(readonly) BOOL enableTxBitstreamDump;
@property(readonly) int enableTxSourceYuvDump;
@property(readonly) BOOL enableRecvBitstreamDump;
@property(readonly) BOOL enableVPBLogging;
@property(readonly) int enable2vuyCapture;
@property(readonly) BOOL enableBitstreamCapture;
@property(readonly) BOOL forceARCapture;
@property(readonly) int forceKeyFrameInterval;
@property(readonly) int forceRecvVideoPayload;
@property(readonly) int forceVideoPayload;
@property(readonly) int forceBitrate;
@property(readonly) int forceFramerate;
@property(readonly) int forceEncodeFramerate;
@property(readonly) int forceEncodeHeight;
@property(readonly) int forceEncodeWidth;
@property(readonly) int forceCaptureHeight;
@property(readonly) int forceCaptureWidth;
- (void)seperateString:(id)arg1;
@property(readonly) BOOL forceDisableThermal;
@property(readonly) BOOL forceMultiwayHWI;
@property(readonly) BOOL forceHWI;
@property(readonly) BOOL forceScreenHWI;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allocWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
