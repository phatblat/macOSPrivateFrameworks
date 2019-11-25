//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

@class NSArray;

@interface PXGZoomLayout : PXGLayout
{
    CDStruct_5f1286c4 _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
    PXGLayout *_primaryLayer;
    NSArray *_layers;
    id _anchorObjectReference;
    struct CGPoint _anchorViewportCenter;
    struct NSEdgeInsets _padding;
}

@property(nonatomic) struct NSEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct CGPoint anchorViewportCenter; // @synthesize anchorViewportCenter=_anchorViewportCenter;
@property(retain, nonatomic) id anchorObjectReference; // @synthesize anchorObjectReference=_anchorObjectReference;
@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(readonly, nonatomic) PXGLayout *primaryLayer; // @synthesize primaryLayer=_primaryLayer;
- (void).cxx_destruct;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (struct CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect)arg2;
- (void)didChangeSublayoutOrigins;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)userInterfaceDirectionDidChange;
- (void)screenScaleDidChange;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)viewEnvironmentDidChange;
- (void)_updateSublayoutGeometries;
- (void)_configureSublayouts;
- (void)update;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (void)setLayers:(id)arg1 primaryLayer:(id)arg2;
- (id)init;

@end

