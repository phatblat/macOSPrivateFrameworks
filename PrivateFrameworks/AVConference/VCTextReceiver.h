//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VCTextFrameReceiver.h"

@class NSArray, VCTextJitterBuffer;

__attribute__((visibility("hidden")))
@interface VCTextReceiver : NSObject <VCTextFrameReceiver>
{
    struct tagHANDLE *_rtpHandle;
    unsigned int _sampleRate;
    id <VCTextReceiverDelegate> _delegate;
    struct tagVCRealTimeThread _receiverThread;
    NSArray *_supportedPayloads;
    VCTextJitterBuffer *_jitterBuffer;
}

@property(retain, nonatomic) NSArray *supportedPayloads; // @synthesize supportedPayloads=_supportedPayloads;
- (void)didReceiveFrame:(struct tagAudioFrame *)arg1;
- (void)didDetectMissingFrame;
- (BOOL)enqueuePacket:(struct tagAudioPacket *)arg1;
- (BOOL)parsePacket:(struct tagAudioPacket *)arg1;
- (struct tagAudioFrame *)allocFrameWithPacket:(struct tagAudioPacket *)arg1 data:(char *)arg2 dataLength:(int)arg3 timestamp:(unsigned int)arg4;
- (void)splitPacket:(struct tagAudioPacket *)arg1 packetArray:(struct tagAudioPacketArray *)arg2;
- (void)validateAndEnqueuePackets:(struct tagAudioPacketArray *)arg1;
- (BOOL)isSupportedPayload:(int)arg1;
- (void)processRTCPPacket;
- (void)processRTPPacket;
- (void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters *)arg1;
- (int)retrieveRTPPacket:(struct tagAudioPacket *)arg1;
- (BOOL)stop;
- (BOOL)start;
@property(nonatomic) id <VCTextReceiverDelegate> delegate;
- (void)dealloc;
- (id)initWithConfiguration:(struct _VCTextReceiverConfiguration *)arg1;

@end

