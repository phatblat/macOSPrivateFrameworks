//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHLayerRenderer.h>

@class KHAsset;

@interface KHTextureLayerRenderer : KHLayerRenderer
{
    long long _assetId;
    KHAsset *_asset;
    struct CGSize _tileSize;
    struct CGPoint _phaseOffset;
    int _tileMethodLegacy;
    int _tilingMethod;
    BOOL _topRowOnly;
}

+ (id)supportedAttributes;
- (void)dealloc;
- (id)asset;
- (void)_tileIntoContext:(struct CGContext *)arg1 withImage:(struct CGImage *)arg2 atSize:(struct CGSize)arg3 tileSize:(struct CGSize)arg4;
- (void)_drawBackgroundTextureIntoContext:(struct CGContext *)arg1 withImage:(struct CGImage *)arg2 atSize:(struct CGSize)arg3 tileSize:(struct CGSize)arg4;
- (void)_hiResLayerFillInContext:(struct CGContext *)arg1 scale:(double)arg2 isPDFDestination:(BOOL)arg3 drawPath:(struct CGPath *)arg4;
- (void)_cgPatternFillInContext:(struct CGContext *)arg1 scale:(double)arg2 isPDFDestination:(BOOL)arg3 drawPath:(struct CGPath *)arg4;
- (struct CGPattern *)_createFillPatternWithSize:(struct CGSize)arg1 transform:(struct CGAffineTransform)arg2 info:(id)arg3;
- (struct CGSize)_calculateTileSizeInDrawRect:(struct CGRect)arg1 scale:(double)arg2 isPDFDestination:(BOOL)arg3;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 forPath:(struct CGPath *)arg3 atScale:(double)arg4 treatmentFactor:(double)arg5 flipped:(BOOL)arg6;
- (void)fillContext:(struct CGContext *)arg1 environment:(id)arg2 forPath:(struct CGPath *)arg3 atScale:(double)arg4 treatmentFactor:(double)arg5;
- (void)loadAttributes;

@end
