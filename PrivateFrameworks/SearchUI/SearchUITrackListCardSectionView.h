//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "NSSoundDelegate.h"

@class NSSound, NSString, NSTrackingArea, SFTrack, SearchUIButton, TLKGridRowView;

@interface SearchUITrackListCardSectionView : SearchUICardSectionView <NSSoundDelegate>
{
    BOOL _mouseEntered;
    BOOL _observing;
    SearchUIButton *_playButton;
    NSTrackingArea *_trackingArea;
    SFTrack *_track;
    NSSound *_sound;
}

+ (BOOL)supportsRecyclingForCardSection:(id)arg1;
@property(nonatomic) BOOL observing; // @synthesize observing=_observing;
@property(nonatomic) BOOL mouseEntered; // @synthesize mouseEntered=_mouseEntered;
@property(retain, nonatomic) NSSound *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) SFTrack *track; // @synthesize track=_track;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) SearchUIButton *playButton; // @synthesize playButton=_playButton;
- (void).cxx_destruct;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (void)viewClosed;
- (void)togglePlaying:(id)arg1;
- (void)otherSoundWillStart:(id)arg1;
- (void)removeFromSuperview;
- (void)dealloc;
- (BOOL)stopPlaying;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidHide;
- (void)cleanupAfterPlaying;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupContentView;

// Remaining properties
@property(retain, nonatomic) TLKGridRowView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
