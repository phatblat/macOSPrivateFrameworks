//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSImage;

@interface GKAvatarImage : NSObject
{
    NSData *_imageData;
    NSImage *_image;
}

@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)prepareForUsingUIImage:(BOOL)arg1;
- (id)initWithData:(id)arg1 useUIImage:(BOOL)arg2;

@end

