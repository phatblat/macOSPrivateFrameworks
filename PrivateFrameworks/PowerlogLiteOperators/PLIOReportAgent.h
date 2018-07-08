//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSDictionary, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLIOKitOperatorComposition;

@interface PLIOReportAgent : PLAgent
{
    PLEntryNotificationOperatorComposition *_batteryLevelChangedNotifications;
    NSMutableDictionary *_sampleChannelsSignificantBattery;
    NSMutableDictionary *_sampleChannelsHalfHour;
    NSMutableDictionary *_sampleChannelsDaily;
    NSDictionary *_entryTransformation;
    PLIOKitOperatorComposition *_iokitAging;
}

+ (BOOL)hasAOPSupport;
+ (BOOL)hasLisaCapability;
+ (BOOL)hasPlatinumCapability;
+ (id)entryEventBackwardDefinitionMTRAging;
+ (BOOL)shouldLogMTRAging;
+ (id)entryEventBackwardDefinitionWLANPowerConnections;
+ (id)entryEventBackwardDefinitionWLANPowerPhyScan;
+ (id)entryEventBackwardDefinitionWLANPowerPhyActivity;
+ (id)entryEventBackwardDefinitionBluetooth;
+ (id)entryEventBackwardDefinitionNVMe;
+ (id)entryEventBackwardDefinitionNVMeTimeweightedthrottlestatistics;
+ (id)entryEventBackwardDefinitionNVMeBWLimits;
+ (id)entryEventBackwardDefinitionDisplay;
+ (id)entryEventBackwardDefinitionGPUCStates;
+ (id)entryEventBackwardDefinitionPPMStatsDroopController;
+ (id)entryEventBackwardDefinitionCLPCStatsLimiterControlEffort;
+ (id)entryEventBackwardDefinitionLimiterControlEffort;
+ (id)entryEventBackwardDefinitionCPUStatsCPUComplexThermalUPOLimiting;
+ (BOOL)shouldLogThermalUPOLimiting;
+ (id)entryEventBackwardDefinitionCPUStatsEvents;
+ (id)entryEventBackwardDefinitionPRLUsageRStandby;
+ (id)entryEventBackwardDefinitionPRLUsageJOn;
+ (id)entryEventBackwardDefinitionPRLUsageAttCheck;
+ (id)entryEventBackwardDefinitionPRLUsageProCheck;
+ (id)entryEventBackwardDefinitionPRLUsageBCheck;
+ (id)entryEventBackwardDefinitionPRLUsagePreCheck;
+ (id)entryEventBackwardDefinitionAOPAOPSensors;
+ (id)entryEventBackwardDefinitionAOPmuxPower;
+ (id)entryEventBackwardDefinitionAOPAmpPower;
+ (id)entryEventBackwardDefinitionCorePerformanceLevelResidency;
+ (id)entryEventBackwardDefinitionPreUVLO;
+ (id)entryEventBackwardDefinitionMultitouchCPUStats;
+ (id)entryEventBackwardDefinitionAOPAOP_Haptics;
+ (id)entryEventBackwardDefinitionActuatorPowerState;
+ (id)entryEventBackwardDefinitionSpeakerPowerState;
+ (id)entryEventBackwardDefinitionOpalPlatinumLED;
+ (id)entryEventBackwardDefinitionBonnLisaStats;
+ (id)entryEventBackwardDefinitionOpalLisaStats;
+ (id)entryEventBackwardDefinitionCitrineRTPStats;
+ (id)entryEventBackwardDefinitionOpalStats;
+ (id)entryEventBackwardDefinitionOpalOsmiumLED;
+ (id)entryEventBackwardDefinitionCitrineOsmiumStats;
+ (id)entryEventBackwardDefinitionOpalOsmiumStats;
+ (id)entryEventBackwardDefinitionCitrinePlatinumStats;
+ (id)entryEventBackwardDefinitionOpalPlatinumStats;
+ (id)entryEventBackwardDefinitionCorePerformanceLevel;
+ (id)entryEventBackwardDefinitionCLPCStatsFrameRateHistogram;
+ (id)entryEventBackwardDefinitionWifiChipRxPerRateCounters;
+ (id)entryEventBackwardDefinitionWifiChipTxChipErrorCounters;
+ (id)entryEventBackwardDefinitionWifiChipRxChipErrorCounters;
+ (id)entryEventBackwardDefinitionWifiChipScanActivity;
+ (id)entryEventBackwardDefinitionWifiChipRadioPhyicalLayerActivity;
+ (id)entryEventBackwardDefinitionWifiChipPMAwakeActivity;
+ (id)entryEventBackwardDefinitionWifiChipAWDLActivity;
+ (id)entryEventBackwardDefinitionWifiChipConnectionActivity;
+ (id)entryEventBackwardDefinitionWifiChipRxStatCounters;
+ (id)entryEventBackwardDefinitionWifiChipPCIeActivity;
+ (id)entryEventBackwardDefinitionWifiChipTxStatCounters;
+ (id)entryEventBackwardDefinitionWifiChipHSICActivity;
+ (id)entryEventBackwardDefinitionAppleEmbeddedPCIELinkStates;
+ (id)entryEventBackwardDefinitionAMCStatsPerfCounters;
+ (id)entryEventBackwardDefinitionSoCStatsH7PMGRCounters;
+ (id)entryEventBackwardDefinitionSocStatsDvdStats;
+ (id)entryEventBackwardDefinitionCpuStatsCpuFeatures;
+ (id)entryEventBackwardDefinitionPMPEnergyCounters;
+ (id)entryEventBackwardDefinitionEnergyModel;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyKernel;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS6;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS5;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS4;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS3;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS2;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS1;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulerQuantumEnergyQoS0;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeKernel;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS6;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS5;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS4;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS3;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS2;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS1;
+ (id)entryEventBackwardDefinitionSchedulerStatsOnCoreTimeQoS0;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyKernel;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS6;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS5;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS4;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS3;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS2;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS1;
+ (id)entryEventBackwardDefinitionSchedulerStatsSchedulingLatencyQoS0;
+ (id)entryEventBackwardDefinitionClpcStatsMetricHistograms;
+ (id)entryEventBackwardDefinitionCLPCStatsControlEffort;
+ (id)entryEventBackwardDefinitionCLPCStatsLeadingController;
+ (id)entryEventBackwardDefinitionCLPCStatsCounters;
+ (id)entryEventBackwardDefinitionSoCStatsEventsRaw;
+ (id)entryEventBackwardDefinitionSoCStatsDeviceStates;
+ (id)entryEventBackwardDefinitionSoCStatsVoltageDomainPerformanceStates;
+ (id)entryEventBackwardDefinitionSoCStatsH6PMGRCounters;
+ (id)entryEventBackwardDefinitionIOMFBScanout;
+ (id)entryEventBackwardDefinitionIOMFBSwap;
+ (id)entryEventBackwardDefinitionIOMFBNativeRate;
+ (id)entryEventBackwardDefinitionIOMFBUSRHistogram;
+ (id)entryEventBackwardDefinitionCPUStatsIdleTimeHistogram;
+ (id)entryEventBackwardDefinitionCPUStatsCPUComplexPerformanceStatesData;
+ (id)entryEventBackwardDefinitionCPUStatsVoltageDomainPerformanceStates;
+ (id)entryEventBackwardDefinitionCPUStatsCPUPerformanceStates;
+ (id)entryEventBackwardDefinitionCPUStatsActiveTimeHistogram;
+ (id)entryEventBackwardDefinitionCPUStatsDVDStats;
+ (id)entryEventBackwardDefinitionOscarSensorpowerstate;
+ (id)entryEventBackwardDefinitionOscarPlatformevents;
+ (id)entryEventBackwardDefinitionOscarPlatformpowerstate;
+ (id)entryEventBackwardDefinitionOscarSensorevents;
+ (id)entryEventBackwardDefinitionbacklightreportplaybackbacklightfactorsreport;
+ (id)entryEventBackwardDefinitionH6ISPH6ISPPowerState;
+ (id)entryEventBackwardDefinitionMesaMesaPowerState;
+ (id)entryEventBackwardDefinition3DTouchluna;
+ (id)entryEventBackwardDefinition3DTouchforce;
+ (id)entryEventBackwardDefinitionMultitouchHighLevelStats;
+ (id)entryEventBackwardDefinitionMultitouch;
+ (id)entryEventBackwardDefinitionGPUStatsIdleTimeHistogram;
+ (id)entryEventBackwardDefinitionGPUStatsGPUCLTM;
+ (id)entryEventBackwardDefinitionGPUStatsGPUPerformanceStates;
+ (id)entryEventBackwardDefinitionGPUStatsActiveTimeHistogram;
+ (id)entryEventBackwardDefinitionGPUStatsDVDRequestStates;
+ (id)entryEventBackwardDefinitionIOReport;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
@property(readonly) PLIOKitOperatorComposition *iokitAging; // @synthesize iokitAging=_iokitAging;
@property(retain, nonatomic) NSDictionary *entryTransformation; // @synthesize entryTransformation=_entryTransformation;
@property(retain, nonatomic) NSMutableDictionary *sampleChannelsDaily; // @synthesize sampleChannelsDaily=_sampleChannelsDaily;
@property(retain, nonatomic) NSMutableDictionary *sampleChannelsHalfHour; // @synthesize sampleChannelsHalfHour=_sampleChannelsHalfHour;
@property(retain, nonatomic) NSMutableDictionary *sampleChannelsSignificantBattery; // @synthesize sampleChannelsSignificantBattery=_sampleChannelsSignificantBattery;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChangedNotifications; // @synthesize batteryLevelChangedNotifications=_batteryLevelChangedNotifications;
- (void).cxx_destruct;
- (void)logSOCHOT0Snapshot;
- (void)logIOReportSnapshot;
- (void)modelPMPAPSoCPower:(id)arg1;
- (void)modelAPSoCPower:(id)arg1;
- (void)logEventBackwardMTRAging;
- (void)logEventBackwardIOReportWithDelta:(id)arg1 forChannelGroup:(id)arg2;
- (void)logEventBackwardComplexPerformanceStates:(id)arg1;
- (void)ioReportLogEntry:(id)arg1;
- (id)entryKeyForEventWithGroupName:(id)arg1 withSubGroupName:(id)arg2;
- (void)logEventBackwardIOReport;
- (void)log;
- (id)entryForReportingGroup:(id)arg1 withKey:(id)arg2 withChannelGroup:(id)arg3 withEntryDate:(id)arg4;
- (int)addReportSample:(struct __CFDictionary *)arg1 toEntry:(id)arg2;
- (void)addReportingGroup:(id)arg1 toEntry:(id)arg2;
- (id)sampleDeltaForChannelGroup:(id)arg1;
- (void)initOperatorDependancies;
- (BOOL)processNotificationForChannelGroup:(id)arg1;
- (id)buildDailySet;
- (id)buildHalfHourSet;
- (id)buildSignificantBatterySet;
- (id)buildBaseSet;
- (id)buildLiteModeSetNano;
- (id)init;
- (void)initTransformationArray;
- (id)chanelDictionaryWithChannelSet:(id)arg1 withMinProcessTime:(double)arg2;
- (void)mergeChannelsForDriverName:(id)arg1 toChannels:(struct __CFDictionary *)arg2;
- (void)mergeServiceName:(id)arg1 withID:(unsigned long long)arg2 toChannels:(struct __CFDictionary *)arg3;
- (void)pruneAllChannelsWithChannels:(struct __CFDictionary *)arg1;
- (void)pruneChannelsWithChannels:(struct __CFDictionary *)arg1 withTargetSet:(id)arg2;

@end

