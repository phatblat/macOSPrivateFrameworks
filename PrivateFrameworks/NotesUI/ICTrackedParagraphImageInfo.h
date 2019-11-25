//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICTrackedParagraph, NSImage, NSImageView, NSString;

@interface ICTrackedParagraphImageInfo : NSObject
{
    BOOL _estimated;
    ICTrackedParagraph *_trackedParagraph;
    NSString *_uuid;
    struct NSImage *_image;
    struct NSImageView *_imageViewIfExists;
    struct CGRect _boundingRect;
    struct CGRect _rect;
}

@property(nonatomic) BOOL estimated; // @synthesize estimated=_estimated;
@property(retain, nonatomic) NSImageView *imageViewIfExists; // @synthesize imageViewIfExists=_imageViewIfExists;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;
- (void).cxx_destruct;

@end

