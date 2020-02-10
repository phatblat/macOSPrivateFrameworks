//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSImage, NSString, NSView, PHAsset, PMTitleSubtitleView, VEKProduction;

@interface PMPosterViewController : NSViewController
{
    BOOL _preventRotation;
    BOOL _isRotating;
    NSString *_titleFontName;
    VEKProduction *_production;
    double _titleScale;
    NSImage *_image;
    NSView *_imageView;
    PMTitleSubtitleView *_titleSubtitleView;
    NSString *_titleText;
    NSString *_subtitleText;
    PHAsset *_asset;
    struct CGRect _landscapeFraming;
    struct CGRect _portraitFraming;
}

+ (double)biggestScreenPixelDimension;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) BOOL isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) struct CGRect portraitFraming; // @synthesize portraitFraming=_portraitFraming;
@property(nonatomic) struct CGRect landscapeFraming; // @synthesize landscapeFraming=_landscapeFraming;
@property(retain, nonatomic) PMTitleSubtitleView *titleSubtitleView; // @synthesize titleSubtitleView=_titleSubtitleView;
@property(retain, nonatomic) NSView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) BOOL preventRotation; // @synthesize preventRotation=_preventRotation;
@property(nonatomic) double titleScale; // @synthesize titleScale=_titleScale;
@property(nonatomic) __weak VEKProduction *production; // @synthesize production=_production;
@property(retain, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
- (void).cxx_destruct;
@property(nonatomic) double titleSubtitleAlpha;
- (void)viewWillLayoutSubviews;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize)arg1;
- (void)assignImageFraming;
- (void)fetchImageAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchImageSomewhatAsynchronously;
- (void)prewarmFraming;
- (struct CGRect)frameForImage;
- (struct CGSize)sizeForImage;
- (id)processedImageFromImage:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end
