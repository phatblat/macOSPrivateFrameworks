//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class PXTilingController;

@interface PXTilingControllerZoomAnimationCoordinator : PXZoomAnimationCoordinator
{
    PXTilingController *_tilingController;
    id _context;
    id <PXTilingControllerZoomAnimationCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <PXTilingControllerZoomAnimationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) PXTilingController *tilingController; // @synthesize tilingController=_tilingController;
- (void).cxx_destruct;
- (void)_animateTilesPassingTest:(CDUnknownBlockType)arg1 fromEndPointType:(long long)arg2 toEndPointType:(long long)arg3 alpha:(double)arg4 transform:(id)arg5 withOptions:(id)arg6 tileGeometryTransformer:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)_animateTilesPassingTest:(CDUnknownBlockType)arg1 forEndPointType:(long long)arg2 withZoomTransitionContext:(id)arg3 tileGeometryTransformer:(CDUnknownBlockType)arg4;
- (void)moveTile:(id)arg1 toView:(struct NSObject *)arg2 restorationBlock:(out CDUnknownBlockType *)arg3;
- (void)animateContentForEndPointType:(long long)arg1 inView:(struct NSObject *)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (id)initWithTilingController:(id)arg1 context:(id)arg2;
- (id)init;

@end

