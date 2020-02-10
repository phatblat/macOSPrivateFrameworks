//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

__attribute__((visibility("hidden")))
@interface UINSPDFPrintingView : NSView
{
    CDUnknownBlockType _pdfDocumentGenerator;
    id <UINSPDFDocument> _cachedPdfDocument;
    double _scale;
    long long _pageToPrint;
    struct CGSize _paperSize;
    struct CGRect _imageablePageBounds;
}

@property long long pageToPrint; // @synthesize pageToPrint=_pageToPrint;
@property double scale; // @synthesize scale=_scale;
@property struct CGSize paperSize; // @synthesize paperSize=_paperSize;
@property struct CGRect imageablePageBounds; // @synthesize imageablePageBounds=_imageablePageBounds;
@property(retain) id <UINSPDFDocument> cachedPdfDocument; // @synthesize cachedPdfDocument=_cachedPdfDocument;
@property(copy) CDUnknownBlockType pdfDocumentGenerator; // @synthesize pdfDocumentGenerator=_pdfDocumentGenerator;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (struct CGPoint)locationOfPrintRect:(struct CGRect)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (id)printJobTitle;
@property(readonly, nonatomic) id <UINSPDFDocument> pdfDocument;
- (id)_generatePDF;
- (id)initWithPDFDocumentGenerator:(CDUnknownBlockType)arg1;

@end
