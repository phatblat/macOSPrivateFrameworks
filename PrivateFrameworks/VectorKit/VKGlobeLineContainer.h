//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VKPolylineGroupOverlayObserver.h"
#import "VKPolylineObserver.h"

@class NSMutableArray, NSMutableSet, NSString, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKGlobeLineContainer : NSObject <VKPolylineGroupOverlayObserver, VKPolylineObserver>
{
    id <VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
    id <VKGlobeLineContainerDelegate> _delegate;
    NSMutableArray *_overlays;
    // Error parsing type: ^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}{shared_ptr<altitude::AnchorManager>=^{AnchorManager}^{__shared_weak_count}}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}}, name: _globeView
    struct map<VKPolylineOverlay *, std::__1::weak_ptr<altitude::RouteLineData>, std::__1::less<VKPolylineOverlay *>, std::__1::allocator<std::__1::pair<VKPolylineOverlay *const, std::__1::weak_ptr<altitude::RouteLineData>>>> _polylinesToRoutes;
    VKPolylineOverlay *_selectedPolyline;
    NSMutableSet *_persistentOverlays;
    struct VKGlobeRouteSplit *_routeSplit;
}

@property(nonatomic) id <VKGlobeLineContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;
- (void)setNeedsLayoutForPolyline:(id)arg1;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)update;
- (void)_recreateLinesIfNeeded;
- (void)_updateRouteSplit;
@property(retain, nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)setSelected:(id)arg1 selected:(BOOL)arg2;
- (void)clearLineSelection;
- (void)removeLine:(id)arg1;
- (void)addLine:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
-     // Error parsing type: @40@0:8^{GlobeView=^^?^{GeoServicesLoader}^{ManifestManager}^{TriggerManager}{shared_ptr<altitude::AnchorManager>=^{AnchorManager}^{__shared_weak_count}}^{DtmCacheNode}^{DtmRequestManager}^{FreezeViewNode}{Projection={Perspective=dddd}{Ortho=dddddd}BB}{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}B{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}^{SimpleTileKey}{__compressed_pair<altitude::SimpleTileKey *, std::__1::allocator<altitude::SimpleTileKey> >=^{SimpleTileKey}}}BII^{VKClassicGlobeCanvas}BB{AnimationManager={AnimationReferenceTimer=ddd}{unique_ptr<altitude::AnimationTimer, std::__1::default_delete<altitude::AnimationTimer> >={__compressed_pair<altitude::AnimationTimer *, std::__1::default_delete<altitude::AnimationTimer> >=^{AnimationTimer}}}d{vector<altitude::AnimationObjectHolder, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}^{AnimationObjectHolder}{__compressed_pair<altitude::AnimationObjectHolder *, std::__1::allocator<altitude::AnimationObjectHolder> >=^{AnimationObjectHolder}}}}{Timer=d}dBddd{CameraFrame<geo::Radians, double>={Coordinate3D<Radians, double>={Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<MeterUnitDescription, double>=d}}{Unit<MeterUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}{Unit<RadianUnitDescription, double>=d}}^{C3mmRequestManager}^{RenderableGroup}IdBB^{LabelDataManagerPrivate}BBBB^{RouteLineManager}^{GlobeCleanupLoader}^{CompleteGlobeTileSetCullingGraph}^{CompleteGlobeTileSetLoader}^{TileSetNode}^{GlobeTileRenderManager}^{CullingNode}^{EarthAdjustedViewNode}^{UserViewNode}^{View}^{BasicViewNode}^{GlobeMainViewNode}^{C3bRequestManager}fB{shared_ptr<bool>=^B^{__shared_weak_count}}^{HeightRequestManager}{map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> >, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >={__tree<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true>, std::__1::allocator<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<gm::Matrix<int, 2, 1>, std::__1::__value_type<gm::Matrix<int, 2, 1>, std::__1::pair<bool, geo::Coordinate3D<Radians, double> > >, altitude::GlobeView::LessVector2i, true> >=Q}}}{Mutex=^v}{shared_ptr<altitude::Stylesheet>=^{Stylesheet}^{__shared_weak_count}}^{FlyoverTour}B{Viewport=iiii}B{set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >={__tree<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<altitude::ManifestListener *, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<altitude::ManifestListener *> >=Q}}}^{TileManager}^{ObjectTreeLoader}^{QuickSurfaceManager}^{IntersectorHeight}{shared_ptr<karo::SharedItemManager<altitude::Map, altitude::MapRequestId> >=^{SharedItemManager<altitude::Map, altitude::MapRequestId>}^{__shared_weak_count}}^{BundleLoader}^{ProtocolLoader}^{GeoResourceManager}^{GeoResourceLoader}^{ViewNode}^{ViewportNode}^{View}^{Viewport}{shared_ptr<ggl::RenderState>=^{RenderState}^{__shared_weak_count}}I^{Statistics}{atomic<bool>=AB}^{TexturePager}^{IOSurfacePool}^{RealisticRenderer}{DclpUnique<ggl::Texture2D, altitude::util::DclpDefaultDelete<ggl::Texture2D> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<ggl::Texture2D *>=A^{Texture2D}}{function<ggl::Texture2D *()>={type=[32C]}^{__base<ggl::Texture2D *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}{DclpUnique<altitude::TextureMap, altitude::util::DclpDefaultDelete<altitude::TextureMap> >={mutex={_opaque_pthread_mutex_t=q[56c]}}{atomic<altitude::TextureMap *>=A^{TextureMap}}{function<altitude::TextureMap *()>={type=[32C]}^{__base<altitude::TextureMap *()>}}}}16{shared_ptr<gss::StylesheetManager<gss::PropertyID> >=^{StylesheetManager<gss::PropertyID>}^{__shared_weak_count}}24, name: initWithGlobeView:stylesheet:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

