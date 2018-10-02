//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AUAudioUnit.h"

@class AUAudioUnitBus, AUAudioUnitBusArray, AUPasscodeCodecConfiguration, NSMutableData, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AUPasscodeDecoder : AUAudioUnit
{
    struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger>> _rtMessenger;
    unique_ptr_36d0a635 _kernel;
    struct BufferedInputBus _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    struct vector<unsigned char, std::__1::allocator<unsigned char>> _rxDataBuffer;
    struct vector<DecodedDataMessage, std::__1::allocator<DecodedDataMessage>> _messagePool;
    map_fc0e2ca7 _apcDecoderConfig;
    unsigned int _desiredChannelCount;
    unsigned int _actualChannelCount;
    NSMutableData *_incomingPayload;
    BOOL _deliverDataSerially;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _dataHandler;
    AUPasscodeCodecConfiguration *_codecConfig;
}

+ (id)supportedDecoders;
+ (void)registerAU;
+ (struct AudioComponentDescription)getAUDesc;
@property(retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig; // @synthesize codecConfig=_codecConfig;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleDecodedData:(void *)arg1 ofLength:(int)arg2;
- (CDUnknownBlockType)internalRenderBlock;
- (void)deallocateRenderResources;
- (void)setRenderingOffline:(BOOL)arg1;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)outputBusses;
- (id)inputBusses;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

