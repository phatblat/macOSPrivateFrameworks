//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoPrintProduct/KHComponentGeneratorFoldedSinglePanel.h>

@interface KHComponentGeneratorPremiumCardPanel : KHComponentGeneratorFoldedSinglePanel
{
    struct CGPDFDocument *_pdfTemplate;
}

- (void)dealloc;
- (double)templateHeight;
- (double)templateWidth;
- (BOOL)hasTemplate;
- (void)drawBackgroundInContext:(struct CGContext *)arg1 fromLayout:(id)arg2 forPath:(struct CGPath *)arg3 scale:(double)arg4;
- (void)fillContext:(struct CGContext *)arg1 scale:(double)arg2 rect:(struct CGRect)arg3 renderingIntent:(unsigned long long)arg4 section:(long long)arg5 progressDelegate:(id)arg6;
- (id)initWithComponent:(id)arg1 project:(id)arg2;

@end
