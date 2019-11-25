//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NURenderJob.h"

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob
{
    AVAsset *_videoSource;
    NSDictionary *_recipe;
}

@property(retain, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
@property(retain, nonatomic) AVAsset *videoSource; // @synthesize videoSource=_videoSource;
- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (id)analysisRequest;
- (id)scalePolicy;
- (id)cacheKey;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsOutputGeometry;

@end

