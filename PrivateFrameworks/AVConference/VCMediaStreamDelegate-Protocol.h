//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSError;

@protocol VCMediaStreamDelegate <NSObject>
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didResumeStream:(BOOL)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didPauseStream:(BOOL)arg2 error:(NSError *)arg3;
- (void)vcMediaStreamDidStop:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didStartStream:(BOOL)arg2 error:(NSError *)arg3;

@optional
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveVideoFrameWithTime:(CDStruct_1b6d18a9)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 priorityDidChange:(unsigned char)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(NSError *)arg3 dictionary:(NSDictionary *)arg4;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 uplinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 remoteMediaStalled:(BOOL)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 updateFrequencyLevel:(NSData *)arg2 isInputMeter:(BOOL)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id <VCMediaStreamProtocol>)arg1;
@end

