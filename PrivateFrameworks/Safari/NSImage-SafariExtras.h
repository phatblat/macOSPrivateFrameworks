//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (SafariExtras)
+ (void)safari_fetchContactImageForContactWithUniqueID:(id)arg1 diameter:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)safari_defaultMediumFavicon;
+ (id)safari_defaultSmallFavicon;
+ (id)safari_functionBarCreditCardIconForType:(unsigned long long)arg1;
+ (id)safari_creditCardIconForType:(unsigned long long)arg1;
+ (id)safari_genericCreditCardIcon;
+ (id)safari_paddedUncoloredGlyphWithName:(id)arg1 iconSize:(struct CGSize)arg2;
+ (id)safari_paddedUncoloredGlyphWithName:(id)arg1;
+ (void)safari_generateICNSWithStandardResolutionImages:(id)arg1 highResolutionImages:(id)arg2 atURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (BOOL)safari_generateICNSWithStandardResolutionImages:(id)arg1 highResolutionImages:(id)arg2 atURL:(id)arg3;
+ (id)safari_menuTemplateImageNamed:(id)arg1;
+ (id)safari_imageWithCGImage:(struct CGImage *)arg1 size:(struct CGSize)arg2;
+ (id)safari_imageWithContentsOfURL:(id)arg1 usePrivateStorageSession:(BOOL)arg2;
+ (id)_safari_imageUsingPrivateStorageSessionWithContentsOfURL:(id)arg1;
+ (id)safari_imageWithImage:(id)arg1 tintColor:(id)arg2;
+ (id)safari_TIFFNamed:(id)arg1;
+ (id)safari_PNGNamed:(id)arg1;
- (id)safari_imageByRoundingCornersWithRadius:(double)arg1;
@property(readonly, nonatomic) BOOL safari_transparencyAnalysisResultIsNotOpaque;
@property(nonatomic, setter=safari_setTransparencyAnalysisResult:) long long safari_transparencyAnalysisResult;
- (id)safari_iconFilledWithBackgroundColor:(id)arg1;
- (id)safari_flatImageWithColor:(id)arg1;
- (id)_safari_imageWithBackgroundColor:(id)arg1 compositingOperation:(unsigned long long)arg2;
- (id)_safari_imageByApplyingTransform:(id)arg1;
- (id)safari_mirrorImageIfNeeded;
- (void)safari_aspectRatioPreservingScaleHeightTo:(double)arg1;
- (void)safari_aspectRatioPreservingScaleWidthTo:(double)arg1;
- (id)safari_imageByScalingToSize:(struct CGSize)arg1 withImageInterpolation:(unsigned long long)arg2 imageScaling:(unsigned long long)arg3;
- (id)safari_imageByScalingToSize:(struct CGSize)arg1 withImageInterpolation:(unsigned long long)arg2;
- (id)safari_imageByApplyingShadowForDragging;
- (BOOL)safari_isEqualToImage:(id)arg1;
- (struct CGImage *)_safari_cgImageByResizingForICNSFile;
- (struct CGImage *)_safari_cgImageByResizingToSizeInPixels:(struct CGSize)arg1;
@end

