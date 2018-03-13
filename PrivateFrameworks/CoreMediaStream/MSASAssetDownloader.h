//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MSASAssetDownloader : MSASAssetTransferer
{
    BOOL _didEncounterNetworkConditionError;
    BOOL _isDownloadingThumbnails;
    BOOL _isWaitingForFirstDownloadEvent;
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetToItemInFlightMap;
    NSMutableArray *_finishedAssets;
    NSString *_currentFocusAlbumGUID;
    NSString *_currentFocusAssetCollectionGUID;
    NSString *_objectGUID;
    NSString *_downloadBatchPerfGUID;
}

@property(retain, nonatomic) NSString *downloadBatchPerfGUID; // @synthesize downloadBatchPerfGUID=_downloadBatchPerfGUID;
@property(retain, nonatomic) NSString *objectGUID; // @synthesize objectGUID=_objectGUID;
@property(nonatomic) BOOL isWaitingForFirstDownloadEvent; // @synthesize isWaitingForFirstDownloadEvent=_isWaitingForFirstDownloadEvent;
@property(retain, nonatomic) NSString *currentFocusAssetCollectionGUID; // @synthesize currentFocusAssetCollectionGUID=_currentFocusAssetCollectionGUID;
@property(retain, nonatomic) NSString *currentFocusAlbumGUID; // @synthesize currentFocusAlbumGUID=_currentFocusAlbumGUID;
@property(nonatomic) BOOL isDownloadingThumbnails; // @synthesize isDownloadingThumbnails=_isDownloadingThumbnails;
@property(nonatomic) BOOL didEncounterNetworkConditionError; // @synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError;
@property(retain, nonatomic) NSMutableArray *finishedAssets; // @synthesize finishedAssets=_finishedAssets;
@property(retain, nonatomic) NSMutableDictionary *assetToItemInFlightMap; // @synthesize assetToItemInFlightMap=_assetToItemInFlightMap;
@property(retain, nonatomic) NSMutableArray *itemsInFlight; // @synthesize itemsInFlight=_itemsInFlight;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)didFinishGettingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (id)_orphanedAssetError;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 error:(id)arg3;
- (void)_workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)_workQueueStopTrackingItem:(id)arg1;
- (void)didEnqueueAsset:(id)arg1 forAlbumGUID:(id)arg2;
- (void)workQueueUnregisterAssets:(id)arg1;
- (void)unregisterAssets:(id)arg1;
- (void)workQueueRegisterAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)registerAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workQueueDownloadNextBatch;
- (void)_workQueueGoIdle;
- (void)workQueueCancel;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueStop;
- (id)workQueueObjectGUID;
- (void)workQueueRetryOutstandingActivities;
- (id)_pathForPersonID:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MSASAssetDownloaderDelegate> delegate; // @dynamic delegate;

@end

