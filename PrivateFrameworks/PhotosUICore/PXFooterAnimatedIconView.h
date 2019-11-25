//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXView.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSObject<OS_dispatch_queue>;

@interface PXFooterAnimatedIconView : UXView
{
    unsigned long long _reasonsToPause;
    NSObject<OS_dispatch_queue> *_queue;
    AVPlayer *_player;
    CDStruct_1b6d18a9 _introStartTime;
    CDStruct_1b6d18a9 _loopStartTime;
    CDStruct_1b6d18a9 _loopEndTime;
    CDStruct_1b6d18a9 _outroEndTime;
    float _playerRateBeforePause;
    id _gridCycleTimeObservationToken;
    long long _waitingState;
    double _waitingStateStartTime;
    BOOL _wantsGridCycleTimeObservation;
    BOOL _isPlayerHidden;
    BOOL _isPlayerPaused;
    AVPlayerItem *_playerItem;
    long long _style;
    long long _desiredMode;
    AVPlayerLayer *_playerLayer;
}

@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;
- (void).cxx_destruct;
- (void)_applicationWillUnhide:(id)arg1;
- (void)_applicationWillHide:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)layout;
- (id)_movieURL;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) BOOL isObscured;
@property(readonly, nonatomic) long long presentedState;
@property(nonatomic) BOOL isPlayerPaused; // @synthesize isPlayerPaused=_isPlayerPaused;
@property(nonatomic) BOOL isPlayerHidden; // @synthesize isPlayerHidden=_isPlayerHidden;
- (void)_didPlayerToEndTime:(id)arg1;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
- (void)_didSeekToPlayFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)_playFromTime:(CDStruct_1b6d18a9)arg1 toTime:(CDStruct_1b6d18a9)arg2;
- (void)_didSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)_createPlayerIfNeeded;
- (void)_hideVideo;
- (void)_crossedGridCycleBoundary;
@property(nonatomic) BOOL wantsGridCycleTimeObservation; // @synthesize wantsGridCycleTimeObservation=_wantsGridCycleTimeObservation;
- (void)_transitionToState:(long long)arg1;
- (void)_update;
- (void)_setNeedsUpdate;
- (void)_layoutPlayer;
- (void)_updateIsPlayerPaused;
- (void)_removeReasonToPause:(unsigned long long)arg1;
- (void)_addReasonToPause:(unsigned long long)arg1;
- (void)_updateStyle;
- (void)_windowDidChange;
- (void)setHidden:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

