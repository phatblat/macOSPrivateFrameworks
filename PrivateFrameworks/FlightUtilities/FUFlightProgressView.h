//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CAGradientLayer, CALayer, CAShapeLayer, FUStyleProvider;

__attribute__((visibility("hidden")))
@interface FUFlightProgressView : NSView
{
    double _progress;
    FUStyleProvider *_provider;
    CALayer *_plane;
    CAShapeLayer *_fullArc;
    CAShapeLayer *_partialArc;
    CAShapeLayer *_startDot;
    CAShapeLayer *_endDot;
    CALayer *_planeShadow;
    CALayer *_blurredShadow;
    CAShapeLayer *_shadowArc;
    CAGradientLayer *_bottomLayer;
    BOOL _layersCreated;
    BOOL _blurEnabled;
    BOOL _blurPostponed;
}

- (void).cxx_destruct;
- (void)enableBlur:(BOOL)arg1;
- (void)enableBlur;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)prepareForLayers;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint)arcPointForProgress:(double)arg1 radius:(double)arg2 maxAngleFromVertical:(double)arg3 offset:(struct CGPoint)arg4;
- (void)setStyleProvider:(id)arg1;
- (void)setProgress:(double)arg1;

@end

