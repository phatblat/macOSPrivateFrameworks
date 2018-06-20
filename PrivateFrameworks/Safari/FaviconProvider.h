//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSFaviconProvider.h"

#import "FaviconProviderHistoryBookmarkAdapterDelegate.h"

@class FaviconProviderHistoryBookmarkAdapter, FaviconProviderIconControllerDatabaseStore, NSCache, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface FaviconProvider : WBSFaviconProvider <FaviconProviderHistoryBookmarkAdapterDelegate>
{
    FaviconProviderIconControllerDatabaseStore *_legacyDatabaseController;
    NSURL *_iconDatabaseURL;
    NSURL *_tempMigrationBasePath;
    NSMutableSet *_knownURLsDuringMigration;
    FaviconProviderHistoryBookmarkAdapter *_historyAndBookmarksAdapter;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_monogramTitleToImageCache;
}

- (void).cxx_destruct;
- (void)faviconProviderHistoryBookmarkAdapter:(id)arg1 didFlushURLString:(id)arg2;
- (void)faviconProviderHistoryBookmarkAdapter:(id)arg1 didEstablishKnownURLStrings:(id)arg2;
- (void)faviconProviderHistoryBookmarkAdapterCouldNotEstablishKnownURLs:(id)arg1;
- (void)_removeIconControllerSQLiteFilesIfNeeded;
- (id)_monogramForTitle:(id)arg1 url:(id)arg2;
- (id)fallbackIconForRequest:(id)arg1;
- (id)_topSitesPlaceholderImageForSize:(struct CGSize)arg1;
- (id)_favoritesPlaceholderImageForSize:(struct CGSize)arg1;
- (id)_bookmarksPlaceholderImageForSize:(struct CGSize)arg1;
- (id)_historyPlaceholderImageForSize:(struct CGSize)arg1;
- (id)builtInIconForRequest:(id)arg1;
- (void)cleanUpAfterPersistenceSetUpDidSucceed:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setUpPersistenceAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithIconDatabasePathURL:(id)arg1 persistenceBaseURL:(id)arg2 persistenceName:(id)arg3 preferredIconSize:(struct CGSize)arg4 atScale:(double)arg5 allScales:(id)arg6;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize)arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

