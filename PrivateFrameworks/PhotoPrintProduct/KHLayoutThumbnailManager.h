//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KHLayoutThumbnailerDelegate.h"
#import "NSCacheDelegate.h"

@class NSCache, NSOperationQueue, NSString;

@interface KHLayoutThumbnailManager : NSObject <KHLayoutThumbnailerDelegate, NSCacheDelegate>
{
    BOOL _shouldIgnoreDrawingBadges;
    BOOL _shouldIgnoreDrawingTexts;
    BOOL _shouldIgnorePlaceholderText;
    double _screenScale;
    unsigned long long _preferredRenderingIntent;
    NSOperationQueue *_callbackQueue;
    id <KHLayoutThumbnailManagerDelegate> _delegate;
    NSOperationQueue *_thumbnailerQueue;
    NSCache *_thumbnailCache;
    struct CGSize _enclosingSize;
}

@property(readonly, nonatomic) NSCache *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(readonly, nonatomic) NSOperationQueue *thumbnailerQueue; // @synthesize thumbnailerQueue=_thumbnailerQueue;
@property(nonatomic) __weak id <KHLayoutThumbnailManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) NSOperationQueue *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) unsigned long long preferredRenderingIntent; // @synthesize preferredRenderingIntent=_preferredRenderingIntent;
@property(nonatomic) BOOL shouldIgnorePlaceholderText; // @synthesize shouldIgnorePlaceholderText=_shouldIgnorePlaceholderText;
@property(nonatomic) BOOL shouldIgnoreDrawingTexts; // @synthesize shouldIgnoreDrawingTexts=_shouldIgnoreDrawingTexts;
@property(nonatomic) BOOL shouldIgnoreDrawingBadges; // @synthesize shouldIgnoreDrawingBadges=_shouldIgnoreDrawingBadges;
@property(nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property(nonatomic) struct CGSize enclosingSize; // @synthesize enclosingSize=_enclosingSize;
- (void).cxx_destruct;
- (void)thumbnailerCompleted:(id)arg1;
- (BOOL)hasThumbnailForLayout:(id)arg1;
- (struct CGSize)thumbnailSizeForLayout:(id)arg1;
- (void)refreshThumbnailForLayout:(id)arg1;
- (void)removeAllThumbnails;
- (id)thumbnailForLayout:(id)arg1 size:(unsigned long long)arg2;
- (void)requestThumbnailForLayout:(id)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestThumbnailForLayout:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)requestThumbnailForLayout:(id)arg1;
- (void)_performRequestsWithThumbnailInfo:(id)arg1 layout:(id)arg2;
- (id)_thumbnailInfoForLayout:(id)arg1;
@property(nonatomic) unsigned long long maxConcurrentOperationCount;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithEnclosingSize:(struct CGSize)arg1;
- (void)saveCacheForProject:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)loadCacheForProject:(id)arg1;
- (void)_invalidateDiskCacheForProject:(id)arg1;
- (void)_writeThumbnail:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
