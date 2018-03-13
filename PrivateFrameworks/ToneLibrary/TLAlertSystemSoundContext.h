//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TLAlertPlaybackCompletionContext, TLSystemSound;

@interface TLAlertSystemSoundContext : NSObject
{
    BOOL _hasPlaybackStarted;
    BOOL _beingInterrupted;
    BOOL _beingDeemphasized;
    BOOL _deemphasized;
    TLSystemSound *_sound;
    TLAlertPlaybackCompletionContext *_playbackCompletionContext;
    id <TLAlertPlaybackObserver> _playbackObserver;
    NSString *_toneIdentifierForDeemphasizingAlert;
}

@property(nonatomic, getter=isDeemphasized) BOOL deemphasized; // @synthesize deemphasized=_deemphasized;
@property(nonatomic, getter=isBeingDeemphasized) BOOL beingDeemphasized; // @synthesize beingDeemphasized=_beingDeemphasized;
@property(copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert; // @synthesize toneIdentifierForDeemphasizingAlert=_toneIdentifierForDeemphasizingAlert;
@property(nonatomic, getter=isBeingInterrupted) BOOL beingInterrupted; // @synthesize beingInterrupted=_beingInterrupted;
@property(nonatomic) BOOL hasPlaybackStarted; // @synthesize hasPlaybackStarted=_hasPlaybackStarted;
@property(nonatomic) __weak id <TLAlertPlaybackObserver> playbackObserver; // @synthesize playbackObserver=_playbackObserver;
@property(retain, nonatomic) TLAlertPlaybackCompletionContext *playbackCompletionContext; // @synthesize playbackCompletionContext=_playbackCompletionContext;
@property(retain, nonatomic) TLSystemSound *sound; // @synthesize sound=_sound;
- (void).cxx_destruct;

@end

