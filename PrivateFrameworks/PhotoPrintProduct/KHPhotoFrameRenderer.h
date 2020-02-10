//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHFrameRenderer.h>

@class KHFrameAttribute, KHImage, NSArray, NSLock, NSRecursiveLock, NSValue;

@interface KHPhotoFrameRenderer : KHFrameRenderer
{
    struct CGSize _imageSize;
    CDStruct_e9d111b7 _pan;
    double _zoom;
    float _imageRotation;
    KHFrameAttribute *_imageRotationAttr;
    struct CGSize _lastImageRenderSize;
    KHImage *_cachedImageRep;
    NSRecursiveLock *_cachedImageLock;
    NSLock *_renderLock;
    KHImage *_placeholderImageRep;
    NSRecursiveLock *_placeholderImageLock;
    unsigned long long _placeholderRenderingIntent;
    long long _backfillRequestId;
    KHImage *_cachedFilteredImageRep;
    NSValue *_cachedFilteredImageSourceHash;
    NSArray *_cachedFilteredImagePhotoEffects;
    BOOL _liveZooming;
    BOOL _photoPanNeedsValidation;
}

+ (double)maxFillFrameZoomForImageSize:(struct CGSize)arg1 visibleRect:(struct CGRect)arg2;
+ (id)_uniqueHashForImage:(id)arg1;
+ (BOOL)_imageSize:(struct CGSize)arg1 equalToImageSize:(struct CGSize)arg2;
- (struct CGPath *)clippingPathForScale:(double)arg1;
- (void)_clearAllCachedImages;
- (void)_clearPlaceholderImage;
- (void)_clearCachedImage;
- (void)_cacheImage:(id)arg1 forRenderSize:(struct CGSize)arg2;
- (id)placeholderImageForRenderingIntent:(unsigned long long)arg1 preferredIdentifier:(id)arg2;
- (id)_cachedImage;
- (void)_cacheFilteredImage:(id)arg1 sourceImage:(id)arg2 photoEffects:(id)arg3;
- (void)_cacheFilteredImage:(id)arg1 sourceHash:(id)arg2 photoEffects:(id)arg3;
- (void)_clearCachedFilteredImage;
- (id)_cachedFilteredImageForSourceImage:(id)arg1 photoEffects:(id)arg2 usingContext:(struct CGContext *)arg3;
- (void)_renderAutoCompositionDebugInfoIntoCntext:(struct CGContext *)arg1 forScaledImageRect:(struct CGRect)arg2;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 scale:(double)arg3;
- (double)maxFillFrameZoom;
- (void)setLiveZooming:(BOOL)arg1;
- (BOOL)liveZooming;
- (CDStruct_e9d111b7)boundedPhotoPan:(CDStruct_e9d111b7)arg1 usingPhoto:(id)arg2;
- (CDStruct_e9d111b7)boundedPhotoPan:(CDStruct_e9d111b7)arg1;
- (void)clearCache;
- (void)setImageRotation:(float)arg1 momentary:(BOOL)arg2;
- (float)imageRotation;
- (void)setZoom:(double)arg1 momentary:(BOOL)arg2;
- (double)zoom;
- (void)setPan:(CDStruct_e9d111b7)arg1 momentary:(BOOL)arg2;
- (CDStruct_e9d111b7)pan;
- (id)_imageForSize:(struct CGSize)arg1 renderingIntent:(unsigned long long)arg2 context:(struct CGContext *)arg3 allowUpscale:(BOOL)arg4;
- (id)_filteredImage:(id)arg1 context:(struct CGContext *)arg2;
- (id)_applySmartLightToImage:(id)arg1 context:(struct CGContext *)arg2;
- (void)loadAttributes;
- (void)dealloc;
- (id)initForFrame:(id)arg1;

@end
