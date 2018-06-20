//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSiteMetadataProvider.h"

@class NSArray, NSColor, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_requestsToRequestInfos;
    NSMutableDictionary *_folderUUIDsToTouchIconInfo;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
}

+ (BOOL)_appUsesLeftToRightLayout;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void).cxx_destruct;
- (id)_drawTouchIconForRequest:(id)arg1;
- (void)_dispatchResponseForRequest:(id)arg1 touchIcon:(id)arg2;
- (void)_dispatchResponseForRequest:(id)arg1;
- (void)_coalesceResponseDispatchForRequest:(id)arg1;
- (CDUnknownBlockType)_responseHandlerForRequest:(id)arg1 thumbnailIndex:(unsigned long long)arg2;
- (void)_prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
@property(readonly) NSColor *backgroundColor;
- (void)didCreateTouchIcon:(id)arg1;
- (id)touchIconRequestForBookmark:(id)arg1 inFolderWithRequest:(id)arg2;
- (id)displayableFolderContentsForRequest:(id)arg1;
- (id)bookmarkUUIDForRequest:(id)arg1;
- (id)defaultFolderIconForRequest:(id)arg1;
- (BOOL)canHandleRequest:(id)arg1;
- (void)removeInfoForFoldersWithUUIDs:(id)arg1;
- (void)removeInfoForFolderWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *allFolderUUIDs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

