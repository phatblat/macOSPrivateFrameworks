//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob
{
    BOOL _isNewAlbum;
    NSString *_publishAlbumCloudGUID;
    NSArray *_originalAssetUUIDs;
    NSArray *_stillImageOnlyAssetUUIDs;
    NSDictionary *_customExportsInfo;
    NSDictionary *_trimmedVideoPathInfo;
    NSString *_batchCommentText;
}

+ (id)videoComplementURLForSharingFromAsset:(id)arg1;
+ (void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(BOOL)arg6 batchCommentText:(id)arg7;
@property(retain, nonatomic) NSString *batchCommentText; // @synthesize batchCommentText=_batchCommentText;
@property(nonatomic) BOOL isNewAlbum; // @synthesize isNewAlbum=_isNewAlbum;
@property(retain, nonatomic) NSDictionary *trimmedVideoPathInfo; // @synthesize trimmedVideoPathInfo=_trimmedVideoPathInfo;
@property(retain, nonatomic) NSDictionary *customExportsInfo; // @synthesize customExportsInfo=_customExportsInfo;
@property(retain, nonatomic) NSArray *stillImageOnlyAssetUUIDs; // @synthesize stillImageOnlyAssetUUIDs=_stillImageOnlyAssetUUIDs;
@property(retain, nonatomic) NSArray *originalAssetUUIDs; // @synthesize originalAssetUUIDs=_originalAssetUUIDs;
@property(retain, nonatomic) NSString *publishAlbumCloudGUID; // @synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID;
- (void).cxx_destruct;
- (void)retrieveURLsFromAsset:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id *)arg3 videoComplementURL:(id *)arg4;
- (void)executeDaemonOperation;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end
