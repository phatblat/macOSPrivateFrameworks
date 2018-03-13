//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_PASAssetProtocol.h"

@class ASAsset, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, _PASNotificationTracker;

@interface _PASAsset : NSObject <_PASAssetProtocol>
{
    NSString *_bundleIdentifier;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    struct _opaque_pthread_mutex_t _lock;
    NSString *_defaultBundlePath;
    unsigned long long _defaultBundleVersion;
    unsigned long long _bestAvailableVersion;
    unsigned long long _bestAssetVersionObserved;
    ASAsset *_bestAvailableAsset;
    NSMutableDictionary *_overrides;
    unsigned long long _compatibilityVersion;
}

@property(readonly, nonatomic) unsigned long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
- (void).cxx_destruct;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3;
- (void)invokeWithBundleOverride:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)bundlePath;
- (void)setBundlePath:(id)arg1;
- (void)_issueUpdateNotificationsWithCallback:(CDUnknownBlockType)arg1;
- (void)_updateAssetMetadata;
- (id)pathsForResourcesWithNames:(id)arg1;
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long *)arg2;
- (id)pathForResourceWithNameAndExtension:(struct _PASTuple2 *)arg1;
- (id)pathForResourceWithNameAndExtension:(struct _PASTuple2 *)arg1 assetVersion:(unsigned long long *)arg2;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long *)arg3;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (BOOL)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)registerUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_loadDefaultBundleVersion;
@property(readonly, nonatomic) unsigned long long bestAssetVersionObserved;
- (id)_assetDescription;
@property(readonly, nonatomic) NSString *assetType;
@property(readonly, nonatomic) unsigned long long assetVersion;
- (void)dealloc;
- (id)init;
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(BOOL)arg6;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(BOOL)arg5;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

