//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PDFDocument;

__attribute__((visibility("hidden")))
@interface PDFPrintViewPrivate : NSObject
{
    PDFDocument *document;
    NSString *printJobTitle;
    int pageIndex;
    BOOL autoRotate;
    BOOL rotateRight;
    long long scaleMode;
}

- (void).cxx_destruct;

@end
