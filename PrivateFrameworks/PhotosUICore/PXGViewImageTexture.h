//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGImageTexture.h>

@interface PXGViewImageTexture : PXGImageTexture
{
    BOOL _isOpaque;
    unsigned int _orientation;
    struct CGImage *_imageRef;
}

@property(readonly, nonatomic) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (BOOL)isOpaque;
- (struct CGSize)pixelSize;
- (long long)estimatedByteSize;
- (int)presentationType;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;

@end
