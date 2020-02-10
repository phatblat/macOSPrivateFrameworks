//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PVEffect.h>

@class NSArray, NSLock, NSMutableDictionary, NSString, NSURL;

@interface PVMotionEffect : PVEffect
{
    void *_document;
    double _docPixelAspectRatio;
    double _docDurInSeconds;
    unsigned int _docFrames;
    double _docFrameRate;
    struct CGSize _documentSize;
    struct CGSize _currentDocumentSize;
    double _effectOutputAspect;
    unsigned int _effectIndex;
    unsigned int _numInputs;
    _Bool _needsCrop;
    NSLock *_documentLock;
    struct METimeRemap _timeRemap;
    struct OZChannelBool *_buildInEnableChan;
    struct OZChannelBool *_buildOutEnableChan;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> *_dropZoneIndexToID;
    struct FigTime _motionPosterTime;
    _Bool _cachedPosterTime;
    // Error parsing type: {atomic<DocLoadStatus>="__a_"Ai}, name: _docLoadStatus
    NSURL *_projectURL;
    NSString *_projectPath;
    unsigned int _topLevelGroupID;
    int _topLevelGroupIDStatus;
    vector_f672cb0f *_textObjectIDs;
    NSArray *_defaultAttributedStrings;
    CDStruct_1b6d18a9 _renderStartOffset;
    _Bool _needToUpdateSceneDuration;
    _Bool _cachedRenderDirty;
    NSMutableDictionary *_cachedPublishedParams;
    NSMutableDictionary *_parametersThatInvalidateCache;
    struct FigTime _loopTime;
}

+ (id)publishedParameterNameToParameterKeyMap;
+ (id)parameterKeyToPublishedParameterNameMap;
+ (void)clearPreviewStats;
+ (CDStruct_1b6d18a9)liveTitlePickerLoopTime;
+ (void)setLiveTitlePickerLoopTime:(CDStruct_1b6d18a9)arg1;
+ (void)initializeMotionInternal;
+ (void)initializeMotion;
+ (void)registerEffects;
+ (id)_userLibPaths;
+ (id)_bundleLibPaths;
+ (void)registerNoneEffectForType:(id)arg1 effectID:(id)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (BOOL)replacedMappedEffectWithNewPath:(id)arg1;
+ (void)scanTemplatesInDirectory:(id)arg1 doingRescan:(BOOL)arg2 replaceMappedEffectPath:(BOOL)arg3 origCache:(id)arg4 newCache:(id)arg5;
+ (void)mapTemplatesInDirectory:(id)arg1 doingRescan:(BOOL)arg2 origCache:(id)arg3 newCache:(id)arg4;
+ (void)registerTemplateInDirectory:(id)arg1 relPath:(id)arg2 effectID:(id)arg3 doingRescan:(BOOL)arg4 origCache:(id)arg5 newCache:(id)arg6;
+ (id)_effectPathFromID:(id)arg1;
+ (id)effectMap;
+ (void)extractMetadataFromContentsOfFile:(id)arg1 toCacheEntry:(id)arg2;
+ (void)handleCleanupEffectsCache;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (void)handleApplicationWillTerminate;
+ (id)newEffectWithData:(id)arg1;
+ (id)newEffectWithURL:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *parametersThatInvalidateCache; // @synthesize parametersThatInvalidateCache=_parametersThatInvalidateCache;
@property(retain, nonatomic) NSMutableDictionary *cachedPublishedParams; // @synthesize cachedPublishedParams=_cachedPublishedParams;
@property(nonatomic) struct FigTime loopTime; // @synthesize loopTime=_loopTime;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)hasBuiltInEnvironment;
- (BOOL)shouldDisableWordFadeOut;
- (void)disableWordFadeOutIfNecessary;
- (BOOL)transcriptionHitTest:(struct CGPoint)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)setTranscriptionText:(id)arg1;
- (void)resetToDefaultTranscriptionForLocaleID:(id)arg1;
- (void)clearTranscription;
- (BOOL)hasEmojiRenderingWorkaround;
- (int)orientation;
- (BOOL)isTextFlipped;
- (BOOL)supportsOrientation;
- (BOOL)supportsFlippingText;
- (BOOL)_supportsParam:(id)arg1;
- (id)defaultAttributedString:(unsigned long long)arg1;
- (void)storeDefaultStrings;
- (void)disableElementWithPublishedParam:(struct PCString *)arg1 disable:(_Bool)arg2;
- (void)disableBackgroundMovie:(_Bool)arg1;
- (void)disableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (void)enableRenderingTextObjectAtIndex:(unsigned int)arg1;
- (int)_objectTransform:(PCMatrix44Tmpl_93ed1289 *)arg1 objectID:(unsigned int)arg2 time:(struct FigTime)arg3 componentTime:(CDStruct_1b6d18a9)arg4 flatten:(_Bool)arg5;
- (int)_objectBounds:(PCRect_3a266109 *)arg1 objectID:(unsigned int)arg2 time:(struct FigTime)arg3 includeDropShadow:(_Bool)arg4 includeMasks:(_Bool)arg5;
- (int)_worldSpaceImagePoints:(struct CGPoint *)arg1 objectID:(unsigned int)arg2 time:(struct FigTime)arg3 componentTime:(CDStruct_1b6d18a9)arg4 includeDropShadow:(_Bool)arg5 includeMasks:(_Bool)arg6 flatten:(_Bool)arg7;
- (_Bool)textImagePoints:(struct CGPoint *)arg1 textAtIndex:(unsigned long long)arg2 time:(CDStruct_1b6d18a9)arg3 includeDropShadow:(_Bool)arg4;
- (id)textTransforms:(CDStruct_1b6d18a9)arg1;
- (id)textEditingBounds:(CDStruct_1b6d18a9)arg1;
- (vector_f672cb0f *)_textObjectIDs;
- (struct FigTime)_posterTimeOrMotionTimeFromComponentTime:(CDStruct_1b6d18a9)arg1 effectRange:(CDStruct_e83c9415)arg2;
- (void)setEffectParameters:(id)arg1;
- (id)effectParameters;
- (id)publishedParams;
- (void)setForceDisableBuildAnimation:(_Bool)arg1;
- (void)setForceDisableLoop:(_Bool)arg1;
- (void)setTopLevelOpacity:(double)arg1;
- (double)topLevelOpacity;
- (_Bool)renderCachingCannotNotBeEnabled:(_Bool)arg1 isTextRenderingDisabled:(_Bool)arg2 isAtPosterFrame:(_Bool)arg3 hasAdditionalScale:(_Bool)arg4 hasTransformAnimation:(_Bool)arg5;
- (_Bool)parameterInvalidatesCache:(id)arg1;
- (_Bool)didCacheInvalidatingParameterChange:(id)arg1 key:(id)arg2;
- (void)didSetCacheInvalidatingParameter:(id)arg1 forKey:(id)arg2;
- (_Bool)topLevelGroupBoundsAtPosterFrame:(struct CGRect *)arg1 includeDropShadow:(_Bool)arg2 includeMasks:(_Bool)arg3;
- (_Bool)topLevelGroupBounds:(struct CGRect *)arg1 atTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3 includeMasks:(_Bool)arg4;
- (void)setTopLevelGroupTransform_NoLock:(id)arg1;
- (void)setTopLevelGroupTransform:(id)arg1;
- (id)topLevelGroupTransformAtPosterFrame:(CDStruct_1b6d18a9)arg1;
- (id)topLevelGroupTransformAtTime:(CDStruct_1b6d18a9)arg1;
- (id)topLevelGroupTransform;
- (int)origin;
- (_Bool)imagePoints:(struct CGPoint *)arg1 time:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (_Bool)imagePointsAtPosterFrameTime:(struct CGPoint *)arg1 componentTime:(CDStruct_1b6d18a9)arg2 includeDropShadow:(_Bool)arg3;
- (void)setBuildOutEnabled:(BOOL)arg1;
- (void)setBuildInEnabled:(BOOL)arg1;
- (void)computeIntroOutroPoints;
- (void)computeLoopMarkerBasedOnTranscription;
- (void)setEffectOutputAspectWithNumber:(id)arg1;
- (struct CGSize)outputSize;
- (struct CGSize)documentSize;
- (void)setRollRadians:(double)arg1;
- (void)setQuaternion:(double)arg1:(double)arg2:(double)arg3:(double)arg4;
- (void)setIsFrontFacingCamera:(BOOL)arg1;
- (void)updateInspectableProperties:(id)arg1;
- (void)applyInspectableProperties;
- (void)applyConcatenatedTLGroupAndClipTransforms:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)setupTransitionParameters:(id)arg1;
- (void)setupTranscriptionParameters:(id)arg1;
- (void)setupTitleParameters:(id)arg1;
- (void)setupPublishedParameters:(id)arg1;
- (void)buildDropZoneIdMap;
- (void)adjustCamera:(id)arg1;
- (void)adjustPosition:(id)arg1;
- (void)setSketchStrokes:(id)arg1;
- (void)setMaskPoints:(id)arg1;
- (void)adjustKenBurnsAnimation:(id)arg1;
- (void)adjustTransitionInputs:(map_184f33b3 *)arg1 renderScale:(float)arg2 renderer:(const HGRef_5aef67ae *)arg3 inputANeedsBackground:(_Bool)arg4 inputBNeedsBackground:(_Bool)arg5 slideCropRectA:(id)arg6 slideCropRectB:(id)arg7;
- (struct HGRect)makeCropRectForDOD:(struct HGRect)arg1 renderRect:(struct CGRect)arg2 renderScale:(float)arg3;
- (void)adjustCutawayInputs:(map_184f33b3 *)arg1 splitCropRectA:(id)arg2 splitCropRectB:(id)arg3 pipRect:(id)arg4 pipScaleFactor:(id)arg5 renderScale:(float)arg6 pipNeedsCrop:(BOOL)arg7;
- (void)adjustCutawayFadeAnimation:(id)arg1;
- (void)adjustCutawayBorder:(id)arg1;
-     // Error parsing type: {HGRef<HGNode>=^{HGNode}}72@0:8{?=qiIq}16{HGRef<HGNode>=^{HGNode}}40{CGSize=dd}48^{HGRenderer=^^?{atomic<unsigned int>=AI}^{HGNode}^{HGBitmap}[8{HGRendererTextureUnit=^{HGBitmap}^{HGTransform}i}]{vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> >=^^{DepthBufferManager}^^{DepthBufferManager}{__compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> >=^^{DepthBufferManager}}}{vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> >=^^{HGExecutionUnit}^^{HGExecutionUnit}{__compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> >=^^{HGExecutionUnit}}}^{HGExecutionData}^{HGSyncData}{_opaque_pthread_rwlock_t=q[192c]}{_opaque_pthread_mutex_t=q[56c]}^{HGLUTCacheManager}^{GraphStats}^{RendererStats}iiiiiiiiiiiiiiiiiiiiiiiiiiiiiii{HGCache=^^?i^{HGCacheEntry}^{HGCacheEntry}^{HGCacheEntry}{_opaque_pthread_mutex_t=q[56c]}}BBBI[2^{HGLimits}]i{HGDotGraph={map<unsigned long, HGDotGraph::Node, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, HGDotGraph::Node> > >={__tree<std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, HGDotGraph::Node> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, HGDotGraph::Node>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, HGDotGraph::Node>, std::__1::less<unsigned long>, true> >=Q}}}{map<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge, std::__1::less<std::__1::tuple<unsigned long, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge> > >={__tree<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::__map_value_compare<std::__1::tuple<unsigned long, unsigned long>, std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::less<std::__1::tuple<unsigned long, unsigned long> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::tuple<unsigned long, unsigned long>, std::__1::__value_type<std::__1::tuple<unsigned long, unsigned long>, HGDotGraph::Edge>, std::__1::less<std::__1::tuple<unsigned long, unsigned long> >, true> >=Q}}}^{__sFILE}BB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}}{HGBufferDumper={basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}iiB}IiQQi^{HGLimitsCache}^{HGRenderQueue}^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=QQ*}{__short=(?=Cc)[23c]}{__raw=[3Q]})}}}}64, name: previewHGNodeForTime:inputHGNode:outputSize:renderer:
- (HGRef_265f9e4c)hgNodeForTime:(CDStruct_1b6d18a9)arg1 inputs:(const PVInputHGNodeMap_d4d649d7 *)arg2 renderer:(const HGRef_5aef67ae *)arg3 igContext:(HGRef_6bae45d3)arg4;
- (int)posterFrameTime:(struct FigTime *)arg1;
- (BOOL)shouldRenderPreviewAtPosterTime;
- (struct FigTime)motionTimeFromComponentTime:(CDStruct_1b6d18a9)arg1 effectRange:(CDStruct_e83c9415)arg2;
- (BOOL)isSketch;
- (BOOL)isSingleWordTranscription;
- (BOOL)isTranscription;
- (void)loadEffectInternal;
- (BOOL)loadResources;
- (BOOL)resourcesAreReady;
- (BOOL)isReady;
- (BOOL)supportsExtendedRangeInputs;
- (void)loadDocument;
- (id)projectURL;
- (id)projectPath;
- (int)numberOfInputsHint;
- (void)dealloc;
- (void)releaseResources;
- (id)initWithEffectID:(id)arg1;

@end
