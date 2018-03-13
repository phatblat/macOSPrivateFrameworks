//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MRTiledSprite : NSObject
{
    struct CGPoint mPosition;
    struct CGSize mHalfSize;
    float mRotation;
    struct CGRect mInnerRect;
    struct CGRect mOuterRect;
    BOOL mPreservesImageAspectRatio;
    BOOL mIsSealed;
    NSMutableArray *mTriangles;
    float *mVertices;
    float *mBasicTextureCoordinates;
    float *mInSpriteCoordinates;
    float *mTextureCoordinates[4];
    NSMutableArray *mMiddleTriangles;
    float *mMiddleVertices;
    float *mMiddleBasicTextureCoordinates;
    float *mMiddleInSpriteCoordinates;
    float *mMiddleTextureCoordinates[4];
    NSMutableArray *mOuterTriangles;
    float *mOuterVertices;
    float *mOuterBasicTextureCoordinates;
    float *mOuterInSpriteCoordinates;
    float *mOuterTextureCoordinates[4];
    struct CGSize mInSpriteCoordinatesFactor;
    struct CGPoint mInSpriteCoordinatesOffset;
    struct CGSize mTextureCoordinatesFactor[4];
    struct CGPoint mTextureCoordinatesOffset[4];
    char mNeedsTextureCoordinates[4];
    BOOL mNeedsInSpriteCoordinates;
    BOOL mNeedsToUpdateInSpriteCoordinates;
    BOOL mHitIsActive;
}

@property(nonatomic) BOOL preservesImageAspectRatio; // @synthesize preservesImageAspectRatio=mPreservesImageAspectRatio;
@property(nonatomic) BOOL needsInSpriteCoordinates; // @synthesize needsInSpriteCoordinates=mNeedsInSpriteCoordinates;
@property(nonatomic) BOOL hitIsActive; // @synthesize hitIsActive=mHitIsActive;
@property(readonly, nonatomic) struct CGRect outerRect; // @synthesize outerRect=mOuterRect;
@property(readonly, nonatomic) struct CGRect innerRect; // @synthesize innerRect=mInnerRect;
@property(readonly, nonatomic) float rotation; // @synthesize rotation=mRotation;
@property(readonly, nonatomic) struct CGSize halfSize; // @synthesize halfSize=mHalfSize;
@property(readonly, nonatomic) struct CGPoint position; // @synthesize position=mPosition;
- (void)getOpaquePosition:(struct CGPoint *)arg1 andHalfSize:(struct CGSize *)arg2;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2;
- (BOOL)hitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (void)setSpriteCoordinatesFactor:(struct CGSize)arg1 andOffset:(struct CGPoint)arg2;
- (void)setTextureCoordinatesFactor:(struct CGSize)arg1 andOffset:(struct CGPoint)arg2 onTextureUnit:(unsigned long long)arg3;
- (void)setNeedsTextureCoordinates:(BOOL)arg1 onTextureUnit:(unsigned long long)arg2;
- (void)renderImage:(id)arg1 inContext:(id)arg2;
- (void)renderImageOuter:(id)arg1 inContext:(id)arg2;
- (void)renderImageMiddle:(id)arg1 inContext:(id)arg2;
- (void)renderImageInner:(id)arg1 inContext:(id)arg2;
- (void)renderDumbImage:(id)arg1 inContext:(id)arg2;
- (void)updateInSpriteCoordinates;
- (void)seal;
- (void)subtractOpaqueSpriteWithPosition:(struct CGPoint)arg1 halfSize:(struct CGSize)arg2 andRotation:(float)arg3;
- (void)subtractSpriteAtPosition:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 zRotation:(float)arg3 andOpaqueRect:(struct CGRect)arg4 inContext:(id)arg5;
- (void)subtractSprite:(id)arg1;
- (void)subtractTriangle:(double [6])arg1 fromTriangle:(double [6])arg2 addTrianglesTo:(id)arg3;
- (void)dealloc;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 innerRect:(struct CGRect)arg4 outerRect:(struct CGRect)arg5 context:(id)arg6;
- (id)initWithPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2 zRotation:(float)arg3 innerRect:(struct CGRect)arg4 context:(id)arg5;

@end

