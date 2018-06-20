//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MediaUITrimBackgroundView, MediaUITrimClipView, MediaUITrimDimmerView, MediaUITrimIndicatorView, MediaUITrimSelectionView, MediaUITrimTracksView, NSArray;

@interface MediaUITrimView : NSView
{
    MediaUITrimBackgroundView *_backgroundView;
    MediaUITrimClipView *_clipView;
    MediaUITrimTracksView *_tracksView;
    MediaUITrimDimmerView *_dimmerViews[2];
    MediaUITrimSelectionView *_selectionView;
    MediaUITrimIndicatorView *_indicatorView;
    double _minValue;
    double _maxValue;
    double _currentValue;
    double _selectionStart;
    double _selectionEnd;
    double _minimumSelectionLength;
    double _maximumSelectionLength;
    NSArray *_trackViewControllers;
    id <MediaUITrimViewDelegate> _delegate;
    unsigned long long _focusedPart;
}

+ (void)initialize;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
@property(nonatomic) id <MediaUITrimViewDelegate> delegate;
@property(copy, nonatomic) NSArray *trackViewControllers;
@property(nonatomic) double selectionEnd;
@property(nonatomic) double selectionStart;
@property(nonatomic) double currentValue;
@property(nonatomic) double maxValue;
@property(nonatomic) double minValue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (unsigned int)_CAViewFlags;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)layoutSubviews;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)indicatorAccessibilityElementForPart:(unsigned long long)arg1;

@end

