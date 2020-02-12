//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFMediaUtilities : NSObject
{
}

+ (long long)rawSourceMaximumPixelCountForInteractiveEditing;
+ (long long)rawSourceMaximumPixelCountForBackgroundProcessing;
+ (BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)arg1;
+ (struct CGSize)maximumImageSizeFromProperties:(id)arg1;
+ (id)mainVideoTrackForAsset:(id)arg1;
+ (BOOL)isQuicktimeMovieUTI:(id)arg1;
+ (BOOL)isPdfUTI:(id)arg1;
+ (BOOL)isPsdUTI:(id)arg1;
+ (BOOL)isPngUTI:(id)arg1;
+ (BOOL)isHeifUTI:(id)arg1;
+ (BOOL)isGifUTI:(id)arg1;
+ (BOOL)isTiffUTI:(id)arg1;
+ (BOOL)isRawUTI:(id)arg1;
+ (BOOL)isJpeg2000UTI:(id)arg1;
+ (BOOL)isJpegUTI:(id)arg1;
+ (BOOL)isImageUTI:(id)arg1;
+ (BOOL)isMovieUTI:(id)arg1;
+ (BOOL)isAudioUTI:(id)arg1;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource *)arg1 atIndex:(unsigned long long)arg2;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource *)arg1;
+ (long long)defaultRasterizationDPI;
+ (BOOL)UTIRequiresRasterizationDPI:(id)arg1;
+ (BOOL)isValidAVFileForURL:(id)arg1;
+ (BOOL)isValidImageFileForURL:(id)arg1;
+ (BOOL)isValidExtension:(id)arg1 forUTI:(id)arg2;
+ (id)UTIForURL:(id)arg1 error:(id *)arg2;
+ (id)UTIForHFSType:(unsigned int)arg1;
+ (id)resourceModelUTIForExtension:(id)arg1;
+ (id)UTIForExtension:(id)arg1;
+ (id)preferredExtensionForUTI:(id)arg1;
+ (BOOL)canGenerateImageDerivativesFromUTI:(id)arg1;

@end
