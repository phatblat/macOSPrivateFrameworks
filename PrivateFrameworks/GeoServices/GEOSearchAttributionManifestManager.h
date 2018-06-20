//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GEOSearchAttributionManifestManager : NSObject
{
    id <GEOSearchAttributionServerProxy> _serverProxy;
}

+ (id)sharedManager;
+ (void)setUseLocalProxy:(BOOL)arg1;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)useProxy:(Class)arg1;
@property(readonly, nonatomic) id <GEOSearchAttributionServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
- (void).cxx_destruct;
- (void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

