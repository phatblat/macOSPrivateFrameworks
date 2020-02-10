//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PVImageBuffer : NSObject
{
    id <PVImageBufferImpl> _imageBufferImpl;
    struct HGSynchronizable *_lock;
}

+ (id)imageWithHGBitmap:(HGRef_0776e7a8)arg1;
+ (id)imageWithHGCVPixelBuffer:(HGRef_55a77cc8)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithNSImage:(id)arg1;
- (void).cxx_destruct;
- (id)debugQuickLookObject;
- (id)description;
- (struct CGSize)size;
- (HGRef_0776e7a8)hgBitmapWithColorSpace:(id)arg1;
- (struct __CVBuffer *)cvPixelBufferWithColorSpace:(id)arg1;
- (HGRef_0776e7a8)hgBitmap;
- (struct __CVBuffer *)cvPixelBuffer;
- (BOOL)cvPixelBufferRequiresCopy;
- (BOOL)canCreateHGBitmap;
- (BOOL)canCreateCVPixelBuffer;
- (struct CGImage *)cgImage;
- (id)nsImage;
- (void)dealloc;
- (id)initWithImageBufferImpl:(id)arg1;

@end
