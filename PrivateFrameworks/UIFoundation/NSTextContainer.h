//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSTextLayoutOrientationProvider.h"

@class NSArray, NSDictionary, NSLayoutManager, NSTextView;

@interface NSTextContainer : NSObject <NSCoding, NSTextLayoutOrientationProvider>
{
    NSLayoutManager *_layoutManager;
    NSTextView *_textView;
    struct CGSize _size;
    double _lineFragmentPadding;
    struct __tcFlags {
        unsigned int widthTracksTextView:1;
        unsigned int heightTracksTextView:1;
        unsigned int observingFrameChanges:1;
        unsigned int lineBreakMode:4;
        unsigned int oldAPI:1;
        unsigned int _reserved:8;
    } _tcFlags;
    unsigned long long _maximumLines;
    NSArray *_exclusionPaths;
    struct CGPath *_cachedBoundingPath;
    struct __CFArray *_cachedClippingAttributes;
    struct __CFArray *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
}

+ (void)initialize;
- (id)description;
@property(readonly) long long layoutOrientation; // @dynamic layoutOrientation;
- (BOOL)containsPoint:(struct CGPoint)arg1;
@property(readonly, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2 writingDirection:(long long)arg3 remainingRect:(struct CGRect *)arg4;
@property unsigned long long maximumNumberOfLines;
@property(copy) NSArray *exclusionPaths;
- (void)setAttributesForExtraLineFragment:(id)arg1;
- (id)attributesForExtraLineFragment;
@property unsigned long long lineBreakMode;
@property double lineFragmentPadding;
@property struct CGSize size;
- (struct CGSize)containerSize;
- (void)setContainerSize:(struct CGSize)arg1;
@property BOOL heightTracksTextView;
@property BOOL widthTracksTextView;
@property __weak NSTextView *textView;
- (struct CGPoint)textContainerOrigin;
- (void)replaceLayoutManager:(id)arg1;
@property NSLayoutManager *layoutManager;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1;
- (void)_commonInit;
- (double)minimumLineFragmentWidth;
- (void)setMinimumLineFragmentWidth:(double)arg1;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (void)_containerTextViewFrameChanged:(id)arg1;
- (void)_resizeAccordingToTextView:(id)arg1;
- (BOOL)_containerObservesTextViewFrameChanges;
- (void)_setContainerObservesTextViewFrameChanges:(BOOL)arg1;

@end

