//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString, _PASLock, _PASNotificationTracker;

@interface _PASAsset2 : NSObject
{
    NSString *_assetTypeIdentifier;
    NSString *_defaultBundlePathBackup;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
    unsigned long long _compatibilityVersion;
}

@property(readonly, nonatomic) unsigned long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
- (void).cxx_destruct;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2;
- (void)invokeWithBundleOverride:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *bundlePath;
- (BOOL)overrideDefaultBundleWithBundleAtPath:(id)arg1;
- (void)_issueUpdateNotificationsWithCallback:(CDUnknownBlockType)arg1;
- (void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2;
- (BOOL)updateAssetMetadataUsingQueryResults:(id)arg1;
- (void)_updateAssetMetadata;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(unsigned long long *)arg2;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(unsigned long long *)arg2;
- (id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(unsigned long long *)arg3;
- (id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(char *)arg3 assetVersion:(unsigned long long *)arg4;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (BOOL)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)registerUpdateHandler:(CDUnknownBlockType)arg1;
- (BOOL)_loadDefaultBundleVersionWithGuardedData:(id)arg1;
@property(readonly, nonatomic) unsigned long long bestAssetVersionObserved;
- (id)_assetDescription;
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) unsigned long long assetVersion;
- (void)downloadMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(BOOL)arg7 purgeObsoleteInstalledAssets:(BOOL)arg8;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6 purgeObsoleteInstalledAssets:(BOOL)arg7;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(BOOL)arg6;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5;

@end

