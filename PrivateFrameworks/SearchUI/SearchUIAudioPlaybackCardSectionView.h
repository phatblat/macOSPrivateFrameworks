//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import "NSTextViewDelegate.h"
#import "NUIContainerViewDelegate.h"

@class NSString, SearchUIButton, SearchUILabel, SearchUISelectableTextView, TLKStackView;

@interface SearchUIAudioPlaybackCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, NSTextViewDelegate>
{
    SearchUILabel *_detailTextLabel;
    SearchUISelectableTextView *_titleTextView;
    SearchUISelectableTextView *_subtitleView;
    SearchUIButton *_playButton;
}

@property(retain, nonatomic) SearchUIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) SearchUISelectableTextView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) SearchUISelectableTextView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) SearchUILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
- (void).cxx_destruct;
- (void)_updateStateFromCardSection:(id)arg1 animated:(BOOL)arg2;
- (void)_playButtonPressed:(id)arg1;
- (void)updateStateFromCardSection:(id)arg1;
- (id)setupContentView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
