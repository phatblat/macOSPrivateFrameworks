//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSImage, PDFDocument, PDFPage;

@protocol PDFPageBackgroundManagerDelegate
- (void)recieveBackgroundImage:(NSImage *)arg1 atBackgroundQuality:(int)arg2 forPage:(PDFPage *)arg3;
- (NSImage *)backgroundImageForPage:(PDFPage *)arg1 withQuality:(int *)arg2;
- (PDFDocument *)document;
@end
