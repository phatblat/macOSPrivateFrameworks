//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVPlayerView.h"

@interface PAAVPlayerView : AVPlayerView
{
    BOOL _isTrimming;
}

- (void)updateBackgroundColor;
- (void)trimmingDidComplete;
- (void)beginTrimmingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isTrimming;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)scrollWheel:(id)arg1;

@end

