//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, VKNavigationPuck, VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKMapModel : NSObject
{
    long long _tileSize;
    double _zoomLevel;
    id <VKMapModelDelegate> _delegate;
    NSMutableSet *_blockingStylesheetObservers;
    double _styleTransitionProgress;
    double _forcedMaxZoomLevel;
    struct LabelSettings *_labelSettings;
    const struct MapEngineSettings *_mapEngineSettings;
    struct AnimationRunner *_animationRunner;
    struct CartographicRenderer *_renderer;
    struct mutex _rendererMutex;
    struct LogicManager *_logicManager;
    float _navigationPuckSize;
    struct FeatureAttributeSet _mapFeatureStyleAttributes;
    shared_ptr_c5d816ee _styleQuery;
    int _metroArea;
    BOOL _forceMapDrawStyleUpdate;
    VKTimedAnimation *_highZoomTransitionAnimation;
    VKNavigationPuck *_navigationPuck;
    shared_ptr_e963992e _taskContext;
    BOOL _localizeLabels;
    unsigned char _labelScaleFactor;
    BOOL _disableTransitLines;
    float _navMapZoomLevelTransitionZ;
    float _standardMapZoomLevelTransitionZ;
    unsigned long long _purpose;
    struct PolylineCoordinate _routeUserOffset;
}

@property(nonatomic) BOOL disableTransitLines; // @synthesize disableTransitLines=_disableTransitLines;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) unsigned char labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) BOOL localizeLabels; // @synthesize localizeLabels=_localizeLabels;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
@property(nonatomic) float standardMapZoomLevelTransitionZ; // @synthesize standardMapZoomLevelTransitionZ=_standardMapZoomLevelTransitionZ;
@property(nonatomic) float navMapZoomLevelTransitionZ; // @synthesize navMapZoomLevelTransitionZ=_navMapZoomLevelTransitionZ;
@property(nonatomic) float navigationPuckSize; // @synthesize navigationPuckSize=_navigationPuckSize;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) float currentRoadSignOffset;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)setShowingOuterHaloOnLabelsDidChange:(BOOL)arg1;
- (void)destroyRenderer;
- (void)layoutWithContext:(const struct LayoutContext *)arg1;
- (id)navigationPuck;
- (double)northYaw;
- (void)updateMapDrawStyleWithContext:(const struct LayoutContext *)arg1;
- (void)_beginMapZoomLevelTransition:(unsigned char)arg1;
- (void)_updateZoomLevel:(const struct LayoutContext *)arg1;
- (long long)tileSize;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 renderer:(struct CartographicRenderer *)arg2 purpose:(unsigned long long)arg3 taskContext:(shared_ptr_e963992e)arg4 logicManager:(struct LogicManager *)arg5 mapEngineSettings:(const struct MapEngineSettings *)arg6 animationRunner:(struct AnimationRunner *)arg7;
- (void)reloadStylesheet;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1 forRealistic:(_Bool)arg2;
- (void)performStylesheetDidReload;
- (void)_setStyleManagerFromMapType:(int)arg1;
- (void)sizeDidChange:(struct CGSize)arg1;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)updateOverlayType;
- (void)setMapType:(int)arg1 animated:(BOOL)arg2;
@property(nonatomic) int mapType;
@property(readonly, nonatomic) BOOL showingTrafficCasing;
- (void)forceMapType:(int)arg1 animated:(BOOL)arg2;
- (void)foreachRenderLayer:(CDUnknownBlockType)arg1;
- (void)foreachActiveRenderLayer:(CDUnknownBlockType)arg1;
- (shared_ptr_c37d6e02)_sceneManager;
- (shared_ptr_a3c46825)_styleManager;

@end

