//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface AirPlayReceiverContext : NSObject
{
    // Error parsing type: ^{AirPlayReceiverSessionPrivate={__CFRuntimeBase=QAQ}@^{AirPlayReceiverServerPrivate}^{OpaqueAPReceiverRequestProcessor}^{APReceiverSessionManagerOpaque}^v{?=^v^v^?^?^?^?^?^?}[32c][17c]^{OpaqueAPReceiverStatsCollector}@@I(?={sockaddr=CC[14c]}{sockaddr_in=CCS{in_addr=I}[8c]}{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I})(?={sockaddr=CC[14c]}{sockaddr_in=CCS{in_addr=I}[8c]}{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I})[16C]iQ[6C]CC^{__CFString}^{__CFString}QIQQI{?=^{_CCCryptor}[16C]}^{?}[16C][16C]CCC^{OpaqueAPSNetworkClock}CCC^{HTTPClientPrivate}iii^{APPairingServicesPrivate}IIQQQQi^{APReceiverAudioSessionPrivate}I^{OpaqueFigValeria}I^{OpaqueAPReceiverScreenSession}dCCIQC^{__CFString}CQ^{__CFDictionary}ii^{__CFArray}}, name: _session
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    unsigned char _sessionStarted;
    struct {
        unsigned int type;
        unsigned long long format;
        unsigned char loopback;
        unsigned char varispeed;
        unsigned char voice;
        unsigned char volumeControl;
        struct __CFString *timingProtocol;
        unsigned int activeType;
        struct AirPlayReceiverSessionPrivate *session;
        struct APReceiverAudioSessionPrivate *audioSession;
        struct AudioStreamBasicDescription asbd;
        struct opaqueCMFormatDescription *formatDescription;
        struct OpaqueFigValeria *consumer;
        NSObject<OS_dispatch_queue> *consumerQueue;
        NSObject<OS_dispatch_source> *consumerTimer;
        unsigned long long sampleTimeStart;
        unsigned long long sampleTimeLast;
        int samplePTSAdjustment;
        unsigned long long audioIOTimeout;
        int converterNode;
        struct ComponentInstanceRecord *converterUnit;
        NSObject<OS_dispatch_source> *ducker;
        struct OpaqueAUGraph *graph;
        int mixerNode;
        struct ComponentInstanceRecord *mixerUnit;
        int outputNode;
        struct ComponentInstanceRecord *outputUnit;
        unsigned char outputStarted;
        float outputVolume;
        int varispeedNode;
        struct ComponentInstanceRecord *varispeedUnit;
    } _mainAudioCtx;
    unsigned int _powerAssertion;
}

@end

