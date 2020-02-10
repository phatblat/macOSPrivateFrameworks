//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding>
{
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (void).cxx_destruct;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (void)setAlignment:(long long)arg1;
- (long long)alignment;
- (void)setFontColor:(id)arg1;
- (id)fontColor;
- (void)setFont:(id)arg1;
- (id)font;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
