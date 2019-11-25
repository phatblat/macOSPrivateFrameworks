//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHInspectorViewController.h>

#import "KHPageCountPickerDelegate.h"

@class KHBookProjectLayoutsDataSource, KHInspectorTileViewController, KHPageCountPickerController, KHProjectSettingsPickerController, NSString;

@interface KHBookSettingsInspectorController : KHInspectorViewController <KHPageCountPickerDelegate>
{
    KHProjectSettingsPickerController *_projectSettingsController;
    KHInspectorTileViewController *_pageCountTileController;
    KHInspectorTileViewController *_densityTileController;
    KHInspectorTileViewController *_settingsTileController;
    KHBookProjectLayoutsDataSource *_dataSource;
    KHPageCountPickerController *_pageCountPicker;
}

@property(retain) KHPageCountPickerController *pageCountPicker; // @synthesize pageCountPicker=_pageCountPicker;
@property __weak KHBookProjectLayoutsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain) KHInspectorTileViewController *settingsTileController; // @synthesize settingsTileController=_settingsTileController;
@property(retain) KHInspectorTileViewController *densityTileController; // @synthesize densityTileController=_densityTileController;
@property(retain) KHInspectorTileViewController *pageCountTileController; // @synthesize pageCountTileController=_pageCountTileController;
@property(retain, nonatomic) KHProjectSettingsPickerController *projectSettingsController; // @synthesize projectSettingsController=_projectSettingsController;
- (void).cxx_destruct;
- (void)pageCountSliderUpdatedToValue:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long pageCount;
- (void)loadView;
- (id)initWithProjectDatasource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

