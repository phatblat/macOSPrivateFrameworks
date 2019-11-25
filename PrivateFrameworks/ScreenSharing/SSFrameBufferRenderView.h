//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CALayerDelegate.h"

@class CALayer, NSArray, NSColor, NSString, NSTimer, SSFrameBuffer, SSScreenInfo;

@interface SSFrameBufferRenderView : NSView <CALayerDelegate>
{
    unsigned long long mScreenIdentifier;
    SSFrameBuffer *mFrameBuffer;
    CALayer *mCachedImageLayer;
    BOOL useCachedImage;
    BOOL _useAVConference;
    BOOL _feedbackLayerNeedsTimedDisplay;
    unsigned int _currentViewRotation;
    NSColor *_cursorColor;
    CALayer *_feedbackLayer;
    NSTimer *_feedbackLayerTimer;
    NSArray *_touchEventArray;
}

@property(retain) NSArray *touchEventArray; // @synthesize touchEventArray=_touchEventArray;
@property BOOL feedbackLayerNeedsTimedDisplay; // @synthesize feedbackLayerNeedsTimedDisplay=_feedbackLayerNeedsTimedDisplay;
@property(retain) NSTimer *feedbackLayerTimer; // @synthesize feedbackLayerTimer=_feedbackLayerTimer;
@property(retain) CALayer *feedbackLayer; // @synthesize feedbackLayer=_feedbackLayer;
@property(retain) NSColor *cursorColor; // @synthesize cursorColor=_cursorColor;
@property unsigned int currentViewRotation; // @synthesize currentViewRotation=_currentViewRotation;
@property BOOL useCachedImage; // @synthesize useCachedImage;
@property(retain) SSFrameBuffer *frameBuffer; // @synthesize frameBuffer=mFrameBuffer;
@property unsigned long long screenIdentifier; // @synthesize screenIdentifier=mScreenIdentifier;
- (void)setTouchEvents:(id)arg1;
- (struct CGPoint)translateInBounds:(struct CGRect)arg1 xPercent:(double)arg2 yPercent:(double)arg3 enclosingRect:(struct CGRect)arg4;
- (int)orientationForCurrentAngle;
- (void)updateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)feedbackLayerThrottle;
@property BOOL useAVConference; // @synthesize useAVConference=_useAVConference;
- (BOOL)wantsUpdateLayer;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly) SSScreenInfo *screen;
- (void)rightMouseDown:(id)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

