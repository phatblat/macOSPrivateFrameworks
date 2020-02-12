//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXVideoContentProvider.h>

#import "PXDisplayAssetVideoContentProviderRequestDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, PXMediaProvider;

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider <PXDisplayAssetVideoContentProviderRequestDelegate>
{
    long long _videoRequestID;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_postprocessingQueue;
    NSMutableDictionary *_loadingQueue_requestsByPriority;
    long long _loadingQueue_lastRequestedPriority;
    id <PXDisplayAsset> _loadingQueue_asset;
    NSString *_contentIdentifier;
    PXMediaProvider *_mediaProvider;
}

@property(readonly, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
- (id)contentIdentifier;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFinishWithPlayerItem:(id)arg2 info:(id)arg3;
- (void)requestLoadingProgressDidChange:(id)arg1;
- (void)_loadingQueue_reloadContent;
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)arg1 info:(id)arg2 priority:(long long)arg3;
- (BOOL)_loadingQueue_needsNewRequestForPriority:(long long)arg1;
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)arg1;
- (void)_loadingQueue_cancelAllRequests;
- (void)_loadingQueueBeginLoadingWithPriority:(long long)arg1;
- (void)_loadingQueue_setAsset:(id)arg1;
- (void)cancelLoading;
@property(retain, nonatomic) id <PXDisplayAsset> asset;
- (void)reloadContent;
@property(readonly, copy) NSString *description;
- (id)postprocessPlayerItem:(id)arg1;
@property(readonly, nonatomic) BOOL needsPostprocessing;
- (void)beginLoadingWithPriority:(long long)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

