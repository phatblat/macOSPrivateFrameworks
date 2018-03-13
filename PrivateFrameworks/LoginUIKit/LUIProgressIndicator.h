//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSImage, NSMutableArray;

@interface LUIProgressIndicator : NSView
{
    BOOL _isSpinning;
    BOOL _isHeartBeatInstalled;
    unsigned long long _controlSize;
    unsigned long long _animationFrame;
    unsigned long long _prevAnimationFrame;
    NSMutableArray *_images;
    NSImage *_image;
}

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)setControlSize:(unsigned long long)arg1;
- (unsigned long long)controlSize;
- (void)stopAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_installHeartBeat:(BOOL)arg1;
- (void)heartBeat:(CDStruct_fadd2e06 *)arg1;
- (id)_imageForIndex:(unsigned long long)arg1;
- (id)_images;

@end

