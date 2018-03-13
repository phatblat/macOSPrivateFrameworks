//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface MSPMapsPaths : NSObject
{
    NSURL *_libraryURL;
    CDUnknownBlockType _invalidationHandler;
    NSString *_fuzzyLocationStoragePath;
    NSString *_mapsDirectory;
    NSString *_cacheDirectory;
    NSString *_bookmarksSettingsPath;
    NSString *_geoBookmarksSettingsPath;
    NSString *_directionsSettingsPath;
    NSString *_historySettingsPath;
    NSString *_geoHistorySettingsPath;
    NSString *_failedSearchesSettingsPath;
    NSString *_failedGeoSearchesSettingsPath;
    NSString *_failedDirectionsSettingsPath;
    NSString *_failedGeoDirectionsSettingsPath;
    NSString *_transitAppRankerPath;
    NSString *_directionsCachePath;
    NSString *_pinsSettingsPath;
    NSString *_reportAProblemDirectionsRecordingsPath;
    NSString *_reportAProblemSearchRecordingsPath;
    NSString *_reportAProblemNotificationsPath;
    NSString *_favoritesSyncedMarkerFile;
    NSString *_historySyncedMarkerFile;
    NSString *_nanoHistorySettingsPath;
}

+ (id)historySyncedMarkerFile;
+ (id)favoritesSyncedMarkerFile;
+ (id)reportAProblemNotificationsPath;
+ (id)reportAProblemSearchRecordingsPath;
+ (id)reportAProblemDirectionsRecordingsPath;
+ (id)pinsSettingsPath;
+ (id)directionsCachePath;
+ (id)transitAppRankerPath;
+ (id)failedGeoDirectionsSettingsPath;
+ (id)failedDirectionsSettingsPath;
+ (id)failedGeoSearchesSettingsPath;
+ (id)failedSearchesSettingsPath;
+ (id)geoHistorySettingsPath;
+ (id)historySettingsPath;
+ (id)directionsSettingsPath;
+ (id)geoBookmarksSettingsPath;
+ (id)bookmarksSettingsPath;
+ (id)cacheDirectory;
+ (id)mapsDirectory;
+ (id)pathsAtLocation:(long long)arg1;
+ (id)currentMapsApplicationContainerURL;
+ (id)mapsApplicationContainerPaths;
+ (id)mapsApplicationContainerPathsWithInvalidationHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *nanoHistorySettingsPath; // @synthesize nanoHistorySettingsPath=_nanoHistorySettingsPath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *fuzzyLocationStoragePath;
- (BOOL)deleteHistorySyncedMarkerFile;
- (BOOL)shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;
- (BOOL)deleteFavoritesSyncedMarkerFile;
- (BOOL)shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
- (BOOL)_deleteSyncedFileAtPath:(id)arg1;
- (BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg1;
@property(readonly, nonatomic) NSString *historySyncedMarkerFile; // @synthesize historySyncedMarkerFile=_historySyncedMarkerFile;
@property(readonly, nonatomic) NSString *favoritesSyncedMarkerFile; // @synthesize favoritesSyncedMarkerFile=_favoritesSyncedMarkerFile;
@property(readonly, nonatomic) NSString *reportAProblemNotificationsPath; // @synthesize reportAProblemNotificationsPath=_reportAProblemNotificationsPath;
@property(readonly, nonatomic) NSString *reportAProblemSearchRecordingsPath; // @synthesize reportAProblemSearchRecordingsPath=_reportAProblemSearchRecordingsPath;
@property(readonly, nonatomic) NSString *reportAProblemDirectionsRecordingsPath; // @synthesize reportAProblemDirectionsRecordingsPath=_reportAProblemDirectionsRecordingsPath;
@property(readonly, nonatomic) NSString *pinsSettingsPath; // @synthesize pinsSettingsPath=_pinsSettingsPath;
@property(readonly, nonatomic) NSString *directionsCachePath; // @synthesize directionsCachePath=_directionsCachePath;
@property(readonly, nonatomic) NSString *transitAppRankerPath; // @synthesize transitAppRankerPath=_transitAppRankerPath;
@property(readonly, nonatomic) NSString *failedGeoDirectionsSettingsPath; // @synthesize failedGeoDirectionsSettingsPath=_failedGeoDirectionsSettingsPath;
@property(readonly, nonatomic) NSString *failedDirectionsSettingsPath; // @synthesize failedDirectionsSettingsPath=_failedDirectionsSettingsPath;
@property(readonly, nonatomic) NSString *failedGeoSearchesSettingsPath; // @synthesize failedGeoSearchesSettingsPath=_failedGeoSearchesSettingsPath;
@property(readonly, nonatomic) NSString *failedSearchesSettingsPath; // @synthesize failedSearchesSettingsPath=_failedSearchesSettingsPath;
@property(readonly, nonatomic) NSString *geoHistorySettingsPath; // @synthesize geoHistorySettingsPath=_geoHistorySettingsPath;
@property(readonly, nonatomic) NSString *historySettingsPath; // @synthesize historySettingsPath=_historySettingsPath;
@property(readonly, nonatomic) NSString *directionsSettingsPath; // @synthesize directionsSettingsPath=_directionsSettingsPath;
@property(readonly, nonatomic) NSString *geoBookmarksSettingsPath; // @synthesize geoBookmarksSettingsPath=_geoBookmarksSettingsPath;
@property(readonly, nonatomic) NSString *bookmarksSettingsPath; // @synthesize bookmarksSettingsPath=_bookmarksSettingsPath;
@property(readonly, nonatomic) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(readonly, nonatomic) NSString *mapsDirectory; // @synthesize mapsDirectory=_mapsDirectory;
@property(readonly, nonatomic) NSString *homeDirectory;
- (void)_invalidate;
- (id)initWithLibraryDirectoryURL:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end

