//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import "PXAssetsDataSourceManagerObserver.h"

@class NSObject<OS_dispatch_queue>, NSString, PXAssetsDataSource, PXAssetsDataSourceManager, PXCuratedLibraryInlineHeadersDataSource, PXUpdater;

@interface PXCuratedLibraryInlineHeadersDataSourceManager : PXSectionedDataSourceManager <PXAssetsDataSourceManagerObserver>
{
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    PXAssetsDataSource *_previousAssetsDataSource;
    CDStruct_183601bc *_sectionInfosByLevel[2];
    long long _sectionsCountByLevel[2];
    long long _sectionsCapacityByLevel[2];
    BOOL _startedPreparingInitialMetadata;
    BOOL _finishedPreparingInitialMetadata;
    NSObject<OS_dispatch_queue> *_prepareQueue;
    PXCuratedLibraryInlineHeadersDataSource *_monthsDataSource;
    PXCuratedLibraryInlineHeadersDataSource *_yearsDataSource;
    PXUpdater *_updater;
}

@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXCuratedLibraryInlineHeadersDataSource *yearsDataSource; // @synthesize yearsDataSource=_yearsDataSource;
@property(readonly, nonatomic) PXCuratedLibraryInlineHeadersDataSource *monthsDataSource; // @synthesize monthsDataSource=_monthsDataSource;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)setNeedsUpdate;
- (void)didPerformChanges;
- (void)_resizeStorageIfNeededForNumberOfSections:(long long)arg1 level:(unsigned long long)arg2;
- (CDStruct_68723fc0 *)_addSectionInfoForLevel:(unsigned long long)arg1;
- (void)_resetSectionInfos;
- (id)_createDataSourceForLevel:(unsigned long long)arg1;
- (void)_updateLevel:(unsigned long long)arg1 withDataSourceBeforeChanges:(id)arg2 afterChanges:(id)arg3 changeDetails:(id)arg4;
- (void)_didFinishPreparingInitialMetadata;
- (void)_prepareQueue_prepareInitialMetadataWithDataSource:(id)arg1;
- (void)_prepareInitialMetadataWithDataSource:(id)arg1;
- (void)_updateDataSource;
- (void)_invalidateDataSource;
- (id)dataSourceForLevel:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAssetsDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
