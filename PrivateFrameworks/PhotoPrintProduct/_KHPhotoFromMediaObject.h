//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHPhoto.h>

@class KHImage, KHImageProperties, MLMediaObject;

@interface _KHPhotoFromMediaObject : KHPhoto
{
    KHImage *_image;
    MLMediaObject *_mediaObject;
    KHImageProperties *_imageProperties;
}

@property(retain, nonatomic) KHImageProperties *imageProperties; // @synthesize imageProperties=_imageProperties;
@property(retain, nonatomic) MLMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
- (void).cxx_destruct;
- (unsigned long long)imageOrientation;
- (id)pageLayoutImage;
- (id)pageLayoutPhotoDate;
- (id)pageLayoutTitle;
- (id)_urlForSize:(unsigned long long)arg1;
- (id)URL;
- (id)pageLayoutPhotoID;
- (id)_scaledPageLayoutImageForSize:(struct CGSize)arg1;
- (id)_storedPageLayoutImageForSize:(struct CGSize)arg1;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1 quality:(unsigned long long)arg2;
- (id)pageLayoutImageSuitableForSize:(struct CGSize)arg1;
- (id)pageLayoutAspectRatioThumbnailImage;
- (id)pageLayoutPhotoModificationDate;
- (id)fileURL;
- (id)initWithMediaObject:(id)arg1;

@end

