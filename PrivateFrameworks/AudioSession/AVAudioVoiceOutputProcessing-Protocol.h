//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVAudioDSPControlling.h"

@class NSError;

@protocol AVAudioVoiceOutputProcessing <AVAudioDSPControlling>
@property(readonly, nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;
- (BOOL)muteDownlink:(BOOL)arg1 error:(NSError *)arg2;
@end
