//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSProgress, NSString, NSURL, PLDelayedSaveActionsDetail, PLXPCDictionary;

@protocol PLAssetsdLibraryServiceProtocol <NSObject>
- (void)pendingEventsForRequest:(PLXPCDictionary *)arg1 reply:(void (^)(PLXPCDictionary *))arg2;
- (void)publishRemoteChangeEvent:(PLXPCDictionary *)arg1 delayedSaveActionsDetail:(PLDelayedSaveActionsDetail *)arg2 reply:(void (^)(NSError *))arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectURI:(NSURL *)arg1 reply:(void (^)(BOOL, NSError *))arg2;
- (void)updateThumbnailsForPhotos:(NSArray *)arg1 assignNewIndex:(BOOL)arg2 forceRefresh:(BOOL)arg3 reply:(void (^)(void))arg4;
- (void)repairSingletonObjectsWithReply:(void (^)(void))arg1;
- (void)recoverFromCrashIfNeeded;
- (void)importFileSystemAssetsWithReason:(NSString *)arg1 reply:(void (^)(void))arg2;
- (void)getPhotoLibraryStoreXPCListenerEndpointWithReply:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)shutdownPhotoLibraryDatabaseWithReply:(void (^)(NSError *))arg1;
- (NSProgress *)postOpenProgressWithReply:(void (^)(NSError *))arg1;
- (NSProgress *)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)openPhotoLibraryDatabaseWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)createPhotoLibraryDatabaseWithReply:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getCurrentModelVersionWithReply:(void (^)(unsigned long long))arg1;
- (void)launchAssetsd;
@end

