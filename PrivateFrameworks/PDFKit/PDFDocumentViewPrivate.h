//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, PDFAccessibilityDocumentController, PDFDocument, PDFDocumentContentView, PDFPageBackgroundManager, PDFRenderingProperties, PDFView;

__attribute__((visibility("hidden")))
@interface PDFDocumentViewPrivate : NSObject
{
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    struct CGSize documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    _Bool ignoreChangedBoundsForBoxNotification;
    struct CGRect cachedBounds;
    NSArray *accessibilityPageElements;
    PDFAccessibilityDocumentController *accessibilityDocumentController;
}

- (void).cxx_destruct;

@end

