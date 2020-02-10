//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXPhotosDataSourceProvider.h"

@class NSString, PHPhotoLibrary, PXAssetsDataSourceManager;

@interface PXCuratedLibraryZoomLevelDataConfiguration : NSObject <PXPhotosDataSourceProvider>
{
    PXAssetsDataSourceManager *_assetsDataSourceManager;
    long long _zoomLevel;
    PHPhotoLibrary *_photoLibrary;
}

@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (void).cxx_destruct;
- (id)dataSourceManagerCreateInitialPhotosDataSource:(id)arg1;
@property(readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager;
- (id)initWithZoomLevel:(long long)arg1;
- (id)initWithZoomLevel:(long long)arg1 assetsDataSourceManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
