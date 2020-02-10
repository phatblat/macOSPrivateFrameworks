//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIDetector, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MiroAnalysisImageHelpers : NSObject
{
    CIDetector *_faceDetector;
    BOOL _faceTrackingEnabled;
    CDStruct_1b6d18a9 _recordingStartTime;
    NSMutableDictionary *_currentFaceRangesKeyedByFaceID;
    unsigned long long _exifOrientation;
    NSMutableDictionary *_shotTypeToSampleCountMap;
    long long _projectNaturalFrameRate;
}

+ (long long)imageOrientationForEXIFOrientation:(unsigned long long)arg1;
+ (unsigned long long)exifOrientationForUIImageOrientation:(long long)arg1;
+ (unsigned long long)exifOrientationForVideoTrack:(id)arg1;
@property(nonatomic) long long projectNaturalFrameRate; // @synthesize projectNaturalFrameRate=_projectNaturalFrameRate;
- (void).cxx_destruct;
- (void)processAVAsset:(id)arg1 options:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)processUIImage:(id)arg1 options:(unsigned long long)arg2 progressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_makeColorAnalysisDictionary:(id)arg1 forImageBounds:(struct CGRect)arg2;
- (id)_analyzeColorsInImage:(id)arg1;
- (id)_analyzeColorsInVideoFrame:(struct CGImage *)arg1 withOrientation:(unsigned long long)arg2;
- (void)_stopOutputtingFaceRangesWithEndTime:(CDStruct_1b6d18a9)arg1 lastFaceRanges:(id *)arg2;
- (BOOL)_processOutputtingFaceRangeWithCGImage:(struct CGImage *)arg1 detectionTime:(CDStruct_1b6d18a9)arg2 faceRanges:(id *)arg3;
- (BOOL)_startOutputtingFaceRangesWithStartTime:(CDStruct_1b6d18a9)arg1 orientation:(unsigned long long)arg2;
- (void)_outputFaceRangesWithRemovedFaceIDs:(id)arg1 outputtedFaceRanges:(id *)arg2;
- (void)_updateFaceRangeWithFaceID:(long long)arg1 detectionTime:(CDStruct_1b6d18a9)arg2 facePosition:(long long)arg3 flags:(unsigned long long)arg4 faceBounds:(struct CGRect)arg5;
- (void)_updateShotTypeMapWithFaceBoundsArray:(id)arg1;
- (long long)_shotTypeForFaceBoundsArray:(id)arg1;
- (long long)_positionForFaceBounds:(struct CGRect)arg1;
- (long long)_primaryShotType;
- (id)init;

@end
