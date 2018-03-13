//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GEOActiveTileGroupMigrationTask.h"

@class GEOActiveTileGroup, GEORegionalResourcesVersionMigrator, GEOReportedProgress, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResources, GEOTileGroup, NSArray, NSObject<OS_dispatch_queue>, NSProgress, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>
{
    GEORegionalResourcesVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    GEOResourceLoader *_resourceLoader;
    NSArray *_loadedResources;
    id <NSObject> _transaction;
}

+ (id)_resourcesDirectory:(id)arg1;
+ (id)_resourceLoaderFactoryWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5;
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (void)removeOldData:(id)arg1;
- (void)populateTileGroup:(id)arg1;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (id)_resourcesDirectory;
@property(readonly) NSProgress *progress;
@property(readonly) long long estimatedWeight;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

