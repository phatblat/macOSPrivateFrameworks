//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXPlacesMapPipelineComponentProvider.h"

@class NSString, PXPlacesImageCache;

@interface PXPlacesMapPipeline : NSObject <PXPlacesMapPipelineComponentProvider>
{
    id <PXPlacesMapLayout> _layout;
    id <PXPlacesMapUpdatePlan> _updatePlan;
    id <PXPlacesMapRenderer> _renderer;
    id <PXPlacesMapSelectionHandler> _selectionHandler;
    PXPlacesImageCache *_imageCache;
}

@property(retain) PXPlacesImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) id <PXPlacesMapSelectionHandler> selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(readonly) id <PXPlacesMapRenderer> renderer; // @synthesize renderer=_renderer;
@property(readonly) id <PXPlacesMapUpdatePlan> updatePlan; // @synthesize updatePlan=_updatePlan;
@property(readonly) id <PXPlacesMapLayout> layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)cancel;
- (id)executeRemoval;
- (id)executeWithUpdatedViewPort:(id)arg1 andDataSourceChange:(id)arg2;
@property(readonly, nonatomic) id <PXPlacesGeotaggedItemDataSource> dataSource;
- (id)initWithLayout:(id)arg1 updatePlan:(id)arg2 renderer:(id)arg3 selectionHandler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

