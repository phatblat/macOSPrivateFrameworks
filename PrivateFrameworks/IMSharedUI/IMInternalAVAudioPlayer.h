//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, AVPlayer, AVPlayerItem, NSString;

@interface IMInternalAVAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_avAudioPlayer;
    AVPlayer *_avPlayer;
    AVPlayerItem *_playerItem;
    long long _avPlayerState;
    BOOL _avPlayerPrepareRequested;
    BOOL _avPlayerPlayRequested;
    long long _playerType;
    id <IMInternalAVAudioPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <IMInternalAVAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long playerType; // @synthesize playerType=_playerType;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)_notifyPlayerDidPrepareAudioFileSuccessfully:(BOOL)arg1;
- (void)_notifyPlayerDidFinishSuccessfully:(BOOL)arg1;
- (void)_handleAVPlayerItemStateChange;
- (void)_playerItemDidEndNotification:(id)arg1;
- (void)dealloc;
- (void)prepareToPlay;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing;
@property(nonatomic) float volume;
- (void)pause;
- (void)stop;
@property(readonly) double deviceCurrentTime;
- (BOOL)_playAtTime:(double)arg1;
- (BOOL)playAtTime:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithContentsOfURL:(id)arg1 playerType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

