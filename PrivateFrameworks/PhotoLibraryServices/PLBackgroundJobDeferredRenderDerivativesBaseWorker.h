//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker
{
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (id)workerWithLibrary:(id)arg1;
- (void).cxx_destruct;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (BOOL)isInterruptible;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)managedObjectIDsNeedingProcessing;
- (BOOL)hasPendingJobs;
- (id)videoConversionClient;
- (id)imageConversionClient;
- (id)_predicateToFetchDeferredAssets;

@end

