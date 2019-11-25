//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSAudioChunk, CSAudioRecordContext, CSAudioRecordDeviceInfo, CSAudioStartStreamOption, CSAudioStopStreamOption, CSAudioStream, CSAudioStreamHolding, CSAudioStreamRequest, NSDictionary, NSString, NSURL;

@protocol CSAudioStreamProviding <NSObject>
- (NSString *)playbackRoute;
- (BOOL)isNarrowBand;
- (NSDictionary *)recordSettings;
- (CSAudioRecordDeviceInfo *)recordDeviceInfo;
- (NSString *)recordRoute;
- (BOOL)isRecording;
- (void)cancelAudioStreamHold:(CSAudioStreamHolding *)arg1;
- (CSAudioStreamHolding *)holdAudioStreamWithDescription:(NSString *)arg1 timeout:(double)arg2;
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(NSURL *)arg2;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(NSURL *)arg3;
- (CSAudioChunk *)audioChunkToEndFrom:(unsigned long long)arg1;
- (CSAudioChunk *)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)stopAudioStream:(CSAudioStream *)arg1 option:(CSAudioStopStreamOption *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)startAudioStream:(CSAudioStream *)arg1 option:(CSAudioStartStreamOption *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)prepareAudioStream:(CSAudioStream *)arg1 request:(CSAudioStreamRequest *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (BOOL)prepareAudioStreamSync:(CSAudioStream *)arg1 request:(CSAudioStreamRequest *)arg2 error:(id *)arg3;
- (void)audioStreamWithRequest:(CSAudioStreamRequest *)arg1 streamName:(NSString *)arg2 completion:(void (^)(CSAudioStream *, NSError *))arg3;
- (CSAudioStream *)audioStreamWithRequest:(CSAudioStreamRequest *)arg1 streamName:(NSString *)arg2 error:(id *)arg3;
- (BOOL)setCurrentContext:(CSAudioRecordContext *)arg1 error:(id *)arg2;
@end

