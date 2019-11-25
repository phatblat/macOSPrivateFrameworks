//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGSplitLayout.h>

#import "PXChangeObserver.h"
#import "PXCuratedLibraryRowBasedLayout.h"
#import "PXGDisplayAssetSource.h"
#import "PXGGeneratedLayoutDelegate.h"
#import "PXGItemsLayoutDelegate.h"
#import "PXGShadowSource.h"
#import "PXGViewSource.h"

@class NSSet, NSString, PXAssetCollectionReference, PXAssetsDataSource, PXAssetsSectionConfigurator, PXAssetsSectionLayoutSpec, PXCuratedLibraryActionManager, PXCuratedLibraryActionPerformer, PXCuratedLibraryAssetDecorationSource, PXCuratedLibraryOverlayButtonConfiguration, PXCuratedLibrarySectionHeaderLayout, PXCuratedLibraryShowAllActionPerformer, PXGLayout, PXGLayoutGuide, PXSelectionSnapshot;

@interface PXAssetsSectionLayout : PXGSplitLayout <PXChangeObserver, PXGShadowSource, PXGViewSource, PXGDisplayAssetSource, PXGGeneratedLayoutDelegate, PXGItemsLayoutDelegate, PXCuratedLibraryRowBasedLayout>
{
    CDStruct_5f1286c4 _updateFlags;
    CDStruct_5f1286c4 _postUpdateFlags;
    unsigned int _sectionBoundariesSpriteIndex;
    unsigned int _sectionShadowSpriteIndex;
    unsigned int _showAllButtonSpriteIndex;
    unsigned short _showAllButtonVersion;
    struct CGSize _cachedShowAllButtonConfigurationSize;
    unsigned int _selectAllButtonSpriteIndex;
    unsigned short _selectAllButtonVersion;
    struct CGSize _cachedSelectAllButtonConfigurationSize;
    PXCuratedLibrarySectionHeaderLayout *_sectionHeaderLayout;
    BOOL _isLastSection;
    BOOL _isUpdatingLocalSprites;
    PXCuratedLibraryAssetDecorationSource *_assetDecorationSource;
    BOOL _showAllButtonConfigurationIsValid;
    BOOL _selectAllButtonConfigurationIsValid;
    PXAssetCollectionReference *_assetCollectionReference;
    BOOL _isSelecting;
    BOOL _canStartSelecting;
    BOOL _wantsShadow;
    BOOL _showsSkimmingHints;
    BOOL _showsSkimmingSlideshow;
    BOOL _showsSkimmingInteraction;
    BOOL _allowsPositionDependentHeaderContentOpacity;
    BOOL _presentedSkimming;
    PXCuratedLibraryOverlayButtonConfiguration *_showAllButtonConfiguration;
    PXCuratedLibraryOverlayButtonConfiguration *_selectAllButtonConfiguration;
    long long _zoomLevel;
    long long _targetZoomLevel;
    PXAssetsSectionLayoutSpec *_spec;
    long long _section;
    PXAssetsDataSource *_dataSource;
    PXCuratedLibraryActionManager *_actionManager;
    long long _numberOfPrecedingAssets;
    PXCuratedLibraryShowAllActionPerformer *_showAllActionPerformer;
    PXCuratedLibraryActionPerformer *_selectAllActionPerformer;
    NSString *_selectAllButtonTitle;
    PXGLayoutGuide *_headerLayoutGuide;
    long long _maxSkimmingIndex;
    long long _currentSkimmingIndex;
    PXGLayout *_headerLayout;
    PXGLayout *_bodyContentLayout;
    PXAssetsSectionConfigurator *_configurator;
    PXGLayout *_bodyContainerLayout;
    double _distanceBetweenTitleTopAndBodyBottom;
    double _distanceBetweenHeaderTopAndNextBodyTop;
    double _intersectionSpacing;
    struct CGRect _showAllButtonFrame;
    struct PXSimpleIndexPath _presentedSectionIndexPath;
}

+ (struct CGSize)estimatedSizeWithReferenceSize:(struct CGSize)arg1 assetCollection:(id)arg2 numberOfAssets:(long long)arg3 isCurated:(BOOL)arg4 zoomLevel:(long long)arg5 spec:(id)arg6;
@property(nonatomic) double intersectionSpacing; // @synthesize intersectionSpacing=_intersectionSpacing;
@property(readonly, nonatomic) BOOL presentedSkimming; // @synthesize presentedSkimming=_presentedSkimming;
@property(readonly, nonatomic) struct PXSimpleIndexPath presentedSectionIndexPath; // @synthesize presentedSectionIndexPath=_presentedSectionIndexPath;
@property(nonatomic) struct CGRect showAllButtonFrame; // @synthesize showAllButtonFrame=_showAllButtonFrame;
@property(nonatomic) double distanceBetweenHeaderTopAndNextBodyTop; // @synthesize distanceBetweenHeaderTopAndNextBodyTop=_distanceBetweenHeaderTopAndNextBodyTop;
@property(nonatomic) double distanceBetweenTitleTopAndBodyBottom; // @synthesize distanceBetweenTitleTopAndBodyBottom=_distanceBetweenTitleTopAndBodyBottom;
@property(nonatomic) BOOL allowsPositionDependentHeaderContentOpacity; // @synthesize allowsPositionDependentHeaderContentOpacity=_allowsPositionDependentHeaderContentOpacity;
@property(retain, nonatomic) PXGLayout *bodyContainerLayout; // @synthesize bodyContainerLayout=_bodyContainerLayout;
@property(retain, nonatomic) PXAssetsSectionConfigurator *configurator; // @synthesize configurator=_configurator;
@property(readonly, nonatomic) PXGLayout *bodyContentLayout; // @synthesize bodyContentLayout=_bodyContentLayout;
@property(retain, nonatomic) PXGLayout *headerLayout; // @synthesize headerLayout=_headerLayout;
@property(nonatomic) long long currentSkimmingIndex; // @synthesize currentSkimmingIndex=_currentSkimmingIndex;
@property(nonatomic) long long maxSkimmingIndex; // @synthesize maxSkimmingIndex=_maxSkimmingIndex;
@property(nonatomic) BOOL showsSkimmingInteraction; // @synthesize showsSkimmingInteraction=_showsSkimmingInteraction;
@property(nonatomic) BOOL showsSkimmingSlideshow; // @synthesize showsSkimmingSlideshow=_showsSkimmingSlideshow;
@property(nonatomic) BOOL showsSkimmingHints; // @synthesize showsSkimmingHints=_showsSkimmingHints;
@property(retain, nonatomic) PXGLayoutGuide *headerLayoutGuide; // @synthesize headerLayoutGuide=_headerLayoutGuide;
@property(retain, nonatomic) NSString *selectAllButtonTitle; // @synthesize selectAllButtonTitle=_selectAllButtonTitle;
@property(retain, nonatomic) PXCuratedLibraryActionPerformer *selectAllActionPerformer; // @synthesize selectAllActionPerformer=_selectAllActionPerformer;
@property(retain, nonatomic) PXCuratedLibraryShowAllActionPerformer *showAllActionPerformer; // @synthesize showAllActionPerformer=_showAllActionPerformer;
@property(nonatomic) BOOL wantsShadow; // @synthesize wantsShadow=_wantsShadow;
@property(nonatomic) long long numberOfPrecedingAssets; // @synthesize numberOfPrecedingAssets=_numberOfPrecedingAssets;
@property(nonatomic) BOOL canStartSelecting; // @synthesize canStartSelecting=_canStartSelecting;
@property(nonatomic) BOOL isSelecting; // @synthesize isSelecting=_isSelecting;
@property(readonly, nonatomic) PXCuratedLibraryActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) PXAssetsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) long long section; // @synthesize section=_section;
@property(retain, nonatomic) PXAssetsSectionLayoutSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) long long targetZoomLevel; // @synthesize targetZoomLevel=_targetZoomLevel;
@property(nonatomic) long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)canSelectAccessibilityGroupElementsChildren;
- (BOOL)canSelectAccessibilityGroupElements;
- (BOOL)hasBodyContent;
- (BOOL)canCreateAccessibilityGroupElement;
- (id)diagnosticDescription;
- (struct CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned int)arg2;
- (id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 *)arg2 forItemsInRange:(struct _NSRange)arg3;
- (struct CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)_displayAssetForBodyItem:(long long)arg1;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)screenScaleDidChange;
- (void)contentSizeDidChange;
- (id)_rowBasedBodyContentLayout;
- (void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double buildingRowSpacing;
@property(readonly, nonatomic) double buildingRowContentHeight;
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
- (id)_assetReferenceClosestVisuallyToAssetReference:(id)arg1;
- (struct PXSimpleIndexPath)_dataSourceIndexPathForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (BOOL)_shouldAnchorOnAssetCollection;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
@property(readonly, nonatomic) id <PXDisplayAssetFetchResult> keyAssetsFetchResult;
@property(readonly, nonatomic) long long keyItemIndex;
@property(readonly, nonatomic) BOOL isCurated;
@property(readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection;
@property(readonly, nonatomic) long long numberOfAssets;
@property(readonly, nonatomic) struct PXSimpleIndexPath sectionIndexPath;
- (void)_updateAssetsWithCoveredBottomTrailingCorner;
- (void)_invalidateAssetsWithCoveredBottomTrailingCorner;
@property(readonly, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *selectAllButtonConfiguration; // @synthesize selectAllButtonConfiguration=_selectAllButtonConfiguration;
- (void)_updateSelectAllButtonPosition;
- (void)_invalidateSelectAllButtonPosition;
- (void)_invalidateSelectAllButton;
@property(readonly, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *showAllButtonConfiguration; // @synthesize showAllButtonConfiguration=_showAllButtonConfiguration;
- (void)_updateShowAllButtonPosition;
- (void)_invalidateShowAllButtonPosition;
- (void)_invalidateShowAllButton;
- (void)_updateSectionHeaderProperties;
- (void)_updateDistanceProperties;
- (void)_updateLocalSprites;
- (void)_updateDecorationSource;
- (void)_updateContent;
- (void)_invalidateContent;
- (void)_updateConfigurator;
- (void)_invalidateConfigurator;
- (void)setBodyContentLayout:(id)arg1 wantsDecoration:(BOOL)arg2;
@property(readonly, copy) NSString *description;
- (void)visibleRectDidChange;
- (id)layoutForItemChanges;
- (void)update;
@property(copy, nonatomic) NSSet *draggedAssetReferences;
@property(retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (id)initWithSection:(long long)arg1 dataSource:(id)arg2 actionManager:(id)arg3 zoomLevel:(long long)arg4 spec:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

