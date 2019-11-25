//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PLLibraryServicesManager;

@interface PLDelayedSaveActionsProcessor : NSObject
{
    PLLibraryServicesManager *_libraryServicesManager;
}

- (void).cxx_destruct;
- (void)_processDelayedAssetsForAnalysis:(id)arg1 photoLibrary:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForFileSystemPersistency:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)_processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)processDelayedSaveActionsDetail:(id)arg1 withPhotoLibrary:(id)arg2 transaction:(id)arg3;
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)arg1;
- (void)processDelayedDeletionsFromChangeHubEvent:(id)arg1 library:(id)arg2 transaction:(id)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;

@end

