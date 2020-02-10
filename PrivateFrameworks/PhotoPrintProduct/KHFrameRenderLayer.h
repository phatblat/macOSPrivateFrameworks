//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHBaseLayer.h>

@class KHDrawingContentLayer, KHFrame, KHLayoutRenderLayer, KHPhotoContentLayer, KHTreatmentRenderLayer;

@interface KHFrameRenderLayer : KHBaseLayer
{
    BOOL _clipsToBounds;
    BOOL _canDrawIntoBackground;
    BOOL _fixed;
    BOOL _editing;
    BOOL _editingActive;
    KHFrame *_frameObject;
    double _drawingScale;
    unsigned long long _contentType;
    double _maskOutsetLimit;
    id <KHPhotoContentLayerDelegate> _photoContentDelegate;
    id <KHFrameContentLayerProvider> _contentLayerDelegate;
    KHTreatmentRenderLayer *_backgroundRenderLayer;
    KHBaseLayer *_contentRenderLayer;
    KHTreatmentRenderLayer *_foregroundRenderLayer;
    struct CGPoint _drawingOffset;
}

@property(retain, nonatomic) KHTreatmentRenderLayer *foregroundRenderLayer; // @synthesize foregroundRenderLayer=_foregroundRenderLayer;
@property(retain, nonatomic) KHBaseLayer *contentRenderLayer; // @synthesize contentRenderLayer=_contentRenderLayer;
@property(retain, nonatomic) KHTreatmentRenderLayer *backgroundRenderLayer; // @synthesize backgroundRenderLayer=_backgroundRenderLayer;
@property(nonatomic) id <KHFrameContentLayerProvider> contentLayerDelegate; // @synthesize contentLayerDelegate=_contentLayerDelegate;
@property(nonatomic) id <KHPhotoContentLayerDelegate> photoContentDelegate; // @synthesize photoContentDelegate=_photoContentDelegate;
@property(nonatomic, getter=editingActive) BOOL editingActive; // @synthesize editingActive=_editingActive;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isFixed) BOOL fixed; // @synthesize fixed=_fixed;
@property(nonatomic) BOOL canDrawIntoBackground; // @synthesize canDrawIntoBackground=_canDrawIntoBackground;
@property(nonatomic) BOOL clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
@property(nonatomic) double maskOutsetLimit; // @synthesize maskOutsetLimit=_maskOutsetLimit;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) struct CGPoint drawingOffset; // @synthesize drawingOffset=_drawingOffset;
@property(nonatomic) double drawingScale; // @synthesize drawingScale=_drawingScale;
@property(retain, nonatomic) KHFrame *frameObject; // @synthesize frameObject=_frameObject;
- (void)layoutSublayers;
- (void)setNeedsLayout;
- (void)setContentsScale:(double)arg1;
- (void)setNeedsDisplay;
- (void)setMasksToBounds:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)willDisappear;
- (void)willAppear;
- (void)backfillIfNecessaryInOperationQueue:(id)arg1;
- (void)setContentZoom:(double)arg1;
- (void)setContentTranslation:(struct CGPoint)arg1;
- (double)maximumTranslationFromEdge:(unsigned int)arg1;
@property(nonatomic) unsigned long long contentClipMode;
@property(nonatomic) struct CGColor *contentBackgroundColor;
@property(readonly, nonatomic) struct CGRect contentFrame;
@property(readonly, nonatomic) CDStruct_6b31c1a5 adjustedBleedInsets;
@property(readonly, nonatomic) KHDrawingContentLayer *drawingContentLayer;
@property(readonly, nonatomic) KHPhotoContentLayer *photoContentLayer;
@property(readonly, nonatomic) KHLayoutRenderLayer *parentLayoutRenderLayer;
- (void)updateForegroundRenderLayer;
- (void)updateBackgroundRenderLayer;
- (void)updateContentRenderLayerMask;
- (void)updateContentRenderLayer;
- (void)updateContentsScale;
- (void)updateVisibility;
- (void)dealloc;
- (id)init;

@end
