//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCAudioPowerSpectrumMeterDelegate.h"

@class AVCAudioPowerSpectrumMeter, NSObject<OS_dispatch_queue>, NSString;

@interface TUAudioFrequencyController : NSObject <AVCAudioPowerSpectrumMeterDelegate>
{
    id <TUAudioFrequencyControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    AVCAudioPowerSpectrumMeter *_powerSpectrumMeter;
}

+ (id)normalizedPowerLevelForPowerSpectrum:(id)arg1;
@property(readonly, nonatomic) AVCAudioPowerSpectrumMeter *powerSpectrumMeter; // @synthesize powerSpectrumMeter=_powerSpectrumMeter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <TUAudioFrequencyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)meterServerDidDisconnect:(id)arg1;
- (void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2;
- (void)unregisterParticipantPowerSpectrum:(long long)arg1;
- (void)registerParticipantPowerSpectrum:(long long)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
