//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSScrubberItemView.h"

@class NSLayoutConstraint, NSString, NSView, _VisualScrubberItemViewAccessibilityWrapper;

__attribute__((visibility("hidden")))
@interface VisualScrubberItemView : NSScrubberItemView
{
    NSView *_lighteningLayerView;
    NSView *_tintOverlayView;
    _VisualScrubberItemViewAccessibilityWrapper *_accessibilityWrapper;
    NSLayoutConstraint *_bottomAlignmentConstraint;
    NSLayoutConstraint *_aspectRatioConstraint;
    BOOL _hugsContent;
    NSView *_innerView;
    NSString *_contentSizeObservationKey;
    id <VisualScrubberItemViewAccessibilityDelegate> _accessibilityDelegate;
}

@property(nonatomic) __weak id <VisualScrubberItemViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(copy, nonatomic) NSString *contentSizeObservationKey; // @synthesize contentSizeObservationKey=_contentSizeObservationKey;
@property(nonatomic) BOOL hugsContent; // @synthesize hugsContent=_hugsContent;
@property(retain, nonatomic) NSView *innerView; // @synthesize innerView=_innerView;
- (void).cxx_destruct;
- (void)_updateAspectRatioConstraints;
- (void)_updateContentHuggingConstraints;
- (void)_updateTint;
- (void)_addInnerViewObservers;
- (void)_clearInnerViewObservers;
- (void)setAcccessibilityDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setInnerView:(id)arg1 contentSizeObservationKey:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

