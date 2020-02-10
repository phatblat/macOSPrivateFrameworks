//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FlexCloudManager, FlexReachability, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FMSongLibrary : NSObject
{
    BOOL _networkingIsDisabled;
    BOOL _contactedCloud;
    NSMutableArray *_songs;
    NSDictionary *_options;
    NSMutableDictionary *_songsByUID;
    NSMutableSet *_assetsInFlight;
    FlexCloudManager *_cloudManager;
    FlexReachability *_flexReachability;
    long long _networkStatus;
}

@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) FlexReachability *flexReachability; // @synthesize flexReachability=_flexReachability;
@property(retain, nonatomic) FlexCloudManager *cloudManager; // @synthesize cloudManager=_cloudManager;
@property(retain, nonatomic) NSMutableSet *assetsInFlight; // @synthesize assetsInFlight=_assetsInFlight;
@property(retain, nonatomic) NSMutableDictionary *songsByUID; // @synthesize songsByUID=_songsByUID;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableArray *songs; // @synthesize songs=_songs;
@property(nonatomic) BOOL contactedCloud; // @synthesize contactedCloud=_contactedCloud;
@property(readonly, nonatomic) BOOL networkingIsDisabled; // @synthesize networkingIsDisabled=_networkingIsDisabled;
- (void).cxx_destruct;
- (BOOL)supportForCloud;
- (void)purgeAllLocalCachedAssetsWithIDs:(id)arg1;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1 withOptions:(id)arg2;
- (void)requestDownloadOfAllAssetsWithIDs:(id)arg1;
- (void)_updateFromCloud;
- (void)_notifySongDownloadInProgressChanged:(BOOL)arg1;
- (void)_notifySongsChanged:(id)arg1;
- (void)_createCloudManager;
- (void)networkStatusChanged:(id)arg1;
- (void)_setupReachability;
- (void)_downloadProgressChanged:(id)arg1;
- (void)unregisterSongWithID:(id)arg1;
- (id)_registerSongs:(id)arg1;
- (id)registerSongBundleAtPath:(id)arg1;
- (void)_loadCachedSongs;
- (void)_loadBundledSongs;
- (id)fetchSongsWithOptions:(id)arg1;
- (id)fetchSongWithUID:(id)arg1;
- (void)cancelDownloadOfAllAssets;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;

@end
