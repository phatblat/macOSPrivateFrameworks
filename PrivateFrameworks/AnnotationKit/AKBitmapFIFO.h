//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CHPointFIFO.h"

@class NSView;

@interface AKBitmapFIFO : CHPointFIFO
{
    char *_bitmapDataPtr;
    struct CGContext *_bitmapContext;
    struct CGImage *_bitmapImage;
    struct CGPath *_cachedPath;
    NSView *_view;
    BOOL _isInLiveDraw;
    BOOL _bitmapSizeHasBeenUpdatedOnceForLiveDraw;
    double _bitmapSizeMultiplier;
    double _shadowRadiusInView;
    struct CGSize _bitmapSize;
    // Error parsing type: , name: _lastPoint
    struct CGRect _unionDirtyRect;
    struct CGAffineTransform _viewToBitmapTransform;
}

@property struct CGRect unionDirtyRect; // @synthesize unionDirtyRect=_unionDirtyRect;
// Error parsing type for property lastPoint:
// Property attributes: T,V_lastPoint

@property BOOL bitmapSizeHasBeenUpdatedOnceForLiveDraw; // @synthesize bitmapSizeHasBeenUpdatedOnceForLiveDraw=_bitmapSizeHasBeenUpdatedOnceForLiveDraw;
@property struct CGSize bitmapSize; // @synthesize bitmapSize=_bitmapSize;
@property double shadowRadiusInView; // @synthesize shadowRadiusInView=_shadowRadiusInView;
@property struct CGAffineTransform viewToBitmapTransform; // @synthesize viewToBitmapTransform=_viewToBitmapTransform;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(nonatomic) BOOL isInLiveDraw; // @synthesize isInLiveDraw=_isInLiveDraw;
@property double bitmapSizeMultiplier; // @synthesize bitmapSizeMultiplier=_bitmapSizeMultiplier;
- (void).cxx_destruct;
- (void)_applyDirtyRectToView;
- (void)_addToDirtyRect:(struct CGRect)arg1;
- (void)_addSinglePointToBitmap: /* Error: Ran out of types for this method. */;
- (void)_clearAllBitmapData;
- (void)_createBitmapIfNecessary;
- (void)_createBitmapContextIfNecessary;
- (void)_addPointToBitmap: /* Error: Ran out of types for this method. */;
- (void)_updateBitmapSizeFromViewIfNecessary;
- (struct CGPoint)_convertPointToScreenBacking:(struct CGPoint)arg1;
- (void)_clearCachedPath;
- (struct CGPath *)newPathFromCurrentBitmap;
- (struct CGImage *)currentBitmap;
- (struct CGRect)bitmapRectInView;
- (void)resetDirtyRect;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)teardown;
- (id)initWithFIFO:(id)arg1;

@end

