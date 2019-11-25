//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NUVideoUtilities : NSObject
{
}

+ (id)cleanApertureVideoSettingsFor:(CDStruct_996ac03c)arg1 scale:(CDStruct_912cb5d2)arg2 videoSize:(CDStruct_912cb5d2)arg3;
+ (BOOL)compositionInstructions:(id)arg1 areEqualToCompositionInstructions:(id)arg2;
+ (id)videoCompositionDescription:(id)arg1;
+ (id)videoDescription:(id)arg1;
+ (id)repeatVideo:(id)arg1 count:(long long)arg2 error:(out id *)arg3;
+ (id)repeatAudio:(id)arg1 count:(long long)arg2 error:(out id *)arg3;
+ (id)repeatVideoComposition:(id)arg1 count:(long long)arg2 error:(out id *)arg3;
+ (CDStruct_e83c9415)conformRange:(CDStruct_e83c9415)arg1 inRange:(CDStruct_e83c9415)arg2;
+ (id)newPixelBufferOfSize:(CDStruct_912cb5d2)arg1 format:(unsigned int)arg2;
+ (CDStruct_996ac03c)cleanApertureOfTrack:(id)arg1 oriented:(_Bool)arg2;
+ (CDStruct_912cb5d2)encodedPixelSizeOfTrack:(id)arg1 oriented:(_Bool)arg2;
+ (CDStruct_912cb5d2)naturalSizeOfTrack:(id)arg1 oriented:(_Bool)arg2;
+ (long long)videoOrientationForAsset:(id)arg1 videoComposition:(id)arg2;
+ (long long)videoOrientationForAssetPreferredTransform:(struct CGAffineTransform)arg1;
+ (struct __CVBuffer *)readVideoFrameAtTime:(CDStruct_1b6d18a9)arg1 fromAsset:(id)arg2 outputSettings:(id)arg3 videoComposition:(id)arg4 error:(out id *)arg5;
+ (id)readerOutputForAsset:(id)arg1 outputSettings:(id)arg2 videoComposition:(id)arg3 error:(out id *)arg4;
+ (id)deepMutableCopyVideoComposition:(id)arg1;
+ (BOOL)updateVideoMetadataAtURL:(id)arg1 withItems:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 error:(out id *)arg4;
+ (BOOL)readFromReader:(id)arg1 andWriteToWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 createCustomMetadata:(BOOL)arg4 geometryTransform:(id)arg5 progress:(id)arg6 error:(out id *)arg7;
+ (CDStruct_1b6d18a9)readStillImageTimeFromVideoAsset:(id)arg1;
+ (id)metadataTrackWithStillImageTransformInLivePhotoAsset:(id)arg1;
+ (id)metadataTrackWithStillImageDisplayTimeMarkerInLivePhotoAsset:(id)arg1;
+ (BOOL)isMetadataTrackWithStillImageTransformInLivePhoto:(id)arg1;
+ (BOOL)isMetadataTrackStillImageDisplayTimeMarkerInLivePhoto:(id)arg1;
+ (BOOL)_metadataTrack:(id)arg1 containsIdentifier:(id)arg2;
+ (void)readNextSampleBuffer:(id)arg1 output:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (void)readNextPixelBuffer:(id)arg1 output:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (CDStruct_1b6d18a9)minimumFrameDurationForAssetTrack:(id)arg1;
+ (CDStruct_1b6d18a9)minimumFrameDurationForAsset:(id)arg1 videoComposition:(id)arg2;
+ (CDStruct_1b6d18a9)minimumFrameDurationForAsset:(id)arg1;
+ (id)firstEnabledVideoTrackInAsset:(id)arg1 error:(out id *)arg2;
+ (id)bestOutputSettingsPresetForTargetVideoSize:(CDStruct_912cb5d2)arg1;
+ (id)rgbVideoSettingsForAVAssetReader;
+ (id)defaultVideoSettingsForAVAssetReader;

@end

