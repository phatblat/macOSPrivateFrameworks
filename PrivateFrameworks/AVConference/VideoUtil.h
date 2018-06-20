//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VideoUtil : NSObject
{
}

+ (int)setupBufferPool:(struct __CVPixelBufferPool **)arg1 width:(double)arg2 height:(double)arg3;
+ (void)adjustFaceMetadataForPixelBuffer:(struct __CVBuffer *)arg1 originalWidth:(unsigned long long)arg2 originalHeight:(unsigned long long)arg3;
+ (long long)videoResolutionForWidth:(int)arg1 height:(int)arg2;
+ (struct CGSize)getBestCaptureSizeForEncodingSize:(struct CGSize)arg1;
+ (struct CGSize)sizeForVideoResolution:(long long)arg1;
+ (id)convertPixelBufferToJPEG:(struct __CVBuffer *)arg1 withAssetIdentifier:(id)arg2 cameraStatusBits:(unsigned char)arg3;

@end

