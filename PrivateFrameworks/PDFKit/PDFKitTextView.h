//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTextViewDelegate.h"

@class NSString, PDFKitTextViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFKitTextView : NSObject <NSTextViewDelegate>
{
    PDFKitTextViewPrivate *_private;
}

- (void).cxx_destruct;
- (id)accessibilityTitleUIElement;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (void)_setAttributedString:(id)arg1;
- (void)_setup;
- (void)_setAlignment:(long long)arg1;
- (void)_setFontColor:(id)arg1;
- (void)_setFont:(id)arg1;
- (void)_setString:(id)arg1;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)textDidChange:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)removeFromSuperview;
- (void)rotateByAngle:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)annotation;
- (id)layer;
- (id)textView;
- (id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
