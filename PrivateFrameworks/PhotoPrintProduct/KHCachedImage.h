//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHImage.h>

@interface KHCachedImage : KHImage
{
    struct CGSize _requestedPixelSize;
    BOOL _isMaxSize;
}

@property(readonly, nonatomic) struct CGSize requestedPixelSize; // @synthesize requestedPixelSize=_requestedPixelSize;
- (id)description;
- (BOOL)imageIsSuitableForSize:(struct CGSize)arg1;
- (id)initWithImage:(id)arg1 requestedPixelSize:(struct CGSize)arg2;

@end

