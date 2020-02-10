//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetChangeObserver.h"
#import "PLCloudFeedEntriesObserver.h"
#import "PLPhotoLibraryShouldReloadObserver.h"

@class NSArray, NSMutableArray, NSOrderedSet, PHPhotoLibrary;

@interface PXFeedRecentsManager : NSObject <PLCloudFeedEntriesObserver, PLAssetChangeObserver, PLPhotoLibraryShouldReloadObserver>
{
    NSMutableArray *_pendingFeedEntriesChangeNotifications;
    NSMutableArray *_pendingAssetsChangeNotifications;
    PHPhotoLibrary *_photoLibrary;
    long long _count;
    id <PXFeedRecentsManagerDelegate> _delegate;
    NSOrderedSet *__cachedRecentAssets;
    NSArray *__cachedRecentPHAssets;
}

@property(copy, nonatomic, setter=_setCachedRecentPHAssets:) NSArray *_cachedRecentPHAssets; // @synthesize _cachedRecentPHAssets=__cachedRecentPHAssets;
@property(copy, nonatomic, setter=_setCachedRecentAssets:) NSOrderedSet *_cachedRecentAssets; // @synthesize _cachedRecentAssets=__cachedRecentAssets;
@property(nonatomic) __weak id <PXFeedRecentsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setCount:) long long count; // @synthesize count=_count;
@property(retain, nonatomic, setter=_setPhotoLibrary:) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)shouldReload:(id)arg1;
- (void)assetsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (void)_invalidateCachedRecentAssets;
- (BOOL)_updateCachedRecentAssets;
@property(readonly, copy, nonatomic) NSArray *recentPHAssets;
@property(readonly, copy, nonatomic) NSOrderedSet *recentAssets;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1 count:(long long)arg2;

@end
