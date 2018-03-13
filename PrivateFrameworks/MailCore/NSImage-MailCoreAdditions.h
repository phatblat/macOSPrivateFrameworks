//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@class NSBitmapImageRep, NSData;

@interface NSImage (MailCoreAdditions)
+ (id)rotateImage:(id)arg1 byDegrees:(double)arg2;
+ (id)imageDataForType:(id *)arg1 fromPasteboard:(id)arg2;
+ (id)imagePasteboardTypesWithPreferenceToPNG;
@property(readonly, nonatomic) double pixelsHigh;
@property(readonly, nonatomic) double pixelsWide;
@property(readonly, nonatomic) unsigned long long frameCount;
@property(readonly, copy, nonatomic) NSData *PNGData;
@property(readonly, nonatomic) NSBitmapImageRep *bitmapImageRep;
@property(readonly, nonatomic) NSImage *opaqueImage;
@end

