//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer, NSImage;

@interface ICAttachmentBrickImageViewV2 : NSView
{
    BOOL _transparentBackground;
    struct NSImage *_image;
    unsigned long long _imageScaling;
    CALayer *_imageLayer;
}

@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) BOOL transparentBackground; // @synthesize transparentBackground=_transparentBackground;
@property(nonatomic) unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)updateBackgroundColor;
- (void)setContentsScale:(double)arg1;
- (void)viewDidChangeBackingProperties;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)updateSublayersBounds:(struct CGRect)arg1;
@property(nonatomic) double cornerRadius; // @dynamic cornerRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end
