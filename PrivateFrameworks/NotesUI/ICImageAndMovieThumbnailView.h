//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class ICLabel, NSColor, NSImage, NSImageView, NSLayoutConstraint, NSMutableDictionary;

@interface ICImageAndMovieThumbnailView : NSView
{
    BOOL _showAsMovie;
    BOOL _hairlineWidthUnitIsInPoint;
    BOOL _forceSquareImageAspectRatio;
    BOOL _showMovieDuration;
    unsigned long long _imageScaling;
    struct NSColor *_borderColor;
    unsigned long long _hairlineEdges;
    unsigned long long _edgesToRemoveStartPoint;
    unsigned long long _edgesToRemoveEndPoint;
    double _mininumScaleFactor;
    struct NSImageView *_imageView;
    NSLayoutConstraint *_imageViewLeftLayoutConstraint;
    NSLayoutConstraint *_imageViewRightLayoutConstraint;
    NSLayoutConstraint *_imageViewBottomLayoutConstraint;
    NSLayoutConstraint *_imageViewTopLayoutConstraint;
    struct NSView *_movieFooter;
    ICLabel *_movieDurationLabel;
    NSMutableDictionary *_hairlineLayers;
    NSMutableDictionary *_hairlineColors;
    CDStruct_1b6d18a9 _movieDuration;
}

@property(nonatomic) BOOL showMovieDuration; // @synthesize showMovieDuration=_showMovieDuration;
@property(retain, nonatomic) NSMutableDictionary *hairlineColors; // @synthesize hairlineColors=_hairlineColors;
@property(retain, nonatomic) NSMutableDictionary *hairlineLayers; // @synthesize hairlineLayers=_hairlineLayers;
@property(retain, nonatomic) ICLabel *movieDurationLabel; // @synthesize movieDurationLabel=_movieDurationLabel;
@property(retain, nonatomic) NSView *movieFooter; // @synthesize movieFooter=_movieFooter;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTopLayoutConstraint; // @synthesize imageViewTopLayoutConstraint=_imageViewTopLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewBottomLayoutConstraint; // @synthesize imageViewBottomLayoutConstraint=_imageViewBottomLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewRightLayoutConstraint; // @synthesize imageViewRightLayoutConstraint=_imageViewRightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewLeftLayoutConstraint; // @synthesize imageViewLeftLayoutConstraint=_imageViewLeftLayoutConstraint;
@property(retain, nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL forceSquareImageAspectRatio; // @synthesize forceSquareImageAspectRatio=_forceSquareImageAspectRatio;
@property(nonatomic) double mininumScaleFactor; // @synthesize mininumScaleFactor=_mininumScaleFactor;
@property(nonatomic) unsigned long long edgesToRemoveEndPoint; // @synthesize edgesToRemoveEndPoint=_edgesToRemoveEndPoint;
@property(nonatomic) unsigned long long edgesToRemoveStartPoint; // @synthesize edgesToRemoveStartPoint=_edgesToRemoveStartPoint;
@property(nonatomic) unsigned long long hairlineEdges; // @synthesize hairlineEdges=_hairlineEdges;
@property(nonatomic) BOOL hairlineWidthUnitIsInPoint; // @synthesize hairlineWidthUnitIsInPoint=_hairlineWidthUnitIsInPoint;
@property(retain, nonatomic) NSColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) CDStruct_1b6d18a9 movieDuration; // @synthesize movieDuration=_movieDuration;
@property(nonatomic) BOOL showAsMovie; // @synthesize showAsMovie=_showAsMovie;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
- (void).cxx_destruct;
- (void)updateHairlineFrames;
- (struct CGRect)frameByApplyingHorizontalReductionTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;
- (struct CGRect)frameByApplyingVerticalReductionTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;
- (double)pixelWidth;
- (double)hairlineWidthInPoint;
- (double)backingScale;
- (void)updateHairline;
- (id)hairlineLayerForEdge:(unsigned long long)arg1;
- (BOOL)usesSeparateLayerForHairlineEdge:(unsigned long long)arg1;
- (BOOL)usesSeparateLayersForHairlines;
- (void)updateDurationLabel;
- (void)setHairlineColor:(struct NSColor *)arg1 forEdges:(unsigned long long)arg2;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
- (void)setupMovieFooter;
@property(nonatomic) double imageInset; // @dynamic imageInset;
@property(retain, nonatomic) NSImage *image; // @dynamic image;
- (void)setBounds:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showMovieDuration:(BOOL)arg2;

@end

