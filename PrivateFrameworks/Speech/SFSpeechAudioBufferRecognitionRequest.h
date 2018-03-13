//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Speech/SFSpeechRecognitionRequest.h>

@class AVAudioConverter, AVAudioFormat, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest
{
    id <SFSpeechRecognitionBufferDelegate> _bufferDelegate;
    NSMutableArray *_queuedBuffers;
    NSObject<OS_dispatch_queue> *_queue;
    AVAudioConverter *_converter;
    BOOL _audioEnded;
}

- (void).cxx_destruct;
- (void)endAudio;
- (void)_endAudio;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_convertAndFeedPCMBuffer:(id)arg1;
- (void)_drainAndClearAudioConverter;
- (void)appendAudioPCMBuffer:(id)arg1;
- (void)_appendAudioPCMBuffer:(id)arg1;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
@property(readonly, nonatomic) AVAudioFormat *nativeAudioFormat;
- (id)init;

@end

