//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICDocCamImageFilters : NSObject
{
}

+ (struct NSImage *)perspectiveCorrectedImageFromImage:(struct NSImage *)arg1 normalizedImageQuad:(id)arg2;
+ (struct NSImage *)perspectiveCorrectedImageFromImage:(struct NSImage *)arg1 imageQuad:(id)arg2;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)arg1 imageQuad:(id)arg2;
+ (struct NSImage *)imageWithRGBColorspaceFromImage:(struct NSImage *)arg1;
+ (struct NSImage *)filteredImage:(struct NSImage *)arg1 orientation:(long long)arg2 imageFilterType:(short)arg3;
+ (struct NSImage *)filteredImage:(struct NSImage *)arg1 imageFilterType:(short)arg2;
+ (struct NSImage *)grayscaleDocument:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)colorDocument:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)bradleyAdaptiveThresholdWithBlur:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)bradleyAdaptiveThreshold:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)grayscale:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)whiteboardAndSaturation:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)whiteboardFilter:(struct NSImage *)arg1 orientation:(long long)arg2;
+ (struct NSImage *)convertImageToGrayScale:(struct NSImage *)arg1;
+ (struct NSImage *)bradleyAdaptiveThreshold:(struct NSImage *)arg1;
+ (id)sharedCoreImageContext;
+ (id)nonLocalizedImageFilterNameForType:(short)arg1;
+ (id)localizedImageFilterNameForType:(short)arg1;
+ (id)localizedImageFilterNameForName:(id)arg1;
+ (short)imageFilterTypeFromNonLocalizedName:(id)arg1;
+ (short)imageFilterTypeFromName:(id)arg1;
+ (id)nonLocalizedImageFilterNames;
+ (id)imageFilterNames;

@end

