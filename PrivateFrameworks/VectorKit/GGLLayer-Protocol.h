//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol GGLLayer
@property(readonly) int backingFormat;
@property(readonly, nonatomic) struct CGSize backingSize;
@property id <GGLLayerDelegate> renderDelegate;
- (void)didEnterBackground;
- (void)onTimerFired:(double)arg1;
@end

