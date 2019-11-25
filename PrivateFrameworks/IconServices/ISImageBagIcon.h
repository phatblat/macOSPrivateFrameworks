//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IconServices/ISIcon.h>

@class ISImageCache, NSArray;

__attribute__((visibility("hidden")))
@interface ISImageBagIcon : ISIcon
{
    NSArray *_images;
    NSArray *_decorations;
    ISImageCache *_imageCache;
}

@property(retain) ISImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)decorations;
@property(readonly) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForImageDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (id)initWithImages:(id)arg1 decorations:(id)arg2;
- (id)initWithImages:(id)arg1;

@end

