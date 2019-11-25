//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSImage, NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PDFAKPageAdaptor, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface PDFPagePrivate : NSObject
{
    PDFDocument *document;
    struct CGPDFPage *page;
    struct CGColor *pageBackgroundColorHint;
    PDFView *view;
    NSString *label;
    NSImage *image;
    struct CGImage *cgImage;
    struct CGImageSource *cgImageSource;
    unsigned int cgImageOrientation;
    struct os_unfair_lock_s layoutLock;
    struct CGPDFLayout *layout;
    struct os_unfair_lock_s dataDetectorsLock;
    _Bool ranDataDetectors;
    NSString *text;
    NSAttributedString *attributedString;
    _Bool displaysAnnotations;
    _Bool displaysMarkups;
    NSMutableArray *annotations;
    NSLock *lock_getAnnotations;
    NSLock *lock_accessAnnotations;
    NSMutableArray *scannedAnnotations;
    long long rotation;
    struct CGRect mediaBox;
    struct CGRect cropBox;
    struct CGRect bleedBox;
    struct CGRect trimBox;
    struct CGRect artBox;
    _Bool bookmarked;
    _Bool isFullyConstructed;
    _Bool colorWidgetBackgrounds;
    PDFAKPageAdaptor *akPageAdaptor;
    _Bool akDidSetupRealPageModelController;
    NSMutableArray *annotationChanges;
    NSMutableSet *changedAnnotations;
    NSMutableDictionary *widgetAnnotationLookup;
    NSMutableArray *scannerResults;
    _Bool didChangeBounds;
}

- (void).cxx_destruct;

@end

