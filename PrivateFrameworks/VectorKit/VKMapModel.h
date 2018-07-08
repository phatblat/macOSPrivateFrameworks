//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKModelObject.h>

#import "GEOExperimentConfigurationObserver.h"
#import "GEOResourceManifestTileGroupObserver.h"
#import "VKPolylineGroupOverlayObserver.h"
#import "VKPolylineOverlayRouteRibbonObserver.h"
#import "VKTileProviderClient.h"

@class GEOResourceManifestConfiguration, NSArray, NSHashTable, NSLocale, NSMapTable, NSMutableSet, NSSet, NSString, VKNavigationPuck, VKPolylineOverlay, VKRasterOverlayTileSource, VKSceneConfiguration, VKTileProvider, VKTimedAnimation, VKTrafficTileSource;

__attribute__((visibility("hidden")))
@interface VKMapModel : VKModelObject <GEOResourceManifestTileGroupObserver, VKPolylineOverlayRouteRibbonObserver, GEOExperimentConfigurationObserver, VKTileProviderClient, VKPolylineGroupOverlayObserver>
{
    unsigned long long _mapPurpose;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    long long _tileSize;
    VKTileProvider *_tileProvider;
    VKTileProvider *_buildingTileProvider;
    VKTileProvider *_additionalManifestTileProvider;
    VKTileProvider *_rasterOverlayProvider[2];
    char _activeMapLayers[33];
    VKTrafficTileSource *_trafficSource;
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    long long _mapMode;
    long long _desiredMapMode;
    BOOL _transitioningToNav;
    BOOL _isTransitioningToTransit;
    VKRasterOverlayTileSource *_rasterOverlayTileSource[2];
    NSMapTable *_tileSources;
    shared_ptr_a3c46825 _activeStyleManager;
    shared_ptr_a3c46825 _defaultStyleManager;
    shared_ptr_a3c46825 _hybridStyleManager;
    shared_ptr_a3c46825 _satelliteStyleManager;
    shared_ptr_c37d6e02 _sceneManager;
    VKSceneConfiguration *_sceneConfiguration;
    double _zoomLevel;
    long long _mapType;
    id <VKMapModelDelegate> _delegate;
    id <GEORoutePreloadSession> _routePreloadSession;
    BOOL _showsBuildings;
    BOOL _showsVenues;
    BOOL _fullyDrawn;
    BOOL _shouldNotifyFullyDrawn;
    BOOL _hasFailedTile;
    BOOL _trafficEnabled;
    BOOL _trafficIncidentsEnabled;
    BOOL _shouldRasterize;
    long long _loadingCount;
    double _contentScale;
    unsigned char _targetDisplay;
    struct VehicleState _vehicleState;
    unsigned char _emphasis;
    unsigned char _applicationUILayout;
    double _lodBias;
    BOOL _disableRoads;
    BOOL _disableLabels;
    BOOL _disablePolygons;
    BOOL _disableBuildingFootprints;
    BOOL _disableRasters;
    BOOL _disableGrid;
    Matrix_5173352a _clearColor;
    BOOL _limitingNavCameraHeight;
    NSMutableSet *_blockingStylesheetObservers;
    double _styleTransitionProgress;
    NSHashTable *_externalAnchors;
    double _forcedMaxZoomLevel;
    BOOL _disableTransitLines;
    VKTimedAnimation *_modeTransitionAnimation;
    char _disableRoadClass[9];
    struct CartographicRenderer *_renderer;
    struct mutex _rendererMutex;
    struct LogicManager *_logicManager;
    struct unique_ptr<md::TrafficSharedResources, std::__1::default_delete<md::TrafficSharedResources>> _trafficSharedResources;
    shared_ptr_887a193f _dataOverrideManager;
    float _navigationPuckSize;
    struct ClearItem _clearItem;
    struct FeatureAttributeSet _mapFeatureStyleAttributes;
    shared_ptr_c5d816ee _styleQuery;
    int _metroArea;
    BOOL _forceMapDrawStyleUpdate;
    NSMutableSet *_polylineOverlays;
    VKPolylineOverlay *_selectedPolyline;
    VKTimedAnimation *_highZoomTransitionAnimation;
    VKNavigationPuck *_navigationPuck;
    struct set<VKPolylineGroupOverlay *, std::__1::less<VKPolylineGroupOverlay *>, std::__1::allocator<VKPolylineGroupOverlay *>> _observedOverlays;
    struct set<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>, std::__1::less<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>, std::__1::allocator<geo::_retain_ptr<VKOverlay *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>>> _overlays;
    unsigned char _mapZoomLevel;
    BOOL _isEmphasisSet;
    shared_ptr_e963992e _taskContext;
    BOOL _showsPointsOfInterest;
    BOOL _localizeLabels;
    unsigned char _labelScaleFactor;
    float _navMapZoomLevelTransitionZ;
    float _standardMapZoomLevelTransitionZ;
    long long _shieldSize;
    long long _navigationShieldSize;
    long long _shieldIdiom;
    struct PolylineCoordinate _routeUserOffset;
    NSSet *_persistentOverlays;
}

+ (unsigned long long)numberOfRoadClasses;
+ (const char *)nameForRoadClass:(int)arg1;
@property(readonly, nonatomic) NSSet *persistentOverlays; // @synthesize persistentOverlays=_persistentOverlays;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) unsigned char labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property(nonatomic) BOOL localizeLabels; // @synthesize localizeLabels=_localizeLabels;
@property(nonatomic) float standardMapZoomLevelTransitionZ; // @synthesize standardMapZoomLevelTransitionZ=_standardMapZoomLevelTransitionZ;
@property(nonatomic) float navMapZoomLevelTransitionZ; // @synthesize navMapZoomLevelTransitionZ=_navMapZoomLevelTransitionZ;
@property(nonatomic) BOOL showsPointsOfInterest; // @synthesize showsPointsOfInterest=_showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom; // @synthesize shieldIdiom=_shieldIdiom;
@property(nonatomic) long long navigationShieldSize; // @synthesize navigationShieldSize=_navigationShieldSize;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(nonatomic) BOOL disableTransitLines; // @synthesize disableTransitLines=_disableTransitLines;
@property(nonatomic) BOOL limitingNavCameraHeight; // @synthesize limitingNavCameraHeight=_limitingNavCameraHeight;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_mapPurpose;
@property(readonly, nonatomic) BOOL shouldRasterize; // @synthesize shouldRasterize=_shouldRasterize;
@property(nonatomic) float navigationPuckSize; // @synthesize navigationPuckSize=_navigationPuckSize;
@property(readonly, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration; // @synthesize additionalManifestConfiguration=_additionalManifestConfiguration;
@property(nonatomic) BOOL showsVenues; // @synthesize showsVenues=_showsVenues;
@property(nonatomic) BOOL showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic, getter=isTrafficIncidentsEnabled) BOOL trafficIncidentsEnabled; // @synthesize trafficIncidentsEnabled=_trafficIncidentsEnabled;
@property(nonatomic, getter=isTrafficEnabled) BOOL trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(nonatomic) shared_ptr_c37d6e02 sceneManager; // @synthesize sceneManager=_sceneManager;
@property(nonatomic) shared_ptr_a3c46825 styleManager; // @synthesize styleManager=_activeStyleManager;
@property(nonatomic) id <VKMapModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentMapMode; // @synthesize currentMapMode=_mapMode;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) Matrix_5173352a clearColor; // @synthesize clearColor=_clearColor;
@property(nonatomic) BOOL disableGrid; // @synthesize disableGrid=_disableGrid;
@property(nonatomic) BOOL disableRasters; // @synthesize disableRasters=_disableRasters;
@property(nonatomic) BOOL disableBuildingFootprints; // @synthesize disableBuildingFootprints=_disableBuildingFootprints;
@property(nonatomic) BOOL disablePolygons; // @synthesize disablePolygons=_disablePolygons;
@property(nonatomic) BOOL disableLabels; // @synthesize disableLabels=_disableLabels;
@property(nonatomic) BOOL disableRoads; // @synthesize disableRoads=_disableRoads;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)tileSource:(id)arg1 overrideForMaximumZoomLevel:(long long)arg2;
- (void)populateDebugNode:(shared_ptr_eafb90f9)arg1 debugTileProvider:(_Bool)arg2;
@property(readonly, nonatomic) float currentRoadSignOffset;
@property(readonly, nonatomic) VKSceneConfiguration *sceneConfiguration;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (shared_ptr_430519ce)buildingMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (void)setApplicationState:(unsigned char)arg1;
- (void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)resetTileContainers;
- (id)debugLabelString:(BOOL)arg1;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (id)externalAnchors;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setRouteContext:(id)arg1;
- (void)setNavCameraIsDetached:(BOOL)arg1;
- (void)didLayoutLabels;
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg1;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg1;
- (id)labelMapTileForTile:(id)arg1 layer:(unsigned char)arg2;
- (void)_updateOverlayTileSource;
- (id)roadTileForTile:(id)arg1;
- (void)setShowingOuterHaloOnLabelsDidChange:(BOOL)arg1;
- (BOOL)isInTransitMode;
- (BOOL)isInNavigationMode;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *rasterOverlays;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)_updateRasterOverlayZoomOverride;
- (void)_updateTileExclusionAreas;
- (id)_rasterOverlayTileSourceForLevel:(unsigned long long)arg1;
- (struct COverlayLayer *)_rasterOverlayForLevel:(unsigned long long)arg1;
- (id)boundsForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)debugHighlightFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (struct LabelSettings *)labelSettings;
@property(readonly, nonatomic) BOOL isFullyDrawn;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)willStartLoadingTiles;
- (void)buildingsDidBecome3D:(_Bool)arg1;
- (void)reserveStencilRangesForScene:(id)arg1 context:(struct LayoutContext *)arg2 renderQueue:(RenderQueue_70f64fd3 *)arg3;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)destroyRendererStopObserving;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2 renderQueue:(RenderQueue_70f64fd3 *)arg3;
- (id)navigationPuck;
- (double)northYawAtZoom:(int)arg1;
- (void)updateMapDrawStyleWithContext:(struct LayoutContext *)arg1;
- (void)layoutScene:(id)arg1 withContext:(struct LayoutContext *)arg2;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (void)_transitionFromMode:(long long)arg1 toMode:(long long)arg2 animated:(BOOL)arg3;
- (void)_beginMapZoomLevelTransition:(unsigned char)arg1;
- (void)_updateZoomLevel:(struct LayoutContext *)arg1;
- (long long)_maximumZoomLevelInView:(id)arg1 ignoreZoomOverride:(BOOL)arg2;
- (long long)maximumZoomLevelInView:(id)arg1;
- (long long)maximumZoomLevelInViewWithoutZoomOverride:(id)arg1;
- (long long)minimumZoomLevelInView:(id)arg1;
- (long long)tileSize;
- (void)_forceLayout;
- (void)_localeChanged:(id)arg1;
- (void)shouldFlushCaches:(id)arg1;
- (void)cancelTileRequests;
- (void)flushCaches:(BOOL)arg1;
- (void)clearScene;
- (BOOL)isShowingNoDataPlaceholders;
- (id)tileStatistics;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 renderer:(struct CartographicRenderer *)arg2 purpose:(unsigned long long)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5 taskContext:(shared_ptr_e963992e)arg6 logicManager:(struct LogicManager *)arg7;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)createTrafficTileSourceIfNecessary:(id)arg1;
@property(nonatomic) unsigned char applicationUILayout;
@property(nonatomic) unsigned char emphasis;
@property(nonatomic) struct VehicleState vehicleState;
@property(nonatomic) unsigned char targetDisplay;
@property(nonatomic) double lodBias;
- (void)reloadStylesheet;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1 forRealistic:(_Bool)arg2;
- (void)performStylesheetDidReload;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetDidChange;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(struct DisplayStyle)arg1;
- (void)_setStyleManagerFromMapType:(long long)arg1;
- (void)_setInitialClientStyleAttributesForDefaultStyleManager;
- (void)sizeDidChange:(struct CGSize)arg1;
- (float)_tileSelectionScaleForContext:(struct LayoutContext *)arg1;
- (void)_mapConfigurationDidChange;
- (void)_updateRegularTileProviderMode;
- (void)didEndTransitionToTransit;
- (void)didBeginTransitionToTransit;
- (void)didEndNavigation;
- (void)didBeginTransitionToNavigation;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(struct DisplayStyle)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle)arg1 toStyle:(struct DisplayStyle)arg2;
- (void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2;
- (void)endStyleAnimationGroup;
- (void)beginStyleAnimationGroup;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle)arg2 setupHandler:(CDUnknownBlockType)arg3;
- (void)finishStyleBlend;
- (struct DisplayStyle)sourceMapDisplayStyle;
- (_Bool)supportsMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)updateOverlayType;
- (void)setMapType:(long long)arg1 animated:(BOOL)arg2;
- (void)_transitFadeOutCompletionCallback;
@property(readonly, nonatomic) BOOL showingTrafficCasing;
- (void)activateLogic;
- (void)forceMapType:(long long)arg1 animated:(BOOL)arg2;
- (id)createSourceForLayer:(unsigned char)arg1 useAdditionalManifest:(BOOL)arg2;
- (void)configureTileSources;
- (id)tileProviderForMapLayer:(unsigned char)arg1;
- (void)clearTileSources;
- (id)tileSetForMapLayer:(unsigned char)arg1 tileGroup:(id)arg2;
- (id)createSourceForLayer:(unsigned char)arg1 tileSet:(id)arg2 useAdditionalManifest:(BOOL)arg3;
- (_Bool)canPitch;
- (int)tileStyleForMapLayer:(unsigned char)arg1;
- (_Bool)mapTypeUsesStandardTiles;
- (void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2;
@property(readonly, nonatomic) shared_ptr_f9615488 terrainHeightCache;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2;
@property(readonly, nonatomic) VKTileProvider *tileProvider;
- (void)foreachActiveLayer:(CDUnknownBlockType)arg1;
- (void)foreachRenderLayer:(CDUnknownBlockType)arg1;
- (void)foreachActiveRenderLayer:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long neighborMode;
@property(readonly, nonatomic) const struct TrafficSharedResources *trafficResources;
@property(nonatomic) BOOL shouldLoadFallbackTiles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

