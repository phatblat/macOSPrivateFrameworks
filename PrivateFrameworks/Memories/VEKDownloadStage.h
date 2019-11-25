//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Memories/VEKPipelineStage.h>

@class MiroCloudDownloader, VEKResult;

@interface VEKDownloadStage : VEKPipelineStage
{
    int _downloadPolicy;
    MiroCloudDownloader *_cloudDownloader;
    VEKResult *_stageResults;
}

@property(retain, nonatomic) VEKResult *stageResults; // @synthesize stageResults=_stageResults;
@property(retain, nonatomic) MiroCloudDownloader *cloudDownloader; // @synthesize cloudDownloader=_cloudDownloader;
@property int downloadPolicy; // @synthesize downloadPolicy=_downloadPolicy;
- (void).cxx_destruct;
- (void)tellPipelineThatItShouldCancelPlease;
- (BOOL)shouldCancelOnNonLocalAssets;
- (void)_downloadAssets:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)runStageWithInput:(id)arg1;
- (id)outputTypes;
- (id)inputTypes;

@end

