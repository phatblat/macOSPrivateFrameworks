//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface VKDebugSettings : NSObject
{
    BOOL _highlightFeaturesOnly;
    BOOL _paintMapTiles;
    BOOL _paintSelectedMapTiles;
    BOOL _paintTiles;
    BOOL _paintRoadBoundaries;
    BOOL _paintRoadTiles;
    BOOL _paintPointTiles;
    BOOL _paintPolygonTiles;
    BOOL _paintVertices;
    BOOL _paintJunctions;
    BOOL _paintCoastlines;
    BOOL _paintBuildingNormals;
    BOOL _paintLoadReason;
    BOOL _showPreliminaryInfo;
    BOOL _disableRoute;
    BOOL _labelHighlighting;
    BOOL _transitHighlighting;
    BOOL _labelCollisionEnabled;
    BOOL _labelFlipAlternatePositionsEnable;
    BOOL _labelTileDecodeEnabled;
    BOOL _disableBackgroundLabelLayout;
    BOOL _labelAllowDefaultStyle;
    BOOL _labelUpdateMapTilesContinuously;
    BOOL _labelAutoOffsetRoadText;
    BOOL _paintRouteDebugMarkers;
    BOOL _dontMatchRouteLine;
    BOOL _dontMapMatchToSnappedRouteLine;
    BOOL _highlightRouteLineSnappingStatus;
    BOOL _dontVerifyRouteToTransitSnapping;
    BOOL _showManeuverPoints;
    BOOL _paintRoadSigns;
    BOOL _paintLabelBounds;
    BOOL _paintLabelRoadFeatures;
    BOOL _paintLabelCollisionLines;
    BOOL _paintLabelCounts;
    BOOL _paintTransitCounts;
    BOOL _hideDirectionalArrows;
    BOOL _hideClientPositionedFeatures;
    BOOL _hideServerPositionedRoadFeatures;
    BOOL _hideServerPositionedTransitFeatures;
    BOOL _keepTooCloseServerPositionedTransitFeatures;
    BOOL _overrideNeworkDefaultsBaseSSLPMSwitch;
    BOOL _labelBaseSSLPMEnabled;
    BOOL _labelHideLineFeatures;
    BOOL _labelHidePointFeatures;
    BOOL _paintTrafficSkeleton;
    BOOL _loadGreenTraffic;
    BOOL _showTrafficCasing;
    BOOL _texturedTrafficCasing;
    BOOL _prioritizeTrafficSkeleton;
    BOOL _paintRoadsStitchedByName;
    BOOL _realisticWireframeEnabled;
    BOOL _altitudePauseLoading;
    BOOL _altitudeFreezeViewNode;
    BOOL _altitudeTexturePaging;
    BOOL _altitudeShowTileBounds;
    BOOL _altitudeHighResSatellite;
    BOOL _altitudeMipmapSatellite;
    BOOL _altitudeMipmapFlyover;
    BOOL _altitudeMipmapObjectTree;
    BOOL _altitudeShowNightLight;
    BOOL _altitudePrintRenderedTilesStat;
    BOOL _altitudeDisableC3mTextureLoading;
    BOOL _altitudeShowTriggerbounds;
    BOOL _disableTransitLineDrawing;
    BOOL _disableTransitLineMerging;
    BOOL _disableTransitLineGroupMerging;
    BOOL _dumpTransitTileContents;
    BOOL _dumpRouteAndPath;
    BOOL _disableIntraLinkTransitLineCrossings;
    BOOL _useMetalRenderer;
    BOOL _showNavCameraDebugConsole;
    BOOL _showNavCameraDebugConsoleAttributes;
    BOOL _showNavCameraDebugLegend;
    float _ribbonCrispness;
    float _altitudeLodScale;
    float _altitudeTileQualityThreshold;
    float _altitudeHideMeshTime;
    float _altitudeFadeSpeed;
    BOOL _altitudeTourSpeedup;
    float _altitudeTourSpeedupFactor;
    BOOL _altitudeProfilingEnabled;
    unsigned int _altitudeProfilingType;
    unsigned int _altitudeProfilingZones;
    NSString *_altitudeTelemetryURL;
    BOOL _isInstalledInLockScreen;
    BOOL _enableLoggingInLockScreen;
    BOOL _useBuildingShadowTexture;
    BOOL _layoutContinuously;
    BOOL _enableSignPostEvents;
    BOOL _useTransactionManager;
    BOOL _debugStyleAnimations;
    BOOL _renderInSeparateThread;
    BOOL _forceHiResBuildings;
    BOOL _readLandmarksFromDisk;
    BOOL _drawPerformanceHUD;
    BOOL _expandedPerformanceHUD;
    BOOL _immediateRasterTextureLoading;
    BOOL _holdOntoStyleAttributes;
    NSMutableArray *_footprintsToSuppress;
    BOOL _suppressFootprints;
    NSMutableDictionary *_customTiles;
    BOOL _drawDebugTransit;
    BOOL _labelTransitLineCollisionEnabled;
    BOOL _labelHighlightingVerboseLoggingEnabled;
    BOOL _shouldUseTestTileLoader;
    BOOL _constantlyChangeTileGroup;
    BOOL _disableRoadSignLimit;
    BOOL _enableShieldsOnRouteLine;
    BOOL _overrideVenueCameraSettings;
    float _venueBoundsPaddingForCamera;
    float _venueZoomOutFalloff;
    BOOL _enableTrafficCameraLabelDebugging;
    BOOL _enableEtaLabelDebugging;
    BOOL _enableRouteShareSectionDebugging;
    BOOL _enableEtaLabelRectDebugging;
    unsigned long long _etaLabelDebugScore;
    unsigned int _etaLabelDebugOrientationMask;
    BOOL _etaLabelsAvoidScreenEdges;
    BOOL _enableRouteIntersectionTesting;
    BOOL _forceEtaLabelPlacement;
    BOOL _traceEtaDebugLog;
    BOOL _trafficCameraLabelSelfCollide;
    BOOL _trafficCameraLabelCollideOutExternal;
    BOOL _trafficCameraLabelCollideWithExternal;
    BOOL _arOverrideDefaults;
    float _arVirtualPlaneHeight;
    float _arDefaultHeight;
    unsigned long long _arSwipeGesture;
    unsigned long long _arPinchGesture;
    BOOL _arRenderAtNativeRate;
    struct unique_ptr<(anonymous namespace)::CustomLandmarksContainer, std::__1::default_delete<(anonymous namespace)::CustomLandmarksContainer>> _customLandmarks;
    BOOL _paintPoiTiles;
    BOOL _paintLandcoverTiles;
    BOOL _paintVenues;
    BOOL _labelCollideContinuously;
    BOOL _useStaticTrafficFeed;
    BOOL _showNavCameraDebugConsoleProperties;
    BOOL _showNavCameraDebugOverlay;
    BOOL _disableStylesheetAnimations;
    BOOL _trackingCameraZoomFurther;
    BOOL _enableARDebugConsole;
    BOOL _enableAROmniTileLoader;
    CDStruct_671c6dd4 _landmark2DStrokeSettings;
    shared_ptr_a3c46825 _debugStyleManager;
}

+ (id)sharedSettings;
@property(nonatomic) BOOL arRenderAtNativeRate; // @synthesize arRenderAtNativeRate=_arRenderAtNativeRate;
@property(nonatomic) unsigned long long arPinchGesture; // @synthesize arPinchGesture=_arPinchGesture;
@property(nonatomic) unsigned long long arSwipeGesture; // @synthesize arSwipeGesture=_arSwipeGesture;
@property(nonatomic) float arDefaultHeight; // @synthesize arDefaultHeight=_arDefaultHeight;
@property(nonatomic) float arVirtualPlaneHeight; // @synthesize arVirtualPlaneHeight=_arVirtualPlaneHeight;
@property(nonatomic) BOOL arOverrideDefaults; // @synthesize arOverrideDefaults=_arOverrideDefaults;
@property(nonatomic) BOOL enableAROmniTileLoader; // @synthesize enableAROmniTileLoader=_enableAROmniTileLoader;
@property(nonatomic) BOOL enableARDebugConsole; // @synthesize enableARDebugConsole=_enableARDebugConsole;
@property(nonatomic) BOOL trafficCameraLabelCollideWithExternal; // @synthesize trafficCameraLabelCollideWithExternal=_trafficCameraLabelCollideWithExternal;
@property(nonatomic) BOOL trafficCameraLabelCollideOutExternal; // @synthesize trafficCameraLabelCollideOutExternal=_trafficCameraLabelCollideOutExternal;
@property(nonatomic) BOOL trafficCameraLabelSelfCollide; // @synthesize trafficCameraLabelSelfCollide=_trafficCameraLabelSelfCollide;
@property(nonatomic) BOOL traceEtaDebugLog; // @synthesize traceEtaDebugLog=_traceEtaDebugLog;
@property(nonatomic) BOOL forceEtaLabelPlacement; // @synthesize forceEtaLabelPlacement=_forceEtaLabelPlacement;
@property(nonatomic) BOOL etaLabelsAvoidScreenEdges; // @synthesize etaLabelsAvoidScreenEdges=_etaLabelsAvoidScreenEdges;
@property(nonatomic) BOOL enableRouteIntersectionTesting; // @synthesize enableRouteIntersectionTesting=_enableRouteIntersectionTesting;
@property(nonatomic) unsigned int etaLabelDebugOrientationMask; // @synthesize etaLabelDebugOrientationMask=_etaLabelDebugOrientationMask;
@property(nonatomic) unsigned long long etaLabelDebugScore; // @synthesize etaLabelDebugScore=_etaLabelDebugScore;
@property(nonatomic) BOOL enableEtaLabelRectDebugging; // @synthesize enableEtaLabelRectDebugging=_enableEtaLabelRectDebugging;
@property(nonatomic) BOOL enableRouteShareSectionDebugging; // @synthesize enableRouteShareSectionDebugging=_enableRouteShareSectionDebugging;
@property(nonatomic) BOOL enableEtaLabelDebugging; // @synthesize enableEtaLabelDebugging=_enableEtaLabelDebugging;
@property(nonatomic) BOOL enableTrafficCameraLabelDebugging; // @synthesize enableTrafficCameraLabelDebugging=_enableTrafficCameraLabelDebugging;
@property(nonatomic) BOOL enableShieldsOnRouteLine; // @synthesize enableShieldsOnRouteLine=_enableShieldsOnRouteLine;
@property(nonatomic) BOOL disableRoadSignLimit; // @synthesize disableRoadSignLimit=_disableRoadSignLimit;
@property(nonatomic) BOOL constantlyChangeTileGroup; // @synthesize constantlyChangeTileGroup=_constantlyChangeTileGroup;
@property(nonatomic) BOOL shouldUseTestTileLoader; // @synthesize shouldUseTestTileLoader=_shouldUseTestTileLoader;
@property(nonatomic) shared_ptr_a3c46825 debugStyleManager; // @synthesize debugStyleManager=_debugStyleManager;
@property(nonatomic) CDStruct_671c6dd4 landmark2DStrokeSettings; // @synthesize landmark2DStrokeSettings=_landmark2DStrokeSettings;
@property(nonatomic) BOOL suppressFootprints; // @synthesize suppressFootprints=_suppressFootprints;
@property(retain, nonatomic) NSMutableArray *footprintsToSuppress; // @synthesize footprintsToSuppress=_footprintsToSuppress;
@property(nonatomic) BOOL labelHighlightingVerboseLoggingEnabled; // @synthesize labelHighlightingVerboseLoggingEnabled=_labelHighlightingVerboseLoggingEnabled;
@property(nonatomic) BOOL labelTransitLineCollisionEnabled; // @synthesize labelTransitLineCollisionEnabled=_labelTransitLineCollisionEnabled;
@property(nonatomic) BOOL drawDebugTransit; // @synthesize drawDebugTransit=_drawDebugTransit;
@property(nonatomic) BOOL holdOntoStyleAttributes; // @synthesize holdOntoStyleAttributes=_holdOntoStyleAttributes;
@property(nonatomic) BOOL trackingCameraZoomFurther; // @synthesize trackingCameraZoomFurther=_trackingCameraZoomFurther;
@property(nonatomic) BOOL immediateRasterTextureLoading; // @synthesize immediateRasterTextureLoading=_immediateRasterTextureLoading;
@property(nonatomic) BOOL expandedPerformanceHUD; // @synthesize expandedPerformanceHUD=_expandedPerformanceHUD;
@property(nonatomic) BOOL drawPerformanceHUD; // @synthesize drawPerformanceHUD=_drawPerformanceHUD;
@property(nonatomic) BOOL readLandmarksFromDisk; // @synthesize readLandmarksFromDisk=_readLandmarksFromDisk;
@property(nonatomic) BOOL forceHiResBuildings; // @synthesize forceHiResBuildings=_forceHiResBuildings;
@property(nonatomic) BOOL renderInSeparateThread; // @synthesize renderInSeparateThread=_renderInSeparateThread;
@property(nonatomic) BOOL disableStylesheetAnimations; // @synthesize disableStylesheetAnimations=_disableStylesheetAnimations;
@property(nonatomic) BOOL debugStyleAnimations; // @synthesize debugStyleAnimations=_debugStyleAnimations;
@property(nonatomic) BOOL useTransactionManager; // @synthesize useTransactionManager=_useTransactionManager;
@property(nonatomic) BOOL enableSignPostEvents; // @synthesize enableSignPostEvents=_enableSignPostEvents;
@property(nonatomic) BOOL layoutContinuously; // @synthesize layoutContinuously=_layoutContinuously;
@property(nonatomic) BOOL useBuildingShadowTexture; // @synthesize useBuildingShadowTexture=_useBuildingShadowTexture;
@property(nonatomic) BOOL enableLoggingInLockScreen; // @synthesize enableLoggingInLockScreen=_enableLoggingInLockScreen;
@property(nonatomic) BOOL isInstalledInLockScreen; // @synthesize isInstalledInLockScreen=_isInstalledInLockScreen;
@property(retain, nonatomic) NSString *altitudeTelemetryURL; // @synthesize altitudeTelemetryURL=_altitudeTelemetryURL;
@property(nonatomic) unsigned int altitudeProfilingZones; // @synthesize altitudeProfilingZones=_altitudeProfilingZones;
@property(nonatomic) unsigned int altitudeProfilingType; // @synthesize altitudeProfilingType=_altitudeProfilingType;
@property(nonatomic) BOOL altitudeProfilingEnabled; // @synthesize altitudeProfilingEnabled=_altitudeProfilingEnabled;
@property(nonatomic) float altitudeTourSpeedupFactor; // @synthesize altitudeTourSpeedupFactor=_altitudeTourSpeedupFactor;
@property(nonatomic) BOOL altitudeTourSpeedup; // @synthesize altitudeTourSpeedup=_altitudeTourSpeedup;
@property(nonatomic) float altitudeFadeSpeed; // @synthesize altitudeFadeSpeed=_altitudeFadeSpeed;
@property(nonatomic) float altitudeHideMeshTime; // @synthesize altitudeHideMeshTime=_altitudeHideMeshTime;
@property(nonatomic) float altitudeTileQualityThreshold; // @synthesize altitudeTileQualityThreshold=_altitudeTileQualityThreshold;
@property(nonatomic) float altitudeLodScale; // @synthesize altitudeLodScale=_altitudeLodScale;
@property(nonatomic) float venueZoomOutFalloff; // @synthesize venueZoomOutFalloff=_venueZoomOutFalloff;
@property(nonatomic) float venueBoundsPaddingForCamera; // @synthesize venueBoundsPaddingForCamera=_venueBoundsPaddingForCamera;
@property(nonatomic) BOOL overrideVenueCameraSettings; // @synthesize overrideVenueCameraSettings=_overrideVenueCameraSettings;
@property(nonatomic) float ribbonCrispness; // @synthesize ribbonCrispness=_ribbonCrispness;
@property(nonatomic) BOOL showNavCameraDebugOverlay; // @synthesize showNavCameraDebugOverlay=_showNavCameraDebugOverlay;
@property(nonatomic) BOOL showNavCameraDebugLegend; // @synthesize showNavCameraDebugLegend=_showNavCameraDebugLegend;
@property(nonatomic) BOOL showNavCameraDebugConsoleProperties; // @synthesize showNavCameraDebugConsoleProperties=_showNavCameraDebugConsoleProperties;
@property(nonatomic) BOOL showNavCameraDebugConsoleAttributes; // @synthesize showNavCameraDebugConsoleAttributes=_showNavCameraDebugConsoleAttributes;
@property(nonatomic) BOOL showNavCameraDebugConsole; // @synthesize showNavCameraDebugConsole=_showNavCameraDebugConsole;
@property(nonatomic) BOOL useMetalRenderer; // @synthesize useMetalRenderer=_useMetalRenderer;
@property(nonatomic) BOOL disableIntraLinkTransitLineCrossings; // @synthesize disableIntraLinkTransitLineCrossings=_disableIntraLinkTransitLineCrossings;
@property(nonatomic) BOOL dumpRouteAndPath; // @synthesize dumpRouteAndPath=_dumpRouteAndPath;
@property(nonatomic) BOOL dumpTransitTileContents; // @synthesize dumpTransitTileContents=_dumpTransitTileContents;
@property(nonatomic) BOOL disableTransitLineGroupMerging; // @synthesize disableTransitLineGroupMerging=_disableTransitLineGroupMerging;
@property(nonatomic) BOOL disableTransitLineMerging; // @synthesize disableTransitLineMerging=_disableTransitLineMerging;
@property(nonatomic) BOOL disableTransitLineDrawing; // @synthesize disableTransitLineDrawing=_disableTransitLineDrawing;
@property(nonatomic) BOOL altitudeHighResSatellite; // @synthesize altitudeHighResSatellite=_altitudeHighResSatellite;
@property(nonatomic) BOOL altitudeShowTriggerBounds; // @synthesize altitudeShowTriggerBounds=_altitudeShowTriggerbounds;
@property(nonatomic) BOOL altitudeDisableC3mTextureLoading; // @synthesize altitudeDisableC3mTextureLoading=_altitudeDisableC3mTextureLoading;
@property(nonatomic) BOOL altitudePrintRenderedTilesStat; // @synthesize altitudePrintRenderedTilesStat=_altitudePrintRenderedTilesStat;
@property(nonatomic) BOOL altitudeShowNightLight; // @synthesize altitudeShowNightLight=_altitudeShowNightLight;
@property(nonatomic) BOOL altitudeMipmapObjectTree; // @synthesize altitudeMipmapObjectTree=_altitudeMipmapObjectTree;
@property(nonatomic) BOOL altitudeMipmapFlyover; // @synthesize altitudeMipmapFlyover=_altitudeMipmapFlyover;
@property(nonatomic) BOOL altitudeMipmapSatellite; // @synthesize altitudeMipmapSatellite=_altitudeMipmapSatellite;
@property(nonatomic) BOOL altitudeShowTileBounds; // @synthesize altitudeShowTileBounds=_altitudeShowTileBounds;
@property(nonatomic) BOOL altitudeTexturePaging; // @synthesize altitudeTexturePaging=_altitudeTexturePaging;
@property(nonatomic) BOOL altitudeFreezeViewNode; // @synthesize altitudeFreezeViewNode=_altitudeFreezeViewNode;
@property(nonatomic) BOOL altitudePauseLoading; // @synthesize altitudePauseLoading=_altitudePauseLoading;
@property(nonatomic) BOOL realisticWireframeEnabled; // @synthesize realisticWireframeEnabled=_realisticWireframeEnabled;
@property(nonatomic) BOOL paintRoadsStitchedByName; // @synthesize paintRoadsStitchedByName=_paintRoadsStitchedByName;
@property(nonatomic) BOOL prioritizeTrafficSkeleton; // @synthesize prioritizeTrafficSkeleton=_prioritizeTrafficSkeleton;
@property(nonatomic) BOOL texturedTrafficCasing; // @synthesize texturedTrafficCasing=_texturedTrafficCasing;
@property(nonatomic) BOOL showTrafficCasing; // @synthesize showTrafficCasing=_showTrafficCasing;
@property(nonatomic) BOOL useStaticTrafficFeed; // @synthesize useStaticTrafficFeed=_useStaticTrafficFeed;
@property(nonatomic) BOOL loadGreenTraffic; // @synthesize loadGreenTraffic=_loadGreenTraffic;
@property(nonatomic) BOOL paintTrafficSkeleton; // @synthesize paintTrafficSkeleton=_paintTrafficSkeleton;
@property(nonatomic) BOOL labelHidePointFeatures; // @synthesize labelHidePointFeatures=_labelHidePointFeatures;
@property(nonatomic) BOOL labelHideLineFeatures; // @synthesize labelHideLineFeatures=_labelHideLineFeatures;
@property(nonatomic) BOOL labelBaseSSLPMEnabled; // @synthesize labelBaseSSLPMEnabled=_labelBaseSSLPMEnabled;
@property(nonatomic) BOOL overrideNeworkDefaultsBaseSSLPMSwitch; // @synthesize overrideNeworkDefaultsBaseSSLPMSwitch=_overrideNeworkDefaultsBaseSSLPMSwitch;
@property(nonatomic) BOOL keepTooCloseServerPositionedTransitFeatures; // @synthesize keepTooCloseServerPositionedTransitFeatures=_keepTooCloseServerPositionedTransitFeatures;
@property(nonatomic) BOOL hideServerPositionedTransitFeatures; // @synthesize hideServerPositionedTransitFeatures=_hideServerPositionedTransitFeatures;
@property(nonatomic) BOOL hideServerPositionedRoadFeatures; // @synthesize hideServerPositionedRoadFeatures=_hideServerPositionedRoadFeatures;
@property(nonatomic) BOOL hideClientPositionedFeatures; // @synthesize hideClientPositionedFeatures=_hideClientPositionedFeatures;
@property(nonatomic) BOOL hideDirectionalArrows; // @synthesize hideDirectionalArrows=_hideDirectionalArrows;
@property(nonatomic) BOOL paintTransitCounts; // @synthesize paintTransitCounts=_paintTransitCounts;
@property(nonatomic) BOOL paintLabelCounts; // @synthesize paintLabelCounts=_paintLabelCounts;
@property(nonatomic) BOOL paintLabelCollisionLines; // @synthesize paintLabelCollisionLines=_paintLabelCollisionLines;
@property(nonatomic) BOOL paintLabelRoadFeatures; // @synthesize paintLabelRoadFeatures=_paintLabelRoadFeatures;
@property(nonatomic) BOOL paintLabelBounds; // @synthesize paintLabelBounds=_paintLabelBounds;
@property(nonatomic) BOOL paintRoadSigns; // @synthesize paintRoadSigns=_paintRoadSigns;
@property(nonatomic) BOOL showManeuverPoints; // @synthesize showManeuverPoints=_showManeuverPoints;
@property(nonatomic) BOOL dontVerifyRouteToTransitSnapping; // @synthesize dontVerifyRouteToTransitSnapping=_dontVerifyRouteToTransitSnapping;
@property(nonatomic) BOOL highlightRouteLineSnappingStatus; // @synthesize highlightRouteLineSnappingStatus=_highlightRouteLineSnappingStatus;
@property(nonatomic) BOOL dontMapMatchToSnappedRouteLine; // @synthesize dontMapMatchToSnappedRouteLine=_dontMapMatchToSnappedRouteLine;
@property(nonatomic) BOOL dontMatchRouteLine; // @synthesize dontMatchRouteLine=_dontMatchRouteLine;
@property(nonatomic) BOOL paintRouteDebugMarkers; // @synthesize paintRouteDebugMarkers=_paintRouteDebugMarkers;
@property(nonatomic) BOOL labelAutoOffsetRoadText; // @synthesize labelAutoOffsetRoadText=_labelAutoOffsetRoadText;
@property(nonatomic) BOOL labelUpdateMapTilesContinuously; // @synthesize labelUpdateMapTilesContinuously=_labelUpdateMapTilesContinuously;
@property(nonatomic) BOOL labelAllowDefaultStyle; // @synthesize labelAllowDefaultStyle=_labelAllowDefaultStyle;
@property(nonatomic) BOOL disableBackgroundLabelLayout; // @synthesize disableBackgroundLabelLayout=_disableBackgroundLabelLayout;
@property(nonatomic) BOOL labelTileDecodeEnabled; // @synthesize labelTileDecodeEnabled=_labelTileDecodeEnabled;
@property(nonatomic) BOOL labelFlipAlternatePositionsEnable; // @synthesize labelFlipAlternatePositionsEnable=_labelFlipAlternatePositionsEnable;
@property(nonatomic) BOOL labelCollideContinuously; // @synthesize labelCollideContinuously=_labelCollideContinuously;
@property(nonatomic) BOOL labelCollisionEnabled; // @synthesize labelCollisionEnabled=_labelCollisionEnabled;
@property(nonatomic) BOOL transitHighlighting; // @synthesize transitHighlighting=_transitHighlighting;
@property(nonatomic) BOOL labelHighlighting; // @synthesize labelHighlighting=_labelHighlighting;
@property(nonatomic) BOOL disableRoute; // @synthesize disableRoute=_disableRoute;
@property(nonatomic) BOOL showPreliminaryInfo; // @synthesize showPreliminaryInfo=_showPreliminaryInfo;
@property(nonatomic) BOOL paintLoadReason; // @synthesize paintLoadReason=_paintLoadReason;
@property(nonatomic) BOOL paintBuildingNormals; // @synthesize paintBuildingNormals=_paintBuildingNormals;
@property(nonatomic) BOOL paintCoastlines; // @synthesize paintCoastlines=_paintCoastlines;
@property(nonatomic) BOOL paintJunctions; // @synthesize paintJunctions=_paintJunctions;
@property(nonatomic) BOOL paintVertices; // @synthesize paintVertices=_paintVertices;
@property(nonatomic) BOOL paintVenues; // @synthesize paintVenues=_paintVenues;
@property(nonatomic) BOOL paintLandcoverTiles; // @synthesize paintLandcoverTiles=_paintLandcoverTiles;
@property(nonatomic) BOOL paintPolygonTiles; // @synthesize paintPolygonTiles=_paintPolygonTiles;
@property(nonatomic) BOOL paintPointTiles; // @synthesize paintPointTiles=_paintPointTiles;
@property(nonatomic) BOOL paintPoiTiles; // @synthesize paintPoiTiles=_paintPoiTiles;
@property(nonatomic) BOOL paintRoadTiles; // @synthesize paintRoadTiles=_paintRoadTiles;
@property(nonatomic) BOOL paintRoadBoundaries; // @synthesize paintRoadBoundaries=_paintRoadBoundaries;
@property(nonatomic) BOOL paintTiles; // @synthesize paintTiles=_paintTiles;
@property(nonatomic) BOOL paintSelectedMapTiles; // @synthesize paintSelectedMapTiles=_paintSelectedMapTiles;
@property(nonatomic) BOOL paintMapTiles; // @synthesize paintMapTiles=_paintMapTiles;
@property(nonatomic) BOOL highlightFeaturesOnly; // @synthesize highlightFeaturesOnly=_highlightFeaturesOnly;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearFootprintsToSuppress;
- (void)addFootprintToSuppress:(id)arg1;
- (const vector_defea32f *)customLandmarkObjectGroupsForKey:(const struct _GEOTileKey *)arg1;
- (void)setCustomLandmarkFromData:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2 texturePath:(id)arg3;
- (void)setCustomLandmarkFromDisk:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2 styleKey:(unsigned int)arg3 styleValue:(int)arg4;
- (void)setCustomLandmarkFromDisk:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2;
- (BOOL)isPerformanceGroupShown:(unsigned int)arg1;
- (void)hidePerformanceGroup:(unsigned int)arg1;
- (void)showPerformanceGroup:(unsigned int)arg1;
- (id)nameForPerformanceGroup:(unsigned int)arg1;
- (unsigned int)numPerformanceGroups;
- (BOOL)overlaysShouldDrawDebug;
- (BOOL)shouldDrawDebug;
- (void)dealloc;
- (id)init;

@end

