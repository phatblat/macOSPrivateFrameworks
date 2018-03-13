//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUAudioUnit.h"

@class AUAudioUnitBus, AUAudioUnitBusArray, AUPasscodeCodecConfiguration, NSData, NSDictionary, NSObject<OS_dispatch_queue>;

@interface AUPasscodeEncoder : AUAudioUnit
{
    unique_ptr_db3a804f _kernel;
    struct BufferedInputBus _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    map_5b8d8d8c _apcEncoderConfig;
    long long _assetSampleCount;
    BOOL _outputIsSilenced;
    struct unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage>> _eofMessage;
    struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger>> _rtMessenger;
    unsigned int _fadeOutNumSamples;
    unsigned int _fadeOutSampleIndex;
    unsigned long long _loopNumber;
    BOOL _silenceOutputOnNextAssetEnding;
    BOOL _triggerFadeOut;
    BOOL _embedPasscode;
    float _fadeOutTimeSeconds;
    NSData *_payload;
    AUPasscodeCodecConfiguration *_codecConfig;
    long long _assetLength;
    unsigned long long _numLoopsToStopAfter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _assetEndedAndSilencedHandler;
    NSDictionary *_carrierInfo;
}

+ (void)registerAU;
+ (struct AudioComponentDescription)getAUDesc;
+ (id)supportedEncoders;
@property(retain, nonatomic) NSDictionary *carrierInfo; // @synthesize carrierInfo=_carrierInfo;
@property(copy, nonatomic) CDUnknownBlockType assetEndedAndSilencedHandler; // @synthesize assetEndedAndSilencedHandler=_assetEndedAndSilencedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL embedPasscode; // @synthesize embedPasscode=_embedPasscode;
@property(nonatomic) BOOL triggerFadeOut; // @synthesize triggerFadeOut=_triggerFadeOut;
@property(nonatomic) float fadeOutTimeSeconds; // @synthesize fadeOutTimeSeconds=_fadeOutTimeSeconds;
@property(nonatomic) unsigned long long numLoopsToStopAfter; // @synthesize numLoopsToStopAfter=_numLoopsToStopAfter;
@property(nonatomic) BOOL silenceOutputOnNextAssetEnding; // @synthesize silenceOutputOnNextAssetEnding=_silenceOutputOnNextAssetEnding;
@property(nonatomic) long long assetLength; // @synthesize assetLength=_assetLength;
@property(retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig; // @synthesize codecConfig=_codecConfig;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canProcessInPlace;
- (CDUnknownBlockType)internalRenderBlock;
- (void)reset;
- (void)deallocateRenderResources;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)outputBusses;
- (id)inputBusses;
- (void)handleEOFReachedForAsset;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

