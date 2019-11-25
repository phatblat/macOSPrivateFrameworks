//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (PassKit)
+ (void)drawNinePartsImageFromImage:(id)arg1 rect:(struct CGRect)arg2 sizes:(CDStruct_8727d297)arg3;
+ (id)imageFromImage:(id)arg1 inputPoint:(CDUnknownBlockType)arg2 outputSize:(struct CGSize)arg3;
+ (id)passBoardingSmallIconForTransitType:(long long)arg1;
+ (id)passBoardingIconForTransitType:(long long)arg1;
+ (id)passBoardingPinGlyphIcon;
+ (id)passGenericThumbnailFrameImage;
+ (id)passBackMaskImageForPassStyle:(long long)arg1;
+ (id)passFrontMaskImageForPassStyle:(long long)arg1;
+ (id)passKitImageNamed:(id)arg1;
- (id)pk_imageWithTint:(id)arg1 size:(struct CGSize)arg2;
- (id)pk_imageWithTint:(id)arg1;
- (id)scaledImageWithSize:(struct CGSize)arg1;
- (struct CGRect)_centeredRectWithSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;
- (id)blurredImageWithRadius:(int)arg1;
@end

