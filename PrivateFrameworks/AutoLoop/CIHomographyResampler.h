//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AutoLoop/ImageHomographyResampler.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIHomographyResampler : ImageHomographyResampler
{
    CIContext *_ctx;
}

- (void).cxx_destruct;
- (struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg1 clipToRect:(struct CGRect)arg2 outputSize:(struct CGSize)arg3;
- (id)init;

@end
