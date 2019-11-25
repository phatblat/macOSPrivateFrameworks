//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CSAudioDecoder : NSObject
{
    struct OpaqueAudioConverter *_decoder;
    struct AudioStreamBasicDescription _inASBD;
    struct AudioStreamBasicDescription _outASBD;
    id <CSAudioDecoderDelegate> _delegate;
}

+ (id)opusDecoder;
@property __weak id <CSAudioDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned int)arg5;
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;

@end

