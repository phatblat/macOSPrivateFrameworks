//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSNumber, NSObject<OS_dispatch_queue>, NSProgress, NSString;

@protocol GEOResourceManifestServerProxy <NSObject>
@property(readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property(nonatomic) __weak id <GEOResourceManifestServerProxyDelegate> delegate;
- (void)getResourceManifestWithHandler:(void (^)(GEOResourceManifestDownload *, NSError *))arg1;
- (oneway void)resetActiveTileGroup;
- (oneway void)setActiveTileGroupIdentifier:(NSNumber *)arg1;
- (unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (NSProgress *)updateProgress;
- (void)deactivateResourceScenario:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)activateResourceScale:(int)arg1;
- (void)performOpportunisticResourceLoading;
- (void)cancelCurrentManifestUpdate;
- (void)forceUpdate:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateIfNecessary:(void (^)(NSError *))arg1;
- (void)setManifestToken:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (GEOResourceManifestConfiguration *)configuration;
- (NSString *)authToken;
- (void)closeConnection;
- (void)openConnection;
- (NSObject<OS_dispatch_queue> *)serverQueue;
- (id)initWithDelegate:(id <GEOResourceManifestServerProxyDelegate>)arg1 configuration:(GEOResourceManifestConfiguration *)arg2;
@end

