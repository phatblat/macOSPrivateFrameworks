//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

#import "PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate.h"

@class NSOperationQueue, NSString, PHAFaceCropProcessingJobProcessFaceCropsOperation;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation *_processingOperation;
}

- (void).cxx_destruct;
- (void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3;
- (float)completionScore;
- (BOOL)stopJob:(id *)arg1;
- (BOOL)startJob:(id *)arg1;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

