//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableDictionary, VCPAsset;

@interface VCPPhotoAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_results;
    unsigned long long _irisAnalyses;
    NSData *_featureData;
    NSDictionary *_phFaceResults;
    unsigned long long _phFaceFlags;
    VCPAsset *_asset;
    long long _status;
}

+ (id)analyzerWithTypes:(unsigned long long)arg1 forAsset:(id)arg2;
+ (BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)analyzeAsset:(CDUnknownBlockType)arg1;
- (int)analyzeImage:(unsigned long long *)arg1 performedAnalyses:(unsigned long long *)arg2 movingObjectResults:(id)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)downscaleImage:(struct __CVBuffer *)arg1 scaledImage:(struct __CVBuffer **)arg2 majorDimension:(int)arg3;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (id)initWithTypes:(unsigned long long)arg1 forAsset:(id)arg2;

@end
