//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVConference/VCObject.h>

#import "VCAudioPowerSpectrumProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter : VCObject <VCAudioPowerSpectrumProtocol>
{
    unsigned short _audioSpectrumBinCount;
    // Error parsing type: {_VCAudioPowerSpectrumMeterRealtimeContext="streams"{_VCSingleLinkedList="head"^{_VCSingleLinkedListEntry}"initialized"B"compare"^?}"eventQueue"^{opaqueCMSimpleQueue}"nextDeliveryTime"d"audioSpectrumRefreshRate"d"isProcessingOutput"{atomic_flag="_Value"AB}"outputPowerSpectrums"^{__CFDictionary}"powerSpectrumMeterDelegate"@"powerSpectrumMeterDelegateContext"^v}, name: _realtimeContext
}

@property(readonly, nonatomic) void *realtimeContext;
- (void)unregisterAllStreams;
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2;
- (void)dealloc;
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

