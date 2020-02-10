//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAudioChunk, CSAudioChunkForTV;

@protocol CSAudioStreamProvidingDelegate <NSObject>
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioChunkForTVAvailable:(CSAudioChunkForTV *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 audioBufferAvailable:(CSAudioChunk *)arg2;
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didStopStreamUnexpectly:(long long)arg2;

@optional
- (void)audioStreamProvider:(id <CSAudioStreamProviding>)arg1 didHardwareConfigurationChange:(long long)arg2;
@end
