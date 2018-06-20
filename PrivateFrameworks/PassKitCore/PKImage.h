//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSObject<OS_dispatch_queue>;

@interface PKImage : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldTile;
    BOOL _shouldStretch;
    struct PKEdgeInsets _capInsets;
    NSData *_imageData;
    struct CGImage *_imageRef;
    double _scale;
    long long _orientation;
}

+ (BOOL)supportsSecureCoding;
+ (id)passesImageNamed:(id)arg1;
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)newImageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
+ (id)newImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3 preferredScreenScale:(double)arg4 suffix:(id)arg5;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(double *)arg3;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (void)_queue_createImageRefIfNecessary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withBlendMode:(int)arg3 alpha:(double)arg4;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)resizableImageByTilingCenterPixel;
- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets)arg1;
- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets)arg1;
- (id)resizedImageWithConstraints:(id)arg1;
- (id)imageWithoutCapInsets;
- (id)croppedImageWithInsets:(struct PKEdgeInsets)arg1;
- (id)blurredImageWithRadius:(unsigned long long)arg1 constraints:(id)arg2;
@property(readonly, nonatomic) struct PKEdgeInsets capInsets;
@property(readonly, nonatomic) BOOL stretches;
@property(readonly, nonatomic) BOOL tiles;
- (void)preheatBitmapData;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (struct CGSize)downscaleSizeMatchingScale:(double)arg1;
@property(readonly, nonatomic) struct CGSize size;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)init;
- (BOOL)isEqualToImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)imageHash;

@end

