//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "CAAnimationDelegate.h"

@class NSImage, NSString, PKMacLinedPaperView;

@interface PKTextAttachmentDrawingViewTile : NSView <CAAnimationDelegate>
{
    BOOL _topTile;
    BOOL _bottomTile;
    BOOL _scheduled;
    BOOL _valid;
    NSImage *_image;
    NSImage *_cachedDrawingImage;
    PKMacLinedPaperView *_linedPaperView;
    struct CGRect _drawingFrame;
}

@property(retain, nonatomic) PKMacLinedPaperView *linedPaperView; // @synthesize linedPaperView=_linedPaperView;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) struct CGRect drawingFrame; // @synthesize drawingFrame=_drawingFrame;
@property(retain, nonatomic) NSImage *cachedDrawingImage; // @synthesize cachedDrawingImage=_cachedDrawingImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL scheduled; // @synthesize scheduled=_scheduled;
@property(nonatomic) BOOL bottomTile; // @synthesize bottomTile=_bottomTile;
@property(nonatomic) BOOL topTile; // @synthesize topTile=_topTile;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)setTemporaryImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 drawingFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
