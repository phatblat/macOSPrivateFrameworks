//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PKTextAttachmentView.h"

@class NSImage, NSOperationQueue, NSString, NSTextAttachment, NSTimer, PKDrawing, PKImageRenderer, PKLinedPaper, PKMacLinedPaperView;

@interface PKTextAttachmentDrawingView : NSView <PKTextAttachmentView>
{
    struct CGColor *_paperTextureColor;
    BOOL _currentModeIsDarkMode;
    BOOL _isAnimatingDarkMode;
    NSTextAttachment *_textAttachment;
    PKLinedPaper *_linedPaper;
    NSOperationQueue *_renderTileQueue;
    NSTimer *_redrawTimer;
    PKImageRenderer *_tileRenderer;
    PKMacLinedPaperView *_linedPaperView;
    PKDrawing *_drawing;
    NSImage *_liveResizeImage;
    struct CGSize _currentImageSize;
    struct CGRect _liveResizeImageDrawingFrame;
}

@property(nonatomic) BOOL isAnimatingDarkMode; // @synthesize isAnimatingDarkMode=_isAnimatingDarkMode;
@property(nonatomic) BOOL currentModeIsDarkMode; // @synthesize currentModeIsDarkMode=_currentModeIsDarkMode;
@property(nonatomic) struct CGRect liveResizeImageDrawingFrame; // @synthesize liveResizeImageDrawingFrame=_liveResizeImageDrawingFrame;
@property(retain, nonatomic) NSImage *liveResizeImage; // @synthesize liveResizeImage=_liveResizeImage;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) PKMacLinedPaperView *linedPaperView; // @synthesize linedPaperView=_linedPaperView;
@property(retain, nonatomic) PKImageRenderer *tileRenderer; // @synthesize tileRenderer=_tileRenderer;
@property(retain, nonatomic) NSTimer *redrawTimer; // @synthesize redrawTimer=_redrawTimer;
@property(retain, nonatomic) NSOperationQueue *renderTileQueue; // @synthesize renderTileQueue=_renderTileQueue;
@property(nonatomic) struct CGSize currentImageSize; // @synthesize currentImageSize=_currentImageSize;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property(nonatomic) __weak NSTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
- (void).cxx_destruct;
- (void)_liveResizeDidEnd;
- (void)_liveResizeWillStart;
- (void)_textStorageDidProcessEditing;
- (void)_textClipViewDidChange;
- (void)_textViewDidChangeSize;
- (void)viewDidMoveToSuperview;
- (void)_triggerRedraw;
- (void)_scheduleRenderingForTile:(id)arg1;
- (id)generateImageForTile:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 drawingImage:(id)arg4 parentFrame:(struct CGRect)arg5 tileBounds:(struct CGRect)arg6 linedPaperRenderBlock:(CDUnknownBlockType)arg7;
- (id)generateImageForTile:(id)arg1 drawingImage:(id)arg2;
- (CDUnknownBlockType)linedPaperRenderBlockForTile:(id)arg1;
- (void)_scheduleTilesForRect:(struct CGRect)arg1;
- (void)_purgeTilesOutsideRect:(struct CGRect)arg1;
- (void)_updateTiles;
- (void)_invalidateTiles;
- (void)_redraw;
- (id)tiles;
- (struct CGRect)drawingBounds;
- (double)drawingAspectRatio;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGAffineTransform)fromViewTransform;
- (struct CGAffineTransform)drawingToViewTransform;
- (double)drawingScaleFactor;
- (void)_createTilesIfNecessary;
- (void)_recreateTiles;
- (void)_updateAttachmentBounds;
- (long long)_characterIndex;
- (id)_textView;
- (void)updateFrameForTextContainer;
- (void)updateLinedPaperView;
- (BOOL)isFlipped;
- (void)drawingDataDidChange:(id)arg1;
- (id)dataForTextAttachment:(id)arg1;
- (struct CGColor *)paperTextureColor;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)isDarkModeEnabled;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAttachment:(id)arg1 inserted:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

