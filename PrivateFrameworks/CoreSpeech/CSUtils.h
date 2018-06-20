//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSUtils : NSObject
{
}

+ (id)deviceBuildVersion;
+ (id)deviceUserAssignedName;
+ (double)systemUpTime;
+ (id)deviceProductVersion;
+ (id)deviceProductType;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2;
+ (id)rootQueueWithFixedPriority:(int)arg1;
+ (BOOL)shouldDeinterleaveAudioOnCS;
+ (BOOL)supportPacketDecoding;
+ (BOOL)hasRemoteCoreSpeech;
+ (BOOL)supportRaiseToSpeak;
+ (BOOL)supportSAT;
+ (BOOL)canLookupVoiceTriggerModelFromMobileAsset;
+ (BOOL)supportImplictTraining;
+ (BOOL)supportSmartVolume;
+ (BOOL)supportHybridEndpointer;
+ (BOOL)supportCSTwoShotDecision;
+ (BOOL)supportSelfTriggerSuppression;
+ (BOOL)supportOpportunisticZLL;
+ (BOOL)supportPremiumAssets;
+ (BOOL)supportKeywordDetector;
+ (BOOL)supportContinuousVoiceTrigger;
+ (BOOL)shouldRunVTOnCS;
+ (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id *)arg4;
+ (void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned long long)arg3;
+ (void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3;
+ (id)getSiriLanguageWithFallback:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription)arg2 samplesPerStreamChunk:(unsigned long long)arg3 audioDataAvailableHandler:(CDUnknownBlockType)arg4;
+ (id)spidAudioTrainUtterancesDir;
+ (id)spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;
+ (id)spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;
+ (id)spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;
+ (id)spIdSiriDebugVoiceProfileStoreRootDirectory;
+ (id)spIdDataRootDirectory;
+ (id)spIdSiriDebugVTDataDirectory;
+ (BOOL)spIdAudioLogsCountLimitReached;
+ (id)spIdAudioLogsDir2;
+ (id)spIdAudioLogsDir;
+ (void)createDirectoryIfDoesNotExist:(id)arg1;
+ (id)spIdVoiceProfileImportRootDir;
+ (id)spIdSATModelDirForLocale:(id)arg1 userName:(id)arg2 spidType:(unsigned long long)arg3;
+ (id)spIdSATAudioDirForLocale:(id)arg1 userName:(id)arg2 spidType:(unsigned long long)arg3;
+ (id)spIdSATDirForLocale:(id)arg1 userName:(id)arg2 spidType:(unsigned long long)arg3;
+ (id)spIdSATDirForLocale:(id)arg1 userName:(id)arg2;
+ (id)spIdSATDirForLocale:(id)arg1;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1;
+ (id)stringForCSSATRunMode:(unsigned long long)arg1;
+ (unsigned long long)spIdTypeForString:(id)arg1;
+ (id)stringForCSSpIdType:(unsigned long long)arg1;
+ (id)stringForInvocationStyle:(unsigned long long)arg1;
+ (id)opusRecordSettings;
+ (id)lpcmRecordSettings;
+ (id)voiceTriggerRecordContext;
+ (struct AudioStreamBasicDescription)aiffFileASBD;
+ (struct AudioStreamBasicDescription)utteranceFileASBD;
+ (struct AudioStreamBasicDescription)lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmASBD;
+ (struct AudioStreamBasicDescription)lpcmNonInterleavedASBD;
+ (struct AudioStreamBasicDescription)lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription)opusNarrowBandASBD;
+ (struct AudioStreamBasicDescription)opusASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription)lpcmInt16ASBD;
+ (BOOL)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (void)iterateBitset:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned int)getNumElementInBitset:(unsigned long long)arg1;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (double)getHostClockFrequency;
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (BOOL)isRecordingContextHDVC:(id)arg1;
+ (BOOL)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;
+ (BOOL)isRecordContextAutoPrompt:(id)arg1;
+ (BOOL)isRecordContextVoiceTrigger:(id)arg1;
+ (id)assetHashInResourcePath:(id)arg1;

@end
