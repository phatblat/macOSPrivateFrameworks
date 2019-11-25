//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCRateControlMediaController;

@protocol VCRateControlAlgorithm <NSObject>
@property(nonatomic) BOOL didMBLRampDown;
@property(readonly, nonatomic) unsigned int actualBitrate;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(nonatomic) unsigned int localBandwidthEstimation;
@property(readonly, nonatomic) BOOL isNewRateSentOut;
@property(readonly, nonatomic) double owrd;
@property(readonly, nonatomic) double roundTripTime;
@property(readonly, nonatomic) unsigned int totalPacketReceived;
@property(readonly, nonatomic) double packetLossRateVideo;
@property(readonly, nonatomic) double packetLossRate;
@property(readonly, nonatomic) unsigned int mostBurstLoss;
@property(readonly, nonatomic) BOOL isCongested;
@property(readonly, nonatomic) unsigned int rateChangeCounter;
@property(readonly, nonatomic) unsigned int targetBitrate;
@property(retain, nonatomic) VCRateControlMediaController *mediaController;
- (void)enableBasebandDump:(void *)arg1;
- (void)enableLogDump:(void *)arg1 enablePeriodicLogging:(BOOL)arg2;
- (BOOL)doRateControlWithStatistics:(CDStruct_b21f1e06)arg1;
- (void)configure:(struct VCRateControlAlgorithmConfig)arg1 restartRequired:(BOOL)arg2;
@end

