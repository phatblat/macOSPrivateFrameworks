//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class BackgroundColorView, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VisualTabPickerShadowTileView : NSView
{
    BackgroundColorView *_headerBackgroundView;
    NSView *_sidebarView;
    NSView *_toolbarView;
    NSMutableArray *_sidebarAndToolbarAnimations;
    NSView *_containerView;
}

@property(readonly) NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)_setUpBorderView;
- (void)_setUpContentViews;
- (void)_getTopBarAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)setCloseButtonVisible:(BOOL)arg1;
- (void)cleanUpAnimations;
- (void)animateToolbarImage:(id)arg1 height:(double)arg2 gridAnimation:(long long)arg3;
- (id)_sidebarAnimationWithKeyPath:(id)arg1 windowValue:(id)arg2 thumbnailValue:(id)arg3 forGridAnimation:(long long)arg4;
- (void)animateSidebarImage:(id)arg1 width:(double)arg2 gridAnimation:(long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

