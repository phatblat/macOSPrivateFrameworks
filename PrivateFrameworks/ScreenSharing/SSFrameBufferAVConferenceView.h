//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenSharing/SSFrameBufferView.h>

@interface SSFrameBufferAVConferenceView : SSFrameBufferView
{
}

- (struct SSPoint)frameBufferCoordinatesFromWindowCoordinates:(struct CGPoint)arg1;
- (struct SSPoint)frameBufferCoordinatesFromNSEvent:(id)arg1;
- (void)sendMouseButtonEventWithWindowCoordinates:(struct CGPoint)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3 withClickCount:(long long)arg4;
- (void)updateSubviews;
- (void)mouseMoved:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUseCachedImage:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

