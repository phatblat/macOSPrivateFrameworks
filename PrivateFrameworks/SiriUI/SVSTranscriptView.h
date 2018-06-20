//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class SVSTranscriptContentView, SiriUITranscriptClumpView;

__attribute__((visibility("hidden")))
@interface SVSTranscriptView : NSView
{
    SVSTranscriptContentView *_contentView;
}

- (void).cxx_destruct;
- (BOOL)isFlipped;
- (void)setTopKeylineHidden:(BOOL)arg1;
- (void)setBottomKeylineHidden:(BOOL)arg1;
@property(nonatomic) double topMargin;
@property(readonly, nonatomic) double bottomMargin;
@property(retain, nonatomic) NSView *suggestionsView;
@property(readonly, nonatomic) SiriUITranscriptClumpView *transcriptClumpView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1 transcriptClumpView:(id)arg2;

@end

