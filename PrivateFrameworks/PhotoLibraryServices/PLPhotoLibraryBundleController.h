//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PLBackgroundJobService;

@interface PLPhotoLibraryBundleController : NSObject
{
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_bundlesByPath;
    PLBackgroundJobService *_backgroundJobService;
}

+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1;
+ (id)_realPathForLibraryURL:(id)arg1;
+ (id)sharedBundleController;
@property(retain) PLBackgroundJobService *backgroundJobService; // @synthesize backgroundJobService=_backgroundJobService;
- (void).cxx_destruct;
- (BOOL)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id *)arg3;
- (id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(BOOL)arg2;
- (id)lookupOrCreateBundleForLibraryURL:(id)arg1;
- (void)shutdownBundle:(id)arg1 reason:(id)arg2;
- (void)_unregisterBundle:(id)arg1;
- (void)handleUnknownMergeEvent;
- (id)libraryServicesStatusDescription;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)arg1;
- (id)replaceBundleForRebuildAtLibraryURL:(id)arg1;
- (id)openBundleAtLibraryURL:(id)arg1;
- (id)libraryBundles;
- (id)libraryBundlePaths;
- (id)bundleForLibraryURL:(id)arg1;
- (id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2;
- (id)init;

@end

